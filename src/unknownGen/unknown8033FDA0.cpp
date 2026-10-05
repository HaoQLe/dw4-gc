#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_8033FE80();
extern void *lbl_805365F4;
}
extern "C" {
void *fn_8033FDA0(void *object){
 fn_8033FE80();
 return fn_8006546C(lbl_805365F4,object);
}
void *fn_8033FDE0(){
 if(!lbl_805365F4 || !(reinterpret_cast<unsigned int *>(lbl_805365F4)[0x24/4]&4)) fn_8033FE80();
 return lbl_805365F4;
}
}
#pragma pop
