#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_802D2FD8();
extern void *lbl_80535148;
}
extern "C" {
void *fn_802D2DE8(void *object){
 fn_802D2FD8();
 return fn_8006546C(lbl_80535148,object);
}
}
#pragma pop
