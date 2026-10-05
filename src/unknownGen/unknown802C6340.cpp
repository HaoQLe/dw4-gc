#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_802C6C54();
extern void *lbl_80534C64;
}
extern "C" {
void *fn_802C6340(void *object){
 fn_802C6C54();
 return fn_8006546C(lbl_80534C64,object);
}
}
#pragma pop
