#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_802D0948();
extern void *lbl_805350A4;
extern void *lbl_805621F4;
}
extern "C" {
void *fn_802D0834(){
 if(!lbl_805350A4) lbl_805350A4=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805350A4;
}
void *beMatCtrlSearchList_getMeta(){
 if(!lbl_805350A4 || !(reinterpret_cast<unsigned int *>(lbl_805350A4)[0x24/4]&4)) fn_802D0948();
 return lbl_805350A4;
}
}
#pragma pop
