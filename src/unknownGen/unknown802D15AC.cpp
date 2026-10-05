#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_802D1784();
extern void *lbl_805350F8;
}
extern "C" {
void *fn_802D15AC(void *object){
 fn_802D1784();
 return fn_8006546C(lbl_805350F8,object);
}
}
#pragma pop
