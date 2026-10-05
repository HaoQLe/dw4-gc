#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_802E278C();
extern void *lbl_80535660;
}
extern "C" {
void *fn_802E24DC(void *object){
 fn_802E278C();
 return fn_8006546C(lbl_80535660,object);
}
}
#pragma pop
