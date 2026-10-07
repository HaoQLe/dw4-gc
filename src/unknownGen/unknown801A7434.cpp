#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800667D0();
extern void *lbl_805642C8;
extern char lbl_80566B50[8];
}
extern "C" {
void *fn_801A7434(){return lbl_805642C8;}
void fn_801A743C(int p0){
 fn_800667D0();
 *reinterpret_cast<double *>(reinterpret_cast<char *>((void *)p0)+8)=*reinterpret_cast<double *>((lbl_80566B50+0));
}
}
#pragma pop
