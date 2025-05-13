#include < stdio .h >
# define SIMDE_ENABLE_NATIVE_ALIASES
#include "neon2rvv.h"

 int A [] = { 0 , 1 , 2 , 3 };
 int B [] = { 4 , 5 , 6 , 7 };
 int main ( void ){
 int32x4_t va , vb , vc ;
 va = vld1q_s32 (A);
 vb = vld1q_s32 (B);
 va = vaddq_s32 ( va , vb );
 vst1q_s32 (A , va );
 printf ("%d" , A [0]) ;
 return 0;
 }
