#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_80338964();
extern void *lbl_80536160;
}
extern "C" {
void *fn_803387A0(void *object){
 fn_80338964();
 return fn_8006546C(lbl_80536160,object);
}
void *fn_803387E0(){
 if(!lbl_80536160 || !(reinterpret_cast<unsigned int *>(lbl_80536160)[0x24/4]&4)) fn_80338964();
 return lbl_80536160;
}
}
#pragma pop
