#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_80343770();
extern void *lbl_80536764;
}
extern "C" {
void *fn_8034361C(void *object){
 fn_80343770();
 return fn_8006546C(lbl_80536764,object);
}
}
#pragma pop
