#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_80342EE8();
extern void *lbl_80536748;
}
extern "C" {
void *fn_80342E00(void *object){
 fn_80342EE8();
 return fn_8006546C(lbl_80536748,object);
}
void *fn_80342E40(){
 if(!lbl_80536748 || !(reinterpret_cast<unsigned int *>(lbl_80536748)[0x24/4]&4)) fn_80342EE8();
 return lbl_80536748;
}
}
#pragma pop
