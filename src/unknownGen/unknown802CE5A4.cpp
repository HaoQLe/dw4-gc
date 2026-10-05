#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_802CE7A0();
extern void *lbl_80534FE4;
}
extern "C" {
void *fn_802CE5A4(void *object){
 fn_802CE7A0();
 return fn_8006546C(lbl_80534FE4,object);
}
void *fn_802CE5E4(){
 if(!lbl_80534FE4 || !(reinterpret_cast<unsigned int *>(lbl_80534FE4)[0x24/4]&4)) fn_802CE7A0();
 return lbl_80534FE4;
}
}
#pragma pop
