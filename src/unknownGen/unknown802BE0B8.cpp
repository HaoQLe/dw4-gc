#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_802BE2C8();
extern void *lbl_80534930;
}
extern "C" {
void *fn_802BE0B8(void *object){
 fn_802BE2C8();
 return fn_8006546C(lbl_80534930,object);
}
void *fn_802BE0F8(){
 if(!lbl_80534930 || !(reinterpret_cast<unsigned int *>(lbl_80534930)[0x24/4]&4)) fn_802BE2C8();
 return lbl_80534930;
}
}
#pragma pop
