#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8002AAD4();
void *fn_8006546C(void *,void *);
extern void *lbl_80561808;
}
extern "C" {
void *fn_8002A960(void *object){
 fn_8002AAD4();
 return fn_8006546C(lbl_80561808,object);
}
void *fn_8002A998(){
 if(!lbl_80561808 || !(reinterpret_cast<unsigned int *>(lbl_80561808)[0x24/4]&4)) fn_8002AAD4();
 return lbl_80561808;
}
}
#pragma pop
