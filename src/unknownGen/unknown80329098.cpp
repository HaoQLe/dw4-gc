#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_80329220();
extern void *lbl_80535D70;
}
extern "C" {
void *fn_80329098(void *object){
 fn_80329220();
 return fn_8006546C(lbl_80535D70,object);
}
void *fn_803290D8(){
 if(!lbl_80535D70 || !(reinterpret_cast<unsigned int *>(lbl_80535D70)[0x24/4]&4)) fn_80329220();
 return lbl_80535D70;
}
}
#pragma pop
