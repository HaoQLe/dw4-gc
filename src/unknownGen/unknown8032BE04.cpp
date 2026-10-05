#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_8032C140();
extern void *lbl_80535E00;
}
extern "C" {
void *fn_8032BE04(void *object){
 fn_8032C140();
 return fn_8006546C(lbl_80535E00,object);
}
void *fn_8032BE44(){
 if(!lbl_80535E00 || !(reinterpret_cast<unsigned int *>(lbl_80535E00)[0x24/4]&4)) fn_8032C140();
 return lbl_80535E00;
}
}
#pragma pop
