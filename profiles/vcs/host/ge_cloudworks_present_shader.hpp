#pragma once

namespace vcs {

// Standalone, single-present-pass adaptation of the low CloudWorks Alpha 4.0
// cloud profile by Brian Tu (RTU).  CloudWorks is licensed CC BY-NC-SA 3.0.
//
// Root-constant contract (b1, 21 DWORDs total):
//   0..3   unused draw-state padding
//   4      unused draw-state padding
//   5..7   CloudRayRight.xyz (NDC-x world-ray coefficient)
//   8      CloudTime (seconds * configured speed)
//   9..11  CloudRayUp.xyz (NDC-y world-ray coefficient)
//   12     CloudCoverage [0, 1]
//   13..15 CloudRayForward.xyz (world ray at NDC 0,0)
//   16     CloudOpacity [0, 1]
//   17..19 CloudCameraPosition.xyz (world space, Z up)
//   20     CloudSettings: bits 0..7 = march steps [4,64], bit 8 = enabled
//
// CloudRayRight/Up are deliberately not normalized camera axes.  The host must
// bake inverse projection into them.  CloudRayForward must come directly from
// unprojection (never cross(right, up)); this keeps the noise field fixed in
// world space even for a reflected/scaled GE view basis.
inline constexpr char kCloudWorksPresentShaderHlsl[] = R"CLOUD_HLSL(
Texture2D<float4> SourceTexture : register(t0);
SamplerState SourceSampler : register(s0);

cbuffer CloudPresentState : register(b1) {
    uint4 UnusedDrawState0;
    uint UnusedDrawState1;
    float3 CloudRayRight;
    float CloudTime;
    float3 CloudRayUp;
    float CloudCoverage;
    float3 CloudRayForward;
    float CloudOpacity;
    float3 CloudCameraPosition;
    uint CloudSettings;
};

struct PresentVertexOutput {
    float4 position : SV_POSITION;
    float2 uv : TEXCOORD0;
};

PresentVertexOutput PresentVS(uint id : SV_VertexID) {
    PresentVertexOutput output;
    if (id == 0u) {
        output.position = float4(-1.0, -1.0, 0.0, 1.0);
        output.uv = float2(0.0, 1.0);
    } else if (id == 1u) {
        output.position = float4(-1.0, 3.0, 0.0, 1.0);
        output.uv = float2(0.0, -1.0);
    } else {
        output.position = float4(3.0, -1.0, 0.0, 1.0);
        output.uv = float2(2.0, 1.0);
    }
    return output;
}

// CloudWorks' original scalar sine hash and linearly interpolated value noise.
float CwHash(float value) {
    return frac(sin(value / 1873.1873) * 1618.03398875);
}

float CwNoise2(float3 p) {
    float3 cell = floor(p);
    float3 f = frac(p);
    float n = 1153.0 * cell.x + 2381.0 * cell.y + p.z;
    float right = n + 1153.0;
    float down = n + 2381.0;
    float opposite = right + 2381.0;
    return lerp(lerp(CwHash(n), CwHash(right), f.x),
                lerp(CwHash(down), CwHash(opposite), f.x), f.y);
}

float CwNoise3(float3 p) {
    float3 cell = floor(p);
    float3 f = frac(p);
    float n = 1153.0 * cell.x + 2381.0 * cell.y + cell.z;
    float right = n + 1153.0;
    float down = n + 2381.0;
    float opposite = right + 2381.0;
    float a = lerp(CwHash(n), CwHash(n + 1.0), f.z);
    float b = lerp(CwHash(right), CwHash(right + 1.0), f.z);
    float c = lerp(CwHash(down), CwHash(down + 1.0), f.z);
    float d = lerp(CwHash(opposite), CwHash(opposite + 1.0), f.z);
    return lerp(lerp(a, b, f.x), lerp(c, d, f.x), f.y);
}

float CwSmooth(float edge0, float edge1, float value) {
    float x = saturate((value - edge0) / (edge1 - edge0));
    return x * x * (3.0 - 2.0 * x);
}

// x = shape factor, y = high density threshold, z = low threshold.
float3 CwCloudShape(float height, float coverage) {
    const float bottom = 300.0;
    const float middle = 450.0;
    const float top = 700.0;
    float body = CwSmooth(0.0, middle, height) *
                 (1.0 - CwSmooth(middle, top, height));
    // The handheld sky is a very small target after upscale. Use the same
    // CloudWorks profile but broaden its occupied threshold range so the deck
    // reads as a cloud mass rather than a few isolated wisps.
    float bottomRange = 0.24 + coverage * 0.52;
    float soft = (height - top) / (middle - top) *
                 (bottomRange - 0.1) + 0.1;
    float total = rcp(0.92 + coverage * 0.48);
    return float3(body, total + soft, total - soft);
}

float3 CwOffsetA(float flow) { return float3(-1.8,  1.0,  0.0) * flow; }
float3 CwOffsetB(float flow) { return float3(-2.0, -0.2,  0.0) * flow; }
float3 CwOffsetC(float flow) { return float3(-3.0,  0.0, -0.5) * flow; }
float3 CwOffsetD(float flow) { return float3(-3.5,  0.0,  0.1) * flow; }

float CwChunk(float3 worldPosition, float shapeFactor, float flow) {
    float3 p = worldPosition;
    p += float3(-0.5, 0.0, 0.0) * p.z;
    float largeNoise = CwNoise3((p + CwOffsetA(flow)) * 0.0008);
    float smallNoise = CwNoise3((p + CwOffsetB(flow)) * 0.005);
    return largeNoise * (smallNoise * 0.5 + 0.3) * shapeFactor;
}

float3 CwDistortion(float lump) {
    return float3(cos(lump * 1.6) * 60.0, 0.0, -lump * 8.0);
}

float CwDetail(float lump, float3 worldPosition, float flow) {
    float3 distortion = CwDistortion(lump);
    float detail = 0.3 * CwNoise3(
        (worldPosition + CwOffsetC(flow) + distortion) * 0.02);
    distortion.z -= detail * 16.0;
    float3 detailPosition = worldPosition + CwOffsetD(flow);
    detail += 0.2 * CwNoise3((detailPosition + distortion / 3.0) * 0.04);
    detail += detail * 0.6 *
              CwNoise3((detailPosition + distortion * 8.0) * 0.1);
    return detail;
}

// x = raw density field, y = extinction density, z = low threshold.
float3 CwDensity(float3 worldPosition, float coverage, float flow) {
    float3 shape = CwCloudShape(worldPosition.z, coverage);
    float lump = CwChunk(worldPosition, shape.x, flow);
    float field = lump * (1.0 + CwDetail(lump, worldPosition, flow));
    float solidness = lerp(0.0, 7.0 * coverage,
                           saturate((worldPosition.z - 300.0) / 400.0));
    float density = saturate((field - shape.z) /
                             max(shape.y - shape.z, 1.0e-4)) * solidness;
    return float3(field, density * 1.45, shape.z);
}

// One inexpensive approximation of CloudWorks' eight-sample sun shadow march.
// It retains the original Chunk + DetailA profile used by ShadowMarching.
float CwShadowDensity(float3 worldPosition, float coverage, float flow) {
    float3 shape = CwCloudShape(worldPosition.z, coverage);
    float lump = CwChunk(worldPosition, shape.x, flow);
    float3 distortion = CwDistortion(lump);
    float detail = 0.3 * CwNoise3(
        (worldPosition + CwOffsetC(flow) + distortion) * 0.02) * 1.75;
    float field = lump * (1.0 + detail);
    float solidness = lerp(0.0, 5.0 * coverage,
                           saturate((worldPosition.z - 300.0) / 400.0));
    return saturate((field - (shape.z - 0.1)) /
                    max(shape.y - (shape.z - 0.1), 1.0e-4)) * solidness;
}

float CwSkyMask(float2 uv, float3 source, float rayHeight) {
    uint width = 1u;
    uint height = 1u;
    SourceTexture.GetDimensions(width, height);
    float2 pixel = rcp(float2(max(width, 1u), max(height, 1u)));
    float3 left = SourceTexture.SampleLevel(SourceSampler,
        saturate(uv - float2(pixel.x, 0.0)), 0.0).rgb;
    float3 right = SourceTexture.SampleLevel(SourceSampler,
        saturate(uv + float2(pixel.x, 0.0)), 0.0).rgb;
    float3 above = SourceTexture.SampleLevel(SourceSampler,
        saturate(uv - float2(0.0, pixel.y)), 0.0).rgb;
    float3 below = SourceTexture.SampleLevel(SourceSampler,
        saturate(uv + float2(0.0, pixel.y)), 0.0).rgb;
    float localEdge = max(max(length(source - left), length(source - right)),
                          max(length(source - above), length(source - below)));
    float flatSky = 1.0 - CwSmooth(0.025, 0.12, localEdge);
    float blueOverRed = CwSmooth(0.025, 0.16, source.b - source.r);
    float blueOverGreen = CwSmooth(-0.04, 0.10, source.b - source.g);
    float luminance = dot(source, float3(0.2126, 0.7152, 0.0722));
    float visibleSky = blueOverRed * blueOverGreen *
                       CwSmooth(0.12, 0.34, luminance);
    float aboveHorizon = CwSmooth(0.035, 0.13, rayHeight);
    return saturate(aboveHorizon * visibleSky * lerp(0.55, 1.0, flatSky));
}

// Returns premultiplied cloud radiance in rgb and remaining transmittance in a.
float4 CwMarchLowLayer(float3 rayOrigin, float3 rayDirection,
                       float coverage, uint marchSteps, float flow) {
    float4 result = float4(0.0, 0.0, 0.0, 1.0);
    const float cloudBottom = 300.0;
    const float cloudTop = 700.0;
    const float cloudFadeDistance = 6000.0;
    float validDirection = rayDirection.z > 1.0e-4 ? 1.0 : 0.0;
    float safeRayHeight = max(rayDirection.z, 1.0e-4);
    float slabBegin = (cloudBottom - rayOrigin.z) / safeRayHeight;
    float slabEnd = (cloudTop - rayOrigin.z) / safeRayHeight;
    float rayBegin = max(min(slabBegin, slabEnd), 0.0);
    float rayEnd = min(max(slabBegin, slabEnd), cloudFadeDistance);
    rayEnd = validDirection > 0.5 ? rayEnd : rayBegin;

    // World-anchored jitter breaks coherent contours without producing a
    // screen-space stipple pattern that turns with the camera.
    float3 entryPosition = rayOrigin + rayDirection * rayBegin;
    float nominalStep = (rayEnd - rayBegin) / max(float(marchSteps), 1.0);
    float jitter = CwNoise3(entryPosition * float3(0.031, 0.031, 0.013) + 19.19);
    float distanceAlongRay = rayBegin + jitter * min(nominalStep, 40.0);

    const float3 sunDirection = normalize(float3(0.38, -0.28, 0.88));
    const float3 baseColor = float3(0.27, 0.32, 0.40);
    const float3 sunColor = float3(1.02, 1.00, 0.93);
    float3 radiance = 0.0;
    float transmittance = 1.0;
    float previousField = 0.0;
    float previousDensity = 0.0;

    [loop]
    for (uint stepIndex = 0u; stepIndex < 64u; ++stepIndex) {
        if (stepIndex >= marchSteps || distanceAlongRay >= rayEnd ||
            transmittance <= 0.02) break;

        float3 worldPosition = rayOrigin + rayDirection * distanceAlongRay;
        float3 densitySample = CwDensity(worldPosition, coverage, flow);

        // CloudWorks' dynamic empty-space skipping: dense regions approach a
        // five-unit step; empty regions approach 80 units, expanding with
        // distance.  Unlike the old uniform slab division, the sampled Z
        // planes therefore cannot form screen-aligned slices.
        float occupancy = saturate((2.0 * densitySample.x - previousField) /
                                   max(densitySample.z * 0.85, 1.0e-4));
        float stepLength = lerp(80.0, 5.0, occupancy);
        stepLength *= lerp(1.0, 8.0,
                           saturate(distanceAlongRay / cloudFadeDistance));
        stepLength += CwNoise2(worldPosition + float3(0.0, 0.0, flow)) * 5.0;
        stepLength = min(stepLength, 160.0);
        stepLength = min(stepLength, rayEnd - distanceAlongRay);

        if (densitySample.y > 1.0e-4 && stepLength > 0.0) {
            // Trapezoidal Beer-Lambert integration makes opacity independent
            // of the number of steps and avoids the saturated per-slice alpha
            // produced by density * uniformStepLength.
            float meanDensity = 0.5 * (previousDensity + densitySample.y);
            float opticalDepth = meanDensity * min(stepLength, 80.0) * 0.018;
            float segmentAlpha = 1.0 - exp(-opticalDepth);

            float shadowDensity = CwShadowDensity(
                worldPosition + sunDirection * 60.0, coverage, flow);
            float sunVisibility = exp(-shadowDensity * 1.35);
            float forwardScatter = pow(saturate(dot(rayDirection, sunDirection)), 24.0);
            float lighting = saturate(0.28 + sunVisibility * 0.72);
            float3 cloudColor = lerp(baseColor, sunColor, lighting);
            cloudColor += sunColor * forwardScatter * 0.10;

            radiance += transmittance * segmentAlpha * cloudColor;
            transmittance *= 1.0 - segmentAlpha;
        }

        previousField = densitySample.x;
        previousDensity = densitySample.y;
        distanceAlongRay += max(stepLength, 1.0);
    }

    result = float4(radiance, saturate(transmittance));
    return result;
}

float4 PresentPS(PresentVertexOutput input) : SV_TARGET {
    float4 source = SourceTexture.SampleLevel(SourceSampler, input.uv, 0.0);
    const uint enabledBit = 0x100u;
    if ((CloudSettings & enabledBit) == 0u) return source;

    uint marchSteps = min(64u, max(4u, CloudSettings & 0xFFu));
    float2 ndc = float2(input.uv.x * 2.0 - 1.0,
                        1.0 - input.uv.y * 2.0);
    float3 rayDirection = normalize(CloudRayForward +
                                    CloudRayRight * ndc.x +
                                    CloudRayUp * ndc.y);
    float skyMask = CwSkyMask(input.uv, source.rgb, rayDirection.z);
    if (skyMask <= 1.0e-3) return source;

    // Preserve the existing INI Speed semantics while giving the low profile
    // offsets a useful world-space velocity.
    float flow = CloudTime * 25.0;
    float4 clouds = CwMarchLowLayer(CloudCameraPosition, rayDirection,
                                    saturate(CloudCoverage), marchSteps, flow);
    float3 cloudComposite = clouds.rgb + source.rgb * clouds.a;
    source.rgb = lerp(source.rgb, cloudComposite,
                      skyMask * saturate(CloudOpacity));
    return source;
}

// World-target path. This is deliberately separate from PresentPS: its pixels
// are in the same coordinate system as the selected GE camera, and the D3D12
// pipeline depth-tests against the world's untouched clear depth. The result is
// blended behind geometry before VCS scales/composites that target to display.
float4 CloudTargetPS(PresentVertexOutput input) : SV_TARGET {
    const uint enabledBit = 0x100u;
    if ((CloudSettings & enabledBit) == 0u) discard;
    uint marchSteps = min(64u, max(4u, CloudSettings & 0xFFu));
    float2 ndc = float2(input.uv.x * 2.0 - 1.0,
                        1.0 - input.uv.y * 2.0);
    float3 rayDirection = normalize(CloudRayForward +
                                    CloudRayRight * ndc.x +
                                    CloudRayUp * ndc.y);
    if (rayDirection.z <= 1.0e-4) discard;
    float flow = CloudTime * 25.0;
    float4 clouds = CwMarchLowLayer(CloudCameraPosition, rayDirection,
                                    saturate(CloudCoverage), marchSteps, flow);
    float alpha = saturate((1.0 - clouds.a) * CloudOpacity);
    if (alpha <= 1.0e-4) discard;
    // CwMarchLowLayer returns premultiplied radiance, so the matching PSO uses
    // ONE / INV_SRC_ALPHA blending.
    return float4(clouds.rgb * CloudOpacity, alpha);
}
)CLOUD_HLSL";

} // namespace vcs
