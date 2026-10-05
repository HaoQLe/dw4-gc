#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
extern void *lbl_805352EC;
extern void *lbl_805621F4;
}
extern "C" {
void *fn_802D822C(){
 if(!lbl_805352EC) lbl_805352EC=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805352EC;
}
}
#pragma pop
