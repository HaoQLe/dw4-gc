#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_8032E8F8();
extern void *lbl_80535E74;
}
extern "C" {
void *fn_8032E530(void *object){
 fn_8032E8F8();
 return fn_8006546C(lbl_80535E74,object);
}
void *beNDMWShopCtrlA0_getMeta(){
 if(!lbl_80535E74 || !(reinterpret_cast<unsigned int *>(lbl_80535E74)[0x24/4]&4)) fn_8032E8F8();
 return lbl_80535E74;
}
}
#pragma pop
