#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_80335B90();
extern void *lbl_80536054;
}
extern "C" {
void *fn_80335958(void *object){
 fn_80335B90();
 return fn_8006546C(lbl_80536054,object);
}
}
#pragma pop
