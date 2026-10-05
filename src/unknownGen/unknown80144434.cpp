#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_8014453C();
extern void *lbl_8056410C;
}
extern "C" {
void *fn_80144434(void *object){
 fn_8014453C();
 return fn_8006546C(lbl_8056410C,object);
}
void *fn_8014446C(){
 if(!lbl_8056410C || !(reinterpret_cast<unsigned int *>(lbl_8056410C)[0x24/4]&4)) fn_8014453C();
 return lbl_8056410C;
}
}
#pragma pop
