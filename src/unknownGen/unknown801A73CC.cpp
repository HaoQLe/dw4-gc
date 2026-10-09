#include <unknownGen.h>
#include <meta/igBoxFilterFun.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800667D0();
extern void *lbl_805642CC;
extern char lbl_80566B48[8];
}
extern "C" {
void *igBoxFilterFun_virtual58(){return lbl_805642CC;}
void igBoxFilterFun_virtual2C(int p0){
 fn_800667D0();
 reinterpret_cast<Meta::igBoxFilterFun *>((void *)p0)->_hWidth=*reinterpret_cast<double *>((lbl_80566B48+0));
}
}
#pragma pop
