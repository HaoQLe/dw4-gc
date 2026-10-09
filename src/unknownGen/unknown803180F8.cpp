#include <unknownGen.h>
#include <meta/beWaterPlain.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_803050A8(void *,void *,void *,int,int);
extern char lbl_80452598[];
}
extern "C" {
void beWaterPlain_virtual7C(int p0,int p1,int p2,int p3,int p4,int p5){
 fn_803050A8(reinterpret_cast<Meta::beWaterPlain *>((void *)p0)->_messenger,(void *)p1,lbl_80452598,0,-1);
}
}
#pragma pop
