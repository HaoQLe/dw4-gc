#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_802C7C30();
extern void *lbl_80534D74;
}
extern "C" {
void *fn_802C7A78(void *object){
 fn_802C7C30();
 return fn_8006546C(lbl_80534D74,object);
}
}
#pragma pop
