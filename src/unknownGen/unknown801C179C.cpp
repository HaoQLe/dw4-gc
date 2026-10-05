#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_801C1910();
extern void *lbl_80564F84;
}
extern "C" {
void *fn_801C179C(void *object){
 fn_801C1910();
 return fn_8006546C(lbl_80564F84,object);
}
void *fn_801C17D4(){
 if(!lbl_80564F84 || !(reinterpret_cast<unsigned int *>(lbl_80564F84)[0x24/4]&4)) fn_801C1910();
 return lbl_80564F84;
}
}
#pragma pop
