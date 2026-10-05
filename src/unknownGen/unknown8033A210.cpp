#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_8033A414();
extern void *lbl_805361F4;
}
extern "C" {
void *fn_8033A210(void *object){
 fn_8033A414();
 return fn_8006546C(lbl_805361F4,object);
}
}
#pragma pop
