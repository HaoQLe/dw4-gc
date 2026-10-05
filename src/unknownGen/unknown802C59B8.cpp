#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_802C5B1C();
extern void *lbl_80534C20;
}
extern "C" {
void *fn_802C59B8(void *object){
 fn_802C5B1C();
 return fn_8006546C(lbl_80534C20,object);
}
void *fn_802C59F8(){
 if(!lbl_80534C20 || !(reinterpret_cast<unsigned int *>(lbl_80534C20)[0x24/4]&4)) fn_802C5B1C();
 return lbl_80534C20;
}
}
#pragma pop
