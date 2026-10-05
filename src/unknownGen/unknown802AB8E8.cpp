#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_802ABA3C();
extern void *lbl_805343D4;
}
extern "C" {
void *fn_802AB8E8(void *object){
 fn_802ABA3C();
 return fn_8006546C(lbl_805343D4,object);
}
}
#pragma pop
