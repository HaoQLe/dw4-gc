#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_802B7774();
extern void *lbl_805346A8;
}
extern "C" {
void *fn_802B73CC(void *object){
 fn_802B7774();
 return fn_8006546C(lbl_805346A8,object);
}
}
#pragma pop
