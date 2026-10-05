#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
extern void *lbl_8055C83C;
extern void *lbl_805621F4;
}
extern "C" {
void *fn_80404C4C(){
 if(!lbl_8055C83C) lbl_8055C83C=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_8055C83C;
}
}
#pragma pop
