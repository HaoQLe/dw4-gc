#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_8014B01C();
extern void *lbl_805642F8;
}
extern "C" {
void *fn_8014AEA4(void *object){
 fn_8014B01C();
 return fn_8006546C(lbl_805642F8,object);
}
void *fn_8014AEDC(){
 if(!lbl_805642F8 || !(reinterpret_cast<unsigned int *>(lbl_805642F8)[0x24/4]&4)) fn_8014B01C();
 return lbl_805642F8;
}
}
#pragma pop
