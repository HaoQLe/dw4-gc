#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_802B7220();
extern void *lbl_80534698;
}
extern "C" {
void *fn_802B6FC0(void *object){
 fn_802B7220();
 return fn_8006546C(lbl_80534698,object);
}
}
#pragma pop
