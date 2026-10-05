#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_800ABE3C();
extern void *lbl_80562404;
}
extern "C" {
void *fn_800ABCC0(void *object){
 fn_800ABE3C();
 return fn_8006546C(lbl_80562404,object);
}
void *fn_800ABCF8(){
 if(!lbl_80562404 || !(reinterpret_cast<unsigned int *>(lbl_80562404)[0x24/4]&4)) fn_800ABE3C();
 return lbl_80562404;
}
}
#pragma pop
