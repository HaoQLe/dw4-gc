#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_8033BFDC();
extern void *lbl_80536258;
}
extern "C" {
void *fn_8033BDA4(void *object){
 fn_8033BFDC();
 return fn_8006546C(lbl_80536258,object);
}
}
#pragma pop
