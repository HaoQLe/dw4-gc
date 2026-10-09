#include <unknownGen.h>
#include <meta/igBSplineFilterFun.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800667D0();
extern void *lbl_805642C0;
extern char lbl_80566B68[8];
}
extern "C" {
void *igBSplineFilterFun_virtual58(){return lbl_805642C0;}
void igBSplineFilterFun_virtual2C(int p0){
 fn_800667D0();
 reinterpret_cast<Meta::igBSplineFilterFun *>((void *)p0)->_hWidth=*reinterpret_cast<double *>((lbl_80566B68+0));
}
}
#pragma pop
