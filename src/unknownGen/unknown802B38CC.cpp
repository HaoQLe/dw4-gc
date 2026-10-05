#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_802B3A20();
extern void *lbl_80534564;
}
extern "C" {
void *fn_802B38CC(void *object){
 fn_802B3A20();
 return fn_8006546C(lbl_80534564,object);
}
}
#pragma pop
