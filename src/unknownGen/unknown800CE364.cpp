#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_800CE46C();
extern void *lbl_80562CF4;
}
extern "C" {
void *fn_800CE364(void *object){
 fn_800CE46C();
 return fn_8006546C(lbl_80562CF4,object);
}
void *fn_800CE39C(){
 if(!lbl_80562CF4 || !(reinterpret_cast<unsigned int *>(lbl_80562CF4)[0x24/4]&4)) fn_800CE46C();
 return lbl_80562CF4;
}
}
#pragma pop
