#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_80340654();
extern void *lbl_80536620;
}
extern "C" {
void *fn_803404A4(void *object){
 fn_80340654();
 return fn_8006546C(lbl_80536620,object);
}
}
#pragma pop
