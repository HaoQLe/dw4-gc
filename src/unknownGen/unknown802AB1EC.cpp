#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_802AB3B0();
extern void *lbl_80534370;
}
extern "C" {
void *fn_802AB1EC(void *object){
 fn_802AB3B0();
 return fn_8006546C(lbl_80534370,object);
}
void *fn_802AB22C(){
 if(!lbl_80534370 || !(reinterpret_cast<unsigned int *>(lbl_80534370)[0x24/4]&4)) fn_802AB3B0();
 return lbl_80534370;
}
}
#pragma pop
