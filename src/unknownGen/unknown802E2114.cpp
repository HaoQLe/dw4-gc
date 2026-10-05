#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_802E22A0();
extern void *lbl_80535634;
}
extern "C" {
void *fn_802E2114(void *object){
 fn_802E22A0();
 return fn_8006546C(lbl_80535634,object);
}
void *fn_802E2154(){
 if(!lbl_80535634 || !(reinterpret_cast<unsigned int *>(lbl_80535634)[0x24/4]&4)) fn_802E22A0();
 return lbl_80535634;
}
}
#pragma pop
