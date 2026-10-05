#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_802C511C();
extern void *lbl_80534BE4;
}
extern "C" {
void *fn_802C4EA4(void *object){
 fn_802C511C();
 return fn_8006546C(lbl_80534BE4,object);
}
}
#pragma pop
