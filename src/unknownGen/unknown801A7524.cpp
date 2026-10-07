#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800667D0();
extern void *lbl_805642C0;
extern char lbl_80566B68[8];
}
extern "C" {
void *fn_801A7524(){return lbl_805642C0;}
void fn_801A752C(int p0){
 fn_800667D0();
 *reinterpret_cast<double *>(reinterpret_cast<char *>((void *)p0)+8)=*reinterpret_cast<double *>((lbl_80566B68+0));
}
}
#pragma pop
