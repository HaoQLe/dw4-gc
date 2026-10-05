#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_802DE5E0();
extern void *lbl_805354C4;
}
extern "C" {
void *fn_802DE3F0(void *object){
 fn_802DE5E0();
 return fn_8006546C(lbl_805354C4,object);
}
}
#pragma pop
