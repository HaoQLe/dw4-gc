#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_803428C0();
extern void *lbl_80536734;
}
extern "C" {
void *fn_803427E0(void *object){
 fn_803428C0();
 return fn_8006546C(lbl_80536734,object);
}
void *fn_80342820(){
 if(!lbl_80536734 || !(reinterpret_cast<unsigned int *>(lbl_80536734)[0x24/4]&4)) fn_803428C0();
 return lbl_80536734;
}
}
#pragma pop
