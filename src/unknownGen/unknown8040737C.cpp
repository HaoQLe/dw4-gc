#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_804074B4();
extern void *lbl_8055CA20;
}
extern "C" {
void *fn_8040737C(void *object){
 fn_804074B4();
 return fn_8006546C(lbl_8055CA20,object);
}
void *igFlyMode_getMeta(){
 if(!lbl_8055CA20 || !(reinterpret_cast<unsigned int *>(lbl_8055CA20)[0x24/4]&4)) fn_804074B4();
 return lbl_8055CA20;
}
}
#pragma pop
