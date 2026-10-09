#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_802D4390();
void *fn_80301F68();
extern void *lbl_805351A0;
extern void *lbl_805621F4;
}
extern "C" {
void *fn_802D4238(){return fn_80301F68();}
void *fn_802D4258(){
 if(!lbl_805351A0) lbl_805351A0=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805351A0;
}
void *beKeyboardReceiver_getMeta(){
 if(!lbl_805351A0 || !(reinterpret_cast<unsigned int *>(lbl_805351A0)[0x24/4]&4)) fn_802D4390();
 return lbl_805351A0;
}
}
#pragma pop
