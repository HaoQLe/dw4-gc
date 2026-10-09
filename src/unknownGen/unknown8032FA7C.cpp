#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_8032FD08();
extern void *lbl_80535EB0;
}
extern "C" {
void *fn_8032FA7C(void *object){
 fn_8032FD08();
 return fn_8006546C(lbl_80535EB0,object);
}
void *beNDMWShopCtrl10_getMeta(){
 if(!lbl_80535EB0 || !(reinterpret_cast<unsigned int *>(lbl_80535EB0)[0x24/4]&4)) fn_8032FD08();
 return lbl_80535EB0;
}
}
#pragma pop
