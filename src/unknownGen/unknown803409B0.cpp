#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_80340B0C();
extern void *lbl_80536634;
}
extern "C" {
void *fn_803409B0(void *object){
 fn_80340B0C();
 return fn_8006546C(lbl_80536634,object);
}
void *fn_803409F0(){
 if(!lbl_80536634 || !(reinterpret_cast<unsigned int *>(lbl_80536634)[0x24/4]&4)) fn_80340B0C();
 return lbl_80536634;
}
}
#pragma pop
