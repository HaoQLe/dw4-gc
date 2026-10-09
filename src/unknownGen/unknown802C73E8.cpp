#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_802C7558();
extern void *lbl_80534D4C;
}
extern "C" {
void *fn_802C73E8(void *object){
 fn_802C7558();
 return fn_8006546C(lbl_80534D4C,object);
}
void *beModelCtrlInfoRideOn3_getMeta(){
 if(!lbl_80534D4C || !(reinterpret_cast<unsigned int *>(lbl_80534D4C)[0x24/4]&4)) fn_802C7558();
 return lbl_80534D4C;
}
}
#pragma pop
