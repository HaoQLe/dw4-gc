#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_8033AF8C();
extern void *lbl_80536228;
}
extern "C" {
void *fn_8033ACF8(void *object){
 fn_8033AF8C();
 return fn_8006546C(lbl_80536228,object);
}
}
#pragma pop
