#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_803393C0();
extern void *lbl_80536188;
}
extern "C" {
void *fn_80338F60(void *object){
 fn_803393C0();
 return fn_8006546C(lbl_80536188,object);
}
}
#pragma pop
