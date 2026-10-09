#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_8032B7E0();
extern void *lbl_80535DE8;
}
extern "C" {
void *fn_8032B4C0(void *object){
 fn_8032B7E0();
 return fn_8006546C(lbl_80535DE8,object);
}
void *beNDMWShopJunk_getMeta(){
 if(!lbl_80535DE8 || !(reinterpret_cast<unsigned int *>(lbl_80535DE8)[0x24/4]&4)) fn_8032B7E0();
 return lbl_80535DE8;
}
}
#pragma pop
