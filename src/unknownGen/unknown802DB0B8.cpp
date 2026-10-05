#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
extern void *lbl_805353E4;
extern void *lbl_805621F4;
}
extern "C" {
void *fn_802DB0B8(){
 if(!lbl_805353E4) lbl_805353E4=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805353E4;
}
}
#pragma pop
