#include <unknownGen.h>
#include <meta/igLanczos3FilterFun.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800667D0();
extern void *igLanczos3FilterFun_meta;
extern char lbl_80566BA0[8];
}
extern "C" {
void *igLanczos3FilterFun_virtual58(){return igLanczos3FilterFun_meta;}
void igLanczos3FilterFun_virtual2C(int p0){
 fn_800667D0();
 reinterpret_cast<Meta::igLanczos3FilterFun *>((void *)p0)->_hWidth=*reinterpret_cast<double *>((lbl_80566BA0+0));
}
}
#pragma pop
