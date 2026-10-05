#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_8033E79C();
extern void *lbl_80536504;
}
extern "C" {
void *fn_8033E564(void *object){
 fn_8033E79C();
 return fn_8006546C(lbl_80536504,object);
}
}
#pragma pop
