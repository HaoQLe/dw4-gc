#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_80341AD4();
extern void *lbl_805366E8;
}
extern "C" {
void *fn_80341944(void *object){
 fn_80341AD4();
 return fn_8006546C(lbl_805366E8,object);
}
}
#pragma pop
