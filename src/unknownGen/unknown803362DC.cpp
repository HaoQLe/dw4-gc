#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_80336514();
extern void *lbl_80536090;
}
extern "C" {
void *fn_803362DC(void *object){
 fn_80336514();
 return fn_8006546C(lbl_80536090,object);
}
}
#pragma pop
