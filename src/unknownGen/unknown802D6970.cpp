#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_802D6B20();
extern void *lbl_80535258;
}
extern "C" {
void *fn_802D6970(void *object){
 fn_802D6B20();
 return fn_8006546C(lbl_80535258,object);
}
}
#pragma pop
