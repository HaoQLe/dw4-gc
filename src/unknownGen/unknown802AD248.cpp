#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_802AD500();
extern void *lbl_80534474;
}
extern "C" {
void *fn_802AD248(void *object){
 fn_802AD500();
 return fn_8006546C(lbl_80534474,object);
}
}
#pragma pop
