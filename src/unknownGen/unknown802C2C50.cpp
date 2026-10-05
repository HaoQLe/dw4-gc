#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_802C2D78();
extern void *lbl_80534B38;
}
extern "C" {
void *fn_802C2C50(void *object){
 fn_802C2D78();
 return fn_8006546C(lbl_80534B38,object);
}
}
#pragma pop
