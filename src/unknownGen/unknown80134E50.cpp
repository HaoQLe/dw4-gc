#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_80134FF4();
extern void *lbl_80563C64;
}
extern "C" {
void *fn_80134E50(void *object){
 fn_80134FF4();
 return fn_8006546C(lbl_80563C64,object);
}
void *fn_80134E88(){
 if(!lbl_80563C64 || !(reinterpret_cast<unsigned int *>(lbl_80563C64)[0x24/4]&4)) fn_80134FF4();
 return lbl_80563C64;
}
}
#pragma pop
