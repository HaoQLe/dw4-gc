#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_8033F37C();
extern void *lbl_80536560;
}
extern "C" {
void *fn_8033F1CC(void *object){
 fn_8033F37C();
 return fn_8006546C(lbl_80536560,object);
}
}
#pragma pop
