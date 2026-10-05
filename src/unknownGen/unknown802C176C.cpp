#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_802C194C();
extern void *lbl_80534A84;
}
extern "C" {
void *fn_802C176C(void *object){
 fn_802C194C();
 return fn_8006546C(lbl_80534A84,object);
}
}
#pragma pop
