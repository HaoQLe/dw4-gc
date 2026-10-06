#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_802D52E4();
extern void *lbl_805351DC;
extern void *lbl_805621F4;
}
extern "C" {
void *fn_802D4FF4(void *object){
 fn_802D52E4();
 return fn_8006546C(lbl_805351DC,object);
}
void *fn_802D5034(){
 if(!lbl_805351DC) lbl_805351DC=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805351DC;
}
void *fn_802D5088(){
 if(!lbl_805351DC || !(reinterpret_cast<unsigned int *>(lbl_805351DC)[0x24/4]&4)) fn_802D52E4();
 return lbl_805351DC;
}
}
#pragma pop
