#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_802C822C();
extern void *lbl_80534DA0;
}
extern "C" {
void *fn_802C803C(void *object){
 fn_802C822C();
 return fn_8006546C(lbl_80534DA0,object);
}
}
#pragma pop
