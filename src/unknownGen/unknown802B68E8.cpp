#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_802B6B20();
extern void *lbl_80534680;
}
extern "C" {
void *fn_802B68E8(void *object){
 fn_802B6B20();
 return fn_8006546C(lbl_80534680,object);
}
}
#pragma pop
