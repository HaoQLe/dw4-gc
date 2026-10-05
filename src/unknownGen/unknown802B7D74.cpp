#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_802B7F64();
extern void *lbl_80534720;
}
extern "C" {
void *fn_802B7D74(void *object){
 fn_802B7F64();
 return fn_8006546C(lbl_80534720,object);
}
}
#pragma pop
