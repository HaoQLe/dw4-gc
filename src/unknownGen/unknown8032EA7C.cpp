#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_8032ED08();
extern void *lbl_80535E80;
}
extern "C" {
void *fn_8032EA7C(void *object){
 fn_8032ED08();
 return fn_8006546C(lbl_80535E80,object);
}
void *fn_8032EABC(){
 if(!lbl_80535E80 || !(reinterpret_cast<unsigned int *>(lbl_80535E80)[0x24/4]&4)) fn_8032ED08();
 return lbl_80535E80;
}
}
#pragma pop
