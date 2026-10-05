#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
extern void *lbl_805360E8;
extern void *lbl_805621F4;
}
extern "C" {
void *fn_803375AC(){
 if(!lbl_805360E8) lbl_805360E8=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805360E8;
}
}
#pragma pop
