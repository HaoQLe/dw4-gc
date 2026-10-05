#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_8032DF9C();
extern void *lbl_80535E64;
}
extern "C" {
void *fn_8032DD10(void *object){
 fn_8032DF9C();
 return fn_8006546C(lbl_80535E64,object);
}
void *fn_8032DD50(){
 if(!lbl_80535E64 || !(reinterpret_cast<unsigned int *>(lbl_80535E64)[0x24/4]&4)) fn_8032DF9C();
 return lbl_80535E64;
}
}
#pragma pop
