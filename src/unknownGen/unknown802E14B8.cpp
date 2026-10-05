#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
extern void *lbl_805355E0;
extern void *lbl_805621F4;
}
extern "C" {
void *fn_802E14B8(){
 if(!lbl_805355E0) lbl_805355E0=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805355E0;
}
}
#pragma pop
