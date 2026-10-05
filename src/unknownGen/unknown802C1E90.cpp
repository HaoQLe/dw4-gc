#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_802C2080();
extern void *lbl_80534AA8;
}
extern "C" {
void *fn_802C1E90(void *object){
 fn_802C2080();
 return fn_8006546C(lbl_80534AA8,object);
}
}
#pragma pop
