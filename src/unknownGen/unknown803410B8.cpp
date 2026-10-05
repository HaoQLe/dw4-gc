#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
extern void *lbl_805366BC;
extern void *lbl_805621F4;
}
extern "C" {
void *fn_803410B8(){
 if(!lbl_805366BC) lbl_805366BC=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805366BC;
}
}
#pragma pop
