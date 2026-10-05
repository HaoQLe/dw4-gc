#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_8032F0D0();
extern void *lbl_80535E98;
}
extern "C" {
void *fn_8032EE44(void *object){
 fn_8032F0D0();
 return fn_8006546C(lbl_80535E98,object);
}
void *fn_8032EE84(){
 if(!lbl_80535E98 || !(reinterpret_cast<unsigned int *>(lbl_80535E98)[0x24/4]&4)) fn_8032F0D0();
 return lbl_80535E98;
}
}
#pragma pop
