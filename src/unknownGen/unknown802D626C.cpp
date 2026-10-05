#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_802D645C();
extern void *lbl_8053524C;
}
extern "C" {
void *fn_802D626C(void *object){
 fn_802D645C();
 return fn_8006546C(lbl_8053524C,object);
}
}
#pragma pop
