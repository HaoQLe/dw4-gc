#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_802C264C();
extern void *lbl_80534AC4;
extern void *lbl_805621F4;
}
extern "C" {
void *fn_802C2538(){
 if(!lbl_80534AC4) lbl_80534AC4=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80534AC4;
}
void *fn_802C258C(){
 if(!lbl_80534AC4 || !(reinterpret_cast<unsigned int *>(lbl_80534AC4)[0x24/4]&4)) fn_802C264C();
 return lbl_80534AC4;
}
}
#pragma pop
