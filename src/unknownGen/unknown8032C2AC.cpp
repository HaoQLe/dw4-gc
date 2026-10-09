#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_8032C61C();
extern void *lbl_80535E08;
}
extern "C" {
void *fn_8032C2AC(void *object){
 fn_8032C61C();
 return fn_8006546C(lbl_80535E08,object);
}
void *beNDMWShopCtrlSales_getMeta(){
 if(!lbl_80535E08 || !(reinterpret_cast<unsigned int *>(lbl_80535E08)[0x24/4]&4)) fn_8032C61C();
 return lbl_80535E08;
}
}
#pragma pop
