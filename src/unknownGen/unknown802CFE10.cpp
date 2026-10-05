#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_802CFFC0();
extern void *lbl_80535080;
}
extern "C" {
void *fn_802CFE10(void *object){
 fn_802CFFC0();
 return fn_8006546C(lbl_80535080,object);
}
}
#pragma pop
