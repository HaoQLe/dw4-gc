#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_802CECEC();
extern void *lbl_80535004;
}
extern "C" {
void *fn_802CEAFC(void *object){
 fn_802CECEC();
 return fn_8006546C(lbl_80535004,object);
}
void *fn_802CEB3C(){
 if(!lbl_80535004 || !(reinterpret_cast<unsigned int *>(lbl_80535004)[0x24/4]&4)) fn_802CECEC();
 return lbl_80535004;
}
}
#pragma pop
