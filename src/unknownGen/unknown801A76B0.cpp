#include <unknownGen.h>
#include <meta/igMitchellFilterFun.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800667D0();
extern void *lbl_805642B8;
extern char lbl_80566BA0[8];
}
extern "C" {
void *igMitchellFilterFun_virtual58(){return lbl_805642B8;}
void igMitchellFilterFun_virtual2C(int p0){
 fn_800667D0();
 reinterpret_cast<Meta::igMitchellFilterFun *>((void *)p0)->_hWidth=*reinterpret_cast<double *>((lbl_80566BA0+0));
}
}
#pragma pop
