#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_802B9108();
extern void *lbl_80534774;
}
extern "C" {
void *fn_802B8E70(void *object){
 fn_802B9108();
 return fn_8006546C(lbl_80534774,object);
}
}
#pragma pop
