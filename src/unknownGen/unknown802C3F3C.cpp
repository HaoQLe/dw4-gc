#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
extern void *lbl_80534B90;
extern void *lbl_805621F4;
}
extern "C" {
void *fn_802C3F3C(){
 if(!lbl_80534B90) lbl_80534B90=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80534B90;
}
}
#pragma pop
