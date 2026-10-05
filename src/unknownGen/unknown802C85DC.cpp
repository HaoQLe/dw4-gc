#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_802C86B0();
extern void *lbl_80534DC4;
}
extern "C" {
void *fn_802C85DC(void *object){
 fn_802C86B0();
 return fn_8006546C(lbl_80534DC4,object);
}
void *fn_802C861C(){
 if(!lbl_80534DC4 || !(reinterpret_cast<unsigned int *>(lbl_80534DC4)[0x24/4]&4)) fn_802C86B0();
 return lbl_80534DC4;
}
}
#pragma pop
