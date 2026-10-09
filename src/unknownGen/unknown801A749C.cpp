#include <unknownGen.h>
#include <meta/igBellFilterFun.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800667D0();
extern void *lbl_805642C4;
extern char lbl_80566C00[8];
}
extern "C" {
void *igBellFilterFun_virtual58(){return lbl_805642C4;}
void igBellFilterFun_virtual2C(int p0){
 fn_800667D0();
 reinterpret_cast<Meta::igBellFilterFun *>((void *)p0)->_hWidth=*reinterpret_cast<double *>((lbl_80566C00+0));
}
}
#pragma pop
