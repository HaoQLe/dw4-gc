#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_802BD6B0();
extern void *lbl_8053490C;
}
extern "C" {
void *fn_802BD440(void *object){
 fn_802BD6B0();
 return fn_8006546C(lbl_8053490C,object);
}
}
#pragma pop
