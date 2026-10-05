#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_802BB7E0();
extern void *lbl_80534814;
}
extern "C" {
void *fn_802BB5F0(void *object){
 fn_802BB7E0();
 return fn_8006546C(lbl_80534814,object);
}
}
#pragma pop
