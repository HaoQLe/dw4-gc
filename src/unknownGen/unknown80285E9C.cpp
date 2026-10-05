#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_802862A0();
extern void *lbl_80515CCC;
}
extern "C" {
void *fn_80285E9C(void *object){
 fn_802862A0();
 return fn_8006546C(lbl_80515CCC,object);
}
}
#pragma pop
