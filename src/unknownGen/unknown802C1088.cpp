#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_802C1278();
extern void *lbl_80534A6C;
}
extern "C" {
void *fn_802C1088(void *object){
 fn_802C1278();
 return fn_8006546C(lbl_80534A6C,object);
}
}
#pragma pop
