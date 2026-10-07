#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800667D0();
extern void *lbl_805642CC;
extern char lbl_80566B48[8];
}
extern "C" {
void *fn_801A73CC(){return lbl_805642CC;}
void fn_801A73D4(int p0){
 fn_800667D0();
 *reinterpret_cast<double *>(reinterpret_cast<char *>((void *)p0)+8)=*reinterpret_cast<double *>((lbl_80566B48+0));
}
}
#pragma pop
