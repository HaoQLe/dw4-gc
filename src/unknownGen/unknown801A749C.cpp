#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800667D0();
extern void *lbl_805642C4;
extern char lbl_80566C00[8];
}
extern "C" {
void *fn_801A749C(){return lbl_805642C4;}
void fn_801A74A4(int p0){
 fn_800667D0();
 *reinterpret_cast<double *>(reinterpret_cast<char *>((void *)p0)+8)=*reinterpret_cast<double *>((lbl_80566C00+0));
}
}
#pragma pop
