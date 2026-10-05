#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
extern void *lbl_8053684C;
extern void *lbl_805621F4;
}
extern "C" {
void *fn_803457A0(){
 if(!lbl_8053684C) lbl_8053684C=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_8053684C;
}
}
#pragma pop
