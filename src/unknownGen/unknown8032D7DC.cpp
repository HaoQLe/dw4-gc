#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_8032DB64();
extern void *lbl_80535E44;
}
extern "C" {
void *fn_8032D7DC(void *object){
 fn_8032DB64();
 return fn_8006546C(lbl_80535E44,object);
}
void *fn_8032D81C(){
 if(!lbl_80535E44 || !(reinterpret_cast<unsigned int *>(lbl_80535E44)[0x24/4]&4)) fn_8032DB64();
 return lbl_80535E44;
}
}
#pragma pop
