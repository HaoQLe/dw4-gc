#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_803459E0();
extern void *lbl_8053684C;
}
extern "C" {
void *fn_80345760(void *object){
 fn_803459E0();
 return fn_8006546C(lbl_8053684C,object);
}
}
#pragma pop
