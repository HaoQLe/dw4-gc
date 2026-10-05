#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_802E5714();
extern void *lbl_80535764;
}
extern "C" {
void *fn_802E54C4(void *object){
 fn_802E5714();
 return fn_8006546C(lbl_80535764,object);
}
}
#pragma pop
