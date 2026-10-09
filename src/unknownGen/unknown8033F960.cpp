#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_8033FA74();
extern void *lbl_805365E8;
extern void *lbl_805621F4;
}
extern "C" {
void *fn_8033F960(){
 if(!lbl_805365E8) lbl_805365E8=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805365E8;
}
void *beNDMWMcSlotList_getMeta(){
 if(!lbl_805365E8 || !(reinterpret_cast<unsigned int *>(lbl_805365E8)[0x24/4]&4)) fn_8033FA74();
 return lbl_805365E8;
}
}
#pragma pop
