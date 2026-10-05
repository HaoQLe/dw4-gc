#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_8034474C();
extern void *lbl_805367F0;
}
extern "C" {
void *fn_80344274(void *object){
 fn_8034474C();
 return fn_8006546C(lbl_805367F0,object);
}
}
#pragma pop
