#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_802BC110();
extern void *lbl_80534830;
}
extern "C" {
void *fn_802BBE98(void *object){
 fn_802BC110();
 return fn_8006546C(lbl_80534830,object);
}
}
#pragma pop
