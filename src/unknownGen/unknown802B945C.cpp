#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_802B9530();
extern void *lbl_80534788;
}
extern "C" {
void *fn_802B945C(void *object){
 fn_802B9530();
 return fn_8006546C(lbl_80534788,object);
}
void *fn_802B949C(){
 if(!lbl_80534788 || !(reinterpret_cast<unsigned int *>(lbl_80534788)[0x24/4]&4)) fn_802B9530();
 return lbl_80534788;
}
}
#pragma pop
