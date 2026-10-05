#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_802D26A4();
extern void *lbl_80535124;
}
extern "C" {
void *fn_802D2444(void *object){
 fn_802D26A4();
 return fn_8006546C(lbl_80535124,object);
}
}
#pragma pop
