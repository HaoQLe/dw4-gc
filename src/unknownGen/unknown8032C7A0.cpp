#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_8032CAC0();
extern void *lbl_80535E14;
}
extern "C" {
void *fn_8032C7A0(void *object){
 fn_8032CAC0();
 return fn_8006546C(lbl_80535E14,object);
}
void *fn_8032C7E0(){
 if(!lbl_80535E14 || !(reinterpret_cast<unsigned int *>(lbl_80535E14)[0x24/4]&4)) fn_8032CAC0();
 return lbl_80535E14;
}
}
#pragma pop
