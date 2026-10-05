#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_802CAC64();
extern void *lbl_80534EB0;
}
extern "C" {
void *fn_802CAB3C(void *object){
 fn_802CAC64();
 return fn_8006546C(lbl_80534EB0,object);
}
void *fn_802CAB7C(){
 if(!lbl_80534EB0 || !(reinterpret_cast<unsigned int *>(lbl_80534EB0)[0x24/4]&4)) fn_802CAC64();
 return lbl_80534EB0;
}
}
#pragma pop
