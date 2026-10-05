#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_802C40EC();
extern void *lbl_80534B90;
}
extern "C" {
void *fn_802C3EFC(void *object){
 fn_802C40EC();
 return fn_8006546C(lbl_80534B90,object);
}
}
#pragma pop
