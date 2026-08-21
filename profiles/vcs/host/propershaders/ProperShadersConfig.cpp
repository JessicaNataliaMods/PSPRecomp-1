#include "propershaders/ProperShadersConfig.hpp"

#include <algorithm>
#include <cctype>
#include <cerrno>
#include <cmath>
#include <cstdlib>
#include <fstream>
#include <sstream>

namespace vcs {
namespace {
std::string trim(std::string value) {
    const auto ok=[](unsigned char c){return std::isspace(c)==0;};
    value.erase(value.begin(),std::find_if(value.begin(),value.end(),ok));
    value.erase(std::find_if(value.rbegin(),value.rend(),ok).base(),value.end());
    return value;
}
std::string lower(std::string value) {
    std::transform(value.begin(),value.end(),value.begin(),[](unsigned char c){return static_cast<char>(std::tolower(c));});
    return value;
}
std::string uncomment(std::string value) {
    bool quoted=false; char q='\0';
    for(std::size_t i=0;i<value.size();++i){const char c=value[i]; if(c=='\''||c=='"'){if(!quoted){quoted=true;q=c;}else if(q==c)quoted=false;}else if(!quoted&&(c==';'||c=='#')){value.resize(i);break;}}
    return trim(std::move(value));
}
bool boolean(std::string value,bool &out){value=lower(trim(std::move(value)));if(value=="1"||value=="true"||value=="yes"||value=="on"){out=true;return true;}if(value=="0"||value=="false"||value=="no"||value=="off"){out=false;return true;}return false;}
bool real(std::string value,float lo,float hi,float &out){value=trim(std::move(value));char *end=nullptr;errno=0;float v=std::strtof(value.c_str(),&end);if(errno!=0||end==value.c_str()||*end!='\0'||!std::isfinite(v)||v<lo||v>hi)return false;out=v;return true;}
bool integer(std::string value,std::uint32_t lo,std::uint32_t hi,std::uint32_t &out){value=trim(std::move(value));char *end=nullptr;errno=0;unsigned long v=std::strtoul(value.c_str(),&end,10);if(errno!=0||end==value.c_str()||*end!='\0'||v<lo||v>hi)return false;out=static_cast<std::uint32_t>(v);return true;}
void warn(std::vector<std::string> &warnings,std::size_t line,const std::string &text){std::ostringstream s;s<<"line "<<line<<": ProperShaders.ini: "<<text;warnings.push_back(s.str());}
} // namespace

void load_proper_shaders_configuration(ProperShadersConfiguration &cfg,
                                       const std::filesystem::path &path,
                                       std::vector<std::string> &warnings) {
    std::ifstream input(path); if(!input)return;
    std::string section,line; std::size_t line_no=0;
    while(std::getline(input,line)){
        ++line_no; line=uncomment(std::move(line)); if(line.empty())continue;
        if(line.front()=='['&&line.back()==']'){section=lower(trim(line.substr(1,line.size()-2)));continue;}
        const auto eq=line.find('='); if(eq==std::string::npos){warn(warnings,line_no,"expected key=value");continue;}
        const std::string key=lower(trim(line.substr(0,eq))); const std::string value=uncomment(line.substr(eq+1));
        auto b=[&](bool &dst,const char *name){if(!boolean(value,dst))warn(warnings,line_no,std::string(name)+" expects true/false");};
        auto f=[&](float &dst,float lo,float hi,const char *name){if(!real(value,lo,hi,dst))warn(warnings,line_no,std::string("invalid ")+name);};
        auto u=[&](std::uint32_t &dst,std::uint32_t lo,std::uint32_t hi,const char *name){if(!integer(value,lo,hi,dst))warn(warnings,line_no,std::string("invalid ")+name);};
        if(section=="propershaders"||section=="proper shaders") { if(key=="enabled") b(cfg.enabled,"Enabled"); else warn(warnings,line_no,"unknown [ProperShaders] key '"+key+"'"); }
        else if(section=="buildingpipe"||section=="building pipe"||section=="worldpipe"||section=="world pipe") {
            auto &c=cfg.building_pipe;
            if(key=="enabled") b(c.enabled,"Enabled");
            else if(key=="debug"||key=="debugcolor") b(c.debug_color,"DebugColor");
            else if(key=="debugr") f(c.debug_r,0.0f,1.0f,"DebugR");
            else if(key=="debugg") f(c.debug_g,0.0f,1.0f,"DebugG");
            else if(key=="debugb") f(c.debug_b,0.0f,1.0f,"DebugB");
            else warn(warnings,line_no,"unknown [WorldPipe/BuildingPipe] key '"+key+"'");
        }
        else if(section=="skinpipe"||section=="skin pipe") {
            auto &c=cfg.skin_pipe;
            if(key=="enabled") b(c.enabled,"Enabled");
            else if(key=="debug"||key=="debugcolor") b(c.debug_color,"DebugColor");
            else if(key=="debugr") f(c.debug_r,0.0f,1.0f,"DebugR");
            else if(key=="debugg") f(c.debug_g,0.0f,1.0f,"DebugG");
            else if(key=="debugb") f(c.debug_b,0.0f,1.0f,"DebugB");
            else warn(warnings,line_no,"unknown [SkinPipe] key '"+key+"'");
        }
        else if(section=="vehiclepipe"||section=="vehicle pipe") {
            auto &c=cfg.vehicle_pipe;
            if(key=="enabled") b(c.enabled,"Enabled");
            else if(key=="paletteclassifier") b(c.palette_classifier,"PaletteClassifier");
            else if(key=="debug"||key=="debugcolor") b(c.debug_color,"DebugColor");
            else if(key=="debugr") f(c.debug_r,0.0f,1.0f,"DebugR");
            else if(key=="debugg") f(c.debug_g,0.0f,1.0f,"DebugG");
            else if(key=="debugb") f(c.debug_b,0.0f,1.0f,"DebugB");
            else warn(warnings,line_no,"unknown [VehiclePipe] key '"+key+"'");
        }
        else if(section=="realtimeshadows"||section=="realtime shadows") {
            auto &c=cfg.realtime_shadows;
            if(key=="enabled") b(c.enabled,"Enabled");
            else if(key=="mapresolution") u(c.map_resolution,512u,8192u,"MapResolution");
            else if(key=="depthbiasconstant") u(c.depth_bias_constant,0u,100000u,"DepthBiasConstant");
            else if(key=="depthbiasslope") f(c.depth_bias_slope,0.0f,64.0f,"DepthBiasSlope");
            else if(key=="alphatestcasters") b(c.alpha_test_casters,"AlphaTestCasters");
            else if(key=="pcss") b(c.pcss,"Pcss");
            else if(key=="pcsssuntan") f(c.pcss_sun_tan,0.0001f,0.5f,"PcssSunTan");
            else if(key=="pcsssearchtexels") f(c.pcss_search_texels,1.0f,64.0f,"PcssSearchTexels");
            else if(key=="pcssmaxradiustexels") f(c.pcss_max_radius_texels,1.0f,64.0f,"PcssMaxRadiusTexels");
            else if(key=="normalbiasscale") f(c.normal_bias_scale,0.0f,32.0f,"NormalBiasScale");
            else if(key=="autoorientnormals") b(c.auto_orient_normals,"AutoOrientNormals");
            else if(key=="worldradius") f(c.world_radius,20.0f,1000.0f,"WorldRadius");
            else if(key=="depthrange") f(c.depth_range,40.0f,2000.0f,"DepthRange");
            else if(key=="mapbias") f(c.map_bias,0.000001f,0.05f,"MapBias");
            else if(key=="pcfradius") u(c.pcf_radius,0u,3u,"PcfRadius");
            else if(key=="usecloudsundirection") b(c.use_cloud_sun_direction,"UseCloudSunDirection");
            else if(key=="lightdirectionx") f(c.light_direction_x,-1.0f,1.0f,"LightDirectionX");
            else if(key=="lightdirectiony") f(c.light_direction_y,-1.0f,1.0f,"LightDirectionY");
            else if(key=="lightdirectionz") f(c.light_direction_z,-1.0f,1.0f,"LightDirectionZ");
            else if(key=="strength") f(c.strength,0.0f,1.0f,"Strength");
            else if(key=="debugmode") u(c.debug_mode,0u,7u,"DebugMode");
            else if(key=="contactshadows") b(c.contact_shadows,"ContactShadows");
            else if(key=="steps") u(c.steps,2u,32u,"Steps");
            else if(key=="maxdistancepixels") f(c.max_distance_pixels,1.0f,256.0f,"MaxDistancePixels");
            else if(key=="thickness") f(c.thickness,0.00001f,0.1f,"Thickness");
            else if(key=="contactstrength") f(c.contact_strength,0.0f,1.0f,"ContactStrength");
            else if(key=="lightscreenx") f(c.light_screen_x,-2.0f,2.0f,"LightScreenX");
            else if(key=="lightscreeny") f(c.light_screen_y,-2.0f,2.0f,"LightScreenY");
            else warn(warnings,line_no,"unknown [RealtimeShadows] key '"+key+"'");
        }
        else if(section=="volumetricclouds"||section=="volumetric clouds") {
            auto &c=cfg.volumetric_clouds;
            if(key=="enabled")b(c.enabled,"Enabled"); else if(key=="downscalediv")u(c.downscale_div,1,8,"DownscaleDiv"); else if(key=="layers")u(c.layers,1,3,"Layers"); else if(key=="shadowsteps")u(c.shadow_steps,2,8,"ShadowSteps");
            else if(key=="coveragelow")f(c.coverage_low,0,1,"CoverageLow"); else if(key=="coveragemid")f(c.coverage_mid,0,1,"CoverageMid"); else if(key=="coveragehigh")f(c.coverage_high,0,1,"CoverageHigh"); else if(key=="opacity")f(c.opacity,0,1,"Opacity"); else if(key=="speed")f(c.speed,0,1000,"Speed"); else if(key=="brightness")f(c.brightness,0,8,"Brightness"); else if(key=="randomseed")f(c.random_seed,0,6.2831855f,"RandomSeed");
            else if(key=="sundirectionx")f(c.sun_direction_x,-1,1,"SunDirectionX"); else if(key=="sundirectiony")f(c.sun_direction_y,-1,1,"SunDirectionY"); else if(key=="sundirectionz")f(c.sun_direction_z,-1,1,"SunDirectionZ"); else if(key=="suncolorr")f(c.sun_color_r,0,4,"SunColorR"); else if(key=="suncolorg")f(c.sun_color_g,0,4,"SunColorG"); else if(key=="suncolorb")f(c.sun_color_b,0,4,"SunColorB");
            else if(key=="cloudbasecolorr")f(c.cloud_base_color_r,0,4,"CloudBaseColorR"); else if(key=="cloudbasecolorg")f(c.cloud_base_color_g,0,4,"CloudBaseColorG"); else if(key=="cloudbasecolorb")f(c.cloud_base_color_b,0,4,"CloudBaseColorB"); else if(key=="atmospheredensity")f(c.atmosphere_density,0,4,"AtmosphereDensity"); else if(key=="mist")f(c.mist,0,1,"Mist"); else if(key=="fogcolorr")f(c.fog_color_r,0,4,"FogColorR"); else if(key=="fogcolorg")f(c.fog_color_g,0,4,"FogColorG"); else if(key=="fogcolorb")f(c.fog_color_b,0,4,"FogColorB"); else if(key=="fogstart")f(c.fog_start,1,100000,"FogStart"); else if(key=="dayprogression")f(c.day_progression,-1,1,"DayProgression"); else if(key=="temporalblend")f(c.temporal_blend,0,.95f,"TemporalBlend"); else if(key=="temporaldenoise")f(c.temporal_denoise,0,16,"TemporalDenoise"); else if(key=="temporalclamp")f(c.temporal_clamp,0,16,"TemporalClamp"); else warn(warnings,line_no,"unknown [VolumetricClouds] key '"+key+"'");
        }
    }
}
} // namespace vcs
