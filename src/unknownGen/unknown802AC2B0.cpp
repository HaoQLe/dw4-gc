#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_802AC404();
extern void *lbl_80534404;
}
extern "C" {
void *fn_802AC2B0(void *object){
 fn_802AC404();
 return fn_8006546C(lbl_80534404,object);
}
}
#pragma pop
