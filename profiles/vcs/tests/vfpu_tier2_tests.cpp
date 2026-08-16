#include "psprecomp/allegrex_context.hpp"
#include <bit>
#include <cstdint>
#include <cstdlib>
#include <iostream>
#include <random>
using psprecomp::AllegrexContext;
static std::mt19937 rng(0x56435332u);
static AllegrexContext make_ctx(){
    AllegrexContext c{};
    std::uniform_real_distribution<float> f(-100.0f,100.0f);
    for(auto &v:c.vfpu) v=f(rng);
    c.vfpu_ctrl[0]=rng() & 0x000FFFFFu;
    c.vfpu_ctrl[1]=rng() & 0x000FFFFFu;
    c.vfpu_ctrl[2]=rng() & 0x00000FFFu;
    c.vfpu_ctrl[3]=rng();
    for(unsigned i=4;i<c.vfpu_ctrl.size();++i)c.vfpu_ctrl[i]=rng();
    return c;
}
static bool same(const AllegrexContext&a,const AllegrexContext&b){
    for(size_t i=0;i<a.vfpu.size();++i)
        if(std::bit_cast<std::uint32_t>(a.vfpu[i])!=std::bit_cast<std::uint32_t>(b.vfpu[i])) return false;
    return a.vfpu_ctrl==b.vfpu_ctrl;
}
[[noreturn]] static void fail(const char*n){std::cerr<<"DIFF "<<n<<"\n";std::exit(2);}
template<unsigned M,unsigned S> void test_matrix_read(){for(int n=0;n<8;++n){auto a=make_ctx();float x[16]{},y[16]{};a.read_vfpu_matrix(x,M,S);a.read_vfpu_matrix_ct<M,S>(y);for(int i=0;i<16;++i)if(std::bit_cast<std::uint32_t>(x[i])!=std::bit_cast<std::uint32_t>(y[i]))fail("matrix_read");}}
template<unsigned M,unsigned S> void test_matrix_write(){for(int n=0;n<8;++n){auto a=make_ctx(),b=a;float x[16]{};std::uniform_real_distribution<float>f(-50,50);for(float&v:x)v=f(rng);a.write_vfpu_matrix(x,M,S);b.write_vfpu_matrix_ct<M,S>(x);if(!same(a,b))fail("matrix_write");}}
template<unsigned D,unsigned S,unsigned T,unsigned L> void test_cross(){for(int n=0;n<8;++n){auto a=make_ctx(),b=a;a.execute_vfpu_cross_quat(D,S,T,L);b.execute_vfpu_cross_quat_ct<D,S,T,L>();if(!same(a,b))fail("cross");}}
template<unsigned D,unsigned S,unsigned L> void test_vh2f(){for(int n=0;n<8;++n){auto a=make_ctx(),b=a;a.execute_vfpu_vh2f(D,S,L);b.execute_vfpu_vh2f_ct<D,S,L>();if(!same(a,b))fail("vh2f");}}
template<unsigned D,unsigned S,unsigned T,unsigned L> void test_vhdp(){for(int n=0;n<8;++n){auto a=make_ctx(),b=a;a.execute_vfpu_vhdp(D,S,T,L);b.execute_vfpu_vhdp_ct<D,S,T,L>();if(!same(a,b))fail("vhdp");}}
template<unsigned D,unsigned S,unsigned L,unsigned O> void test_vx2i(){for(int n=0;n<8;++n){auto a=make_ctx(),b=a;a.execute_vfpu_vx2i(D,S,L,O);b.execute_vfpu_vx2i_ct<D,S,L,O>();if(!same(a,b))fail("vx2i");}}
template<unsigned D,unsigned S,unsigned T,unsigned L,bool M> void test_minmax(){for(int n=0;n<8;++n){auto a=make_ctx(),b=a;a.execute_vfpu_vminmax(D,S,T,L,M);b.execute_vfpu_vminmax_ct<D,S,T,L,M>();if(!same(a,b))fail("minmax");}}
template<unsigned D,unsigned S,unsigned T,unsigned L,unsigned O> void test_cmp3(){for(int n=0;n<8;++n){auto a=make_ctx(),b=a;a.execute_vfpu_compare3(D,S,T,L,O);b.execute_vfpu_compare3_ct<D,S,T,L,O>();if(!same(a,b))fail("cmp3");}}
template<unsigned D,unsigned S,unsigned L,unsigned I> void test_vrot(){for(int n=0;n<8;++n){auto a=make_ctx(),b=a;a.execute_vfpu_vrot(D,S,L,I);b.execute_vfpu_vrot_ct<D,S,L,I>();if(!same(a,b))fail("vrot");}}

template<unsigned D,unsigned L> void test_dest_prefix(){for(int n=0;n<64;++n){auto a=make_ctx(),b=a;float x[4]{};std::uniform_real_distribution<float>f(-16,16);for(float&v:x)v=f(rng);a.write_vfpu_vector_with_destination_prefix(x,D,L);b.write_vfpu_vector_with_destination_prefix_ct<D,L>(x);if(!same(a,b))fail("dest_prefix");}}
template<unsigned D,unsigned S,unsigned L> void test_vf2h(){for(int n=0;n<32;++n){auto a=make_ctx(),b=a;a.execute_vfpu_vf2h(D,S,L);b.execute_vfpu_vf2h_ct<D,S,L>();if(!same(a,b))fail("vf2h");}}
template<unsigned D,unsigned S,unsigned L,bool A> void test_horizontal(){for(int n=0;n<32;++n){auto a=make_ctx(),b=a;a.execute_vfpu_horizontal(D,S,L,A);b.execute_vfpu_horizontal_ct<D,S,L,A>();if(!same(a,b))fail("horizontal");}}
template<unsigned D,unsigned S,unsigned L> void test_vocp(){for(int n=0;n<32;++n){auto a=make_ctx(),b=a;a.execute_vfpu_vocp(D,S,L);b.execute_vfpu_vocp_ct<D,S,L>();if(!same(a,b))fail("vocp");}}
template<unsigned D,unsigned S,unsigned L> void test_vmmov(){for(int n=0;n<32;++n){auto a=make_ctx(),b=a;a.execute_vfpu_vmmov(D,S,L);b.execute_vfpu_vmmov_ct<D,S,L>();if(!same(a,b))fail("vmmov");}}
template<unsigned D,unsigned S,unsigned T,unsigned L> void test_vmscl(){for(int n=0;n<32;++n){auto a=make_ctx(),b=a;a.execute_vfpu_vmscl(D,S,T,L);b.execute_vfpu_vmscl_ct<D,S,T,L>();if(!same(a,b))fail("vmscl");}}
template<unsigned D,unsigned L,unsigned O> void test_matrix_init(){for(int n=0;n<32;++n){auto a=make_ctx(),b=a;a.execute_vfpu_matrix_init(D,L,O);b.execute_vfpu_matrix_init_ct<D,L,O>();if(!same(a,b))fail("matrix_init");}}
int main(){
    test_matrix_read<0,4>();
    test_matrix_read<16,3>();
    test_matrix_read<24,4>();
    test_matrix_read<32,3>();
    test_matrix_read<32,4>();
    test_matrix_read<36,3>();
    test_matrix_read<36,4>();
    test_matrix_read<40,4>();
    test_matrix_read<44,3>();
    test_matrix_read<48,3>();
    test_matrix_read<4,3>();
    test_matrix_read<4,4>();
    test_matrix_read<56,3>();
    test_matrix_read<56,4>();
    test_matrix_read<8,4>();
    test_matrix_write<12,4>();
    test_matrix_write<16,4>();
    test_matrix_write<20,4>();
    test_matrix_write<32,4>();
    test_matrix_write<40,4>();
    test_cross<0,1,2,3>();
    test_cross<14,11,13,3>();
    test_cross<15,11,8,3>();
    test_cross<16,10,12,3>();
    test_cross<17,10,9,3>();
    test_cross<18,9,12,3>();
    test_cross<19,9,10,3>();
    test_cross<2,4,1,3>();
    test_vh2f<0,0,1>();
    test_vh2f<13,12,2>();
    test_vh2f<1,0,2>();
    test_vh2f<1,16,2>();
    test_vh2f<1,32,1>();
    test_vh2f<20,32,1>();
    test_vh2f<21,12,2>();
    test_vh2f<2,64,2>();
    test_vh2f<2,80,2>();
    test_vhdp<2,0,48,4>();
    test_vhdp<2,0,49,4>();
    test_vhdp<2,0,50,4>();
    test_vhdp<2,0,51,4>();
    test_vhdp<34,1,52,4>();
    test_vhdp<34,1,53,4>();
    test_vhdp<34,1,54,4>();
    test_vhdp<34,1,55,4>();
    test_vx2i<0,2,2,3>();
    test_vx2i<12,13,2,3>();
    test_vx2i<13,14,1,3>();
    test_vx2i<1,66,2,3>();
    test_vx2i<2,8,2,3>();
    test_vx2i<3,9,2,3>();
    test_vx2i<4,10,2,3>();
    test_vx2i<4,8,2,3>();
    test_vx2i<5,9,2,3>();
    test_vx2i<6,10,2,3>();
    test_minmax<111,118,114,1,false>();
    test_minmax<15,15,47,1,true>();
    test_minmax<15,15,79,1,true>();
    test_minmax<2,0,1,3,false>();
    test_minmax<3,0,1,3,true>();
    test_minmax<98,8,40,1,true>();
    test_cmp3<12,5,2,3,7>();
    test_cmp3<13,3,4,3,7>();
    test_vrot<1,64,2,4>();
    test_vrot<4,0,4,11>();
    test_dest_prefix<0,3>();
    test_dest_prefix<1,3>();
    test_dest_prefix<3,3>();
    test_dest_prefix<5,3>();
    test_dest_prefix<5,4>();
    test_dest_prefix<13,4>();
    test_dest_prefix<14,4>();
    test_vocp<16,16,1>();
    test_vocp<52,20,1>();
    test_vocp<32,0,1>();
    test_matrix_init<0,4,3>();
    test_matrix_init<32,4,3>();
    test_matrix_init<32,3,3>();
    test_horizontal<8,36,3,true>();
    test_horizontal<40,37,3,true>();
    test_horizontal<72,38,3,true>();
    test_vf2h<64,0,2>();
    test_vmmov<32,40,4>();
    test_vmmov<24,0,4>();
    test_vmscl<32,36,8,3>();
    std::cout<<"vfpu_tier2_tests: PASS\n";
}
