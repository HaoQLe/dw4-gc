#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_80338624();
extern void *lbl_80536158;
}
extern "C" {
void *fn_80338420(void *object){
 fn_80338624();
 return fn_8006546C(lbl_80536158,object);
}
}
#pragma pop
