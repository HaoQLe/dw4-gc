#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_8032D360();
extern void *lbl_80535E34;
}
extern "C" {
void *fn_8032D0D4(void *object){
 fn_8032D360();
 return fn_8006546C(lbl_80535E34,object);
}
void *fn_8032D114(){
 if(!lbl_80535E34 || !(reinterpret_cast<unsigned int *>(lbl_80535E34)[0x24/4]&4)) fn_8032D360();
 return lbl_80535E34;
}
}
#pragma pop
