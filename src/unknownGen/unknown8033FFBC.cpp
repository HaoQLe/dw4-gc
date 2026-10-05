#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_8034009C();
extern void *lbl_80536600;
}
extern "C" {
void *fn_8033FFBC(void *object){
 fn_8034009C();
 return fn_8006546C(lbl_80536600,object);
}
void *fn_8033FFFC(){
 if(!lbl_80536600 || !(reinterpret_cast<unsigned int *>(lbl_80536600)[0x24/4]&4)) fn_8034009C();
 return lbl_80536600;
}
}
#pragma pop
