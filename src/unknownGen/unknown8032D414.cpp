#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_8032D6A0();
extern void *lbl_80535E38;
}
extern "C" {
void *fn_8032D414(void *object){
 fn_8032D6A0();
 return fn_8006546C(lbl_80535E38,object);
}
void *fn_8032D454(){
 if(!lbl_80535E38 || !(reinterpret_cast<unsigned int *>(lbl_80535E38)[0x24/4]&4)) fn_8032D6A0();
 return lbl_80535E38;
}
}
#pragma pop
