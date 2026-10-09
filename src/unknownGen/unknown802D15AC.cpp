#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_802D1784();
extern void *lbl_805350F8;
extern void *lbl_805621F4;
}
extern "C" {
void *fn_802D15AC(void *object){
 fn_802D1784();
 return fn_8006546C(lbl_805350F8,object);
}
void *fn_802D15EC(){
 if(!lbl_805350F8) lbl_805350F8=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805350F8;
}
void *beLuaState_getMeta(){
 if(!lbl_805350F8 || !(reinterpret_cast<unsigned int *>(lbl_805350F8)[0x24/4]&4)) fn_802D1784();
 return lbl_805350F8;
}
}
#pragma pop
