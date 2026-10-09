#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_802C7200();
extern void *lbl_80534D30;
}
extern "C" {
void *fn_802C7090(void *object){
 fn_802C7200();
 return fn_8006546C(lbl_80534D30,object);
}
void *beModelCtrlInfoRideOn4_getMeta(){
 if(!lbl_80534D30 || !(reinterpret_cast<unsigned int *>(lbl_80534D30)[0x24/4]&4)) fn_802C7200();
 return lbl_80534D30;
}
}
#pragma pop
