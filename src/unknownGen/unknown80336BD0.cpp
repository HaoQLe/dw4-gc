#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_80336F04();
extern void *lbl_805360A4;
}
extern "C" {
void *fn_80336BD0(void *object){
 fn_80336F04();
 return fn_8006546C(lbl_805360A4,object);
}
}
#pragma pop
