#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_802C6198();
extern void *lbl_80534C50;
}
extern "C" {
void *fn_802C5E08(void *object){
 fn_802C6198();
 return fn_8006546C(lbl_80534C50,object);
}
}
#pragma pop
