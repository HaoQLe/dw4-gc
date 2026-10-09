#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_802BDC4C();
extern void *lbl_80534918;
}
extern "C" {
void *fn_802BDAA4(void *object){
 fn_802BDC4C();
 return fn_8006546C(lbl_80534918,object);
}
void *beSvStartApi_getMeta(){
 if(!lbl_80534918 || !(reinterpret_cast<unsigned int *>(lbl_80534918)[0x24/4]&4)) fn_802BDC4C();
 return lbl_80534918;
}
}
#pragma pop
