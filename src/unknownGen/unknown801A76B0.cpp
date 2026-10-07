#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800667D0();
extern void *lbl_805642B8;
extern char lbl_80566BA0[8];
}
extern "C" {
void *fn_801A76B0(){return lbl_805642B8;}
void fn_801A76B8(int p0){
 fn_800667D0();
 *reinterpret_cast<double *>(reinterpret_cast<char *>((void *)p0)+8)=*reinterpret_cast<double *>((lbl_80566BA0+0));
}
}
#pragma pop
