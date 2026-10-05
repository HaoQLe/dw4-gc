#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_8032B2B4();
extern void *lbl_80535DC8;
}
extern "C" {
void *fn_8032AFB8(void *object){
 fn_8032B2B4();
 return fn_8006546C(lbl_80535DC8,object);
}
}
#pragma pop
