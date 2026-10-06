#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_802D26A4();
extern void *lbl_80535124;
extern void *lbl_805621F4;
}
extern "C" {
void *fn_802D2444(void *object){
 fn_802D26A4();
 return fn_8006546C(lbl_80535124,object);
}
void *fn_802D2484(){
 if(!lbl_80535124) lbl_80535124=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80535124;
}
void *fn_802D24D8(){
 if(!lbl_80535124 || !(reinterpret_cast<unsigned int *>(lbl_80535124)[0x24/4]&4)) fn_802D26A4();
 return lbl_80535124;
}
}
#pragma pop
