#include <unknownGen.h>
#include <meta/igTriangleFilterFun.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800667D0();
extern void *lbl_805642C8;
extern char lbl_80566B50[8];
}
extern "C" {
void *igTriangleFilterFun_virtual58(){return lbl_805642C8;}
void igTriangleFilterFun_virtual2C(int p0){
 fn_800667D0();
 reinterpret_cast<Meta::igTriangleFilterFun *>((void *)p0)->_hWidth=*reinterpret_cast<double *>((lbl_80566B50+0));
}
}
#pragma pop
