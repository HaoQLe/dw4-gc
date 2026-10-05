#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_80338DA4();
extern void *lbl_80536178;
}
extern "C" {
void *fn_80338B10(void *object){
 fn_80338DA4();
 return fn_8006546C(lbl_80536178,object);
}
}
#pragma pop
