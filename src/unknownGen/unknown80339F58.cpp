#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_8033A15C();
extern void *lbl_805361F0;
}
extern "C" {
void *fn_80339F58(void *object){
 fn_8033A15C();
 return fn_8006546C(lbl_805361F0,object);
}
}
#pragma pop
