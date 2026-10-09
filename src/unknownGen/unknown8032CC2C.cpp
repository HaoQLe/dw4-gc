#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_8032CF68();
extern void *lbl_80535E2C;
}
extern "C" {
void *fn_8032CC2C(void *object){
 fn_8032CF68();
 return fn_8006546C(lbl_80535E2C,object);
}
void *beNDMWShopCtrlDeviceSell_getMeta(){
 if(!lbl_80535E2C || !(reinterpret_cast<unsigned int *>(lbl_80535E2C)[0x24/4]&4)) fn_8032CF68();
 return lbl_80535E2C;
}
}
#pragma pop
