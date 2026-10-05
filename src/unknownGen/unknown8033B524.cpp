#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_8033B728();
extern void *lbl_80536234;
}
extern "C" {
void *fn_8033B524(void *object){
 fn_8033B728();
 return fn_8006546C(lbl_80536234,object);
}
}
#pragma pop
