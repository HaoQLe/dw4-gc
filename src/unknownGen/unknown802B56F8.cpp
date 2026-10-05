#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_802B58D8();
extern void *lbl_80534630;
}
extern "C" {
void *fn_802B56F8(void *object){
 fn_802B58D8();
 return fn_8006546C(lbl_80534630,object);
}
}
#pragma pop
