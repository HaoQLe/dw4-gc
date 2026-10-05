#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_80329E74();
extern void *lbl_80535D88;
}
extern "C" {
void *fn_80329CB4(void *object){
 fn_80329E74();
 return fn_8006546C(lbl_80535D88,object);
}
void *fn_80329CF4(){
 if(!lbl_80535D88 || !(reinterpret_cast<unsigned int *>(lbl_80535D88)[0x24/4]&4)) fn_80329E74();
 return lbl_80535D88;
}
}
#pragma pop
