#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_80330A94();
extern void *lbl_80535ED8;
}
extern "C" {
void *fn_80330724(void *object){
 fn_80330A94();
 return fn_8006546C(lbl_80535ED8,object);
}
void *fn_80330764(){
 if(!lbl_80535ED8 || !(reinterpret_cast<unsigned int *>(lbl_80535ED8)[0x24/4]&4)) fn_80330A94();
 return lbl_80535ED8;
}
}
#pragma pop
