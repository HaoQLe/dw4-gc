#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
extern void *lbl_8053468C;
extern void *lbl_805621F4;
}
extern "C" {
void *fn_802B6CC4(){
 if(!lbl_8053468C) lbl_8053468C=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_8053468C;
}
}
#pragma pop
