#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_802B3C38();
extern void *lbl_80534568;
}
extern "C" {
void *fn_802B3ADC(void *object){
 fn_802B3C38();
 return fn_8006546C(lbl_80534568,object);
}
void *fn_802B3B1C(){
 if(!lbl_80534568 || !(reinterpret_cast<unsigned int *>(lbl_80534568)[0x24/4]&4)) fn_802B3C38();
 return lbl_80534568;
}
}
#pragma pop
