#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_802BEC60();
extern void *lbl_80534958;
}
extern "C" {
void *fn_802BEAB8(void *object){
 fn_802BEC60();
 return fn_8006546C(lbl_80534958,object);
}
void *fn_802BEAF8(){
 if(!lbl_80534958 || !(reinterpret_cast<unsigned int *>(lbl_80534958)[0x24/4]&4)) fn_802BEC60();
 return lbl_80534958;
}
}
#pragma pop
