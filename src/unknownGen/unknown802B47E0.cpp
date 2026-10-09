#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_802B48F4();
extern void *lbl_80534604;
extern void *lbl_805621F4;
}
extern "C" {
void *fn_802B47E0(){
 if(!lbl_80534604) lbl_80534604=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80534604;
}
void *beWaterMoveDataList_getMeta(){
 if(!lbl_80534604 || !(reinterpret_cast<unsigned int *>(lbl_80534604)[0x24/4]&4)) fn_802B48F4();
 return lbl_80534604;
}
}
#pragma pop
