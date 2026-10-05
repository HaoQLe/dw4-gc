#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_802CDE10();
extern void *lbl_80534FB8;
}
extern "C" {
void *fn_802CDC20(void *object){
 fn_802CDE10();
 return fn_8006546C(lbl_80534FB8,object);
}
}
#pragma pop
