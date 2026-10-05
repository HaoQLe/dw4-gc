#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_800CFA50();
extern void *lbl_805621F4;
extern void *lbl_80562DC0;
}
extern "C" {
void *fn_800CF8C0(void *object){
 fn_800CFA50();
 return fn_8006546C(lbl_80562DC0,object);
}
void *fn_800CF8F8(){
 if(!lbl_80562DC0) lbl_80562DC0=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80562DC0;
}
void *fn_800CF934(){
 if(!lbl_80562DC0 || !(reinterpret_cast<unsigned int *>(lbl_80562DC0)[0x24/4]&4)) fn_800CFA50();
 return lbl_80562DC0;
}
}
#pragma pop
