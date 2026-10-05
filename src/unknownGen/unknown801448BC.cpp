#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_80144A8C();
extern void *lbl_80564124;
}
extern "C" {
void *fn_801448BC(void *object){
 fn_80144A8C();
 return fn_8006546C(lbl_80564124,object);
}
void *fn_801448F4(){
 if(!lbl_80564124 || !(reinterpret_cast<unsigned int *>(lbl_80564124)[0x24/4]&4)) fn_80144A8C();
 return lbl_80564124;
}
}
#pragma pop
