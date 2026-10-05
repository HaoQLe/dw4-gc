#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
extern void *lbl_80536150;
extern void *lbl_805621F4;
}
extern "C" {
void *fn_80338104(){
 if(!lbl_80536150) lbl_80536150=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80536150;
}
}
#pragma pop
