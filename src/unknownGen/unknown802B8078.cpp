#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_802B82B0();
extern void *lbl_80534728;
}
extern "C" {
void *fn_802B8078(void *object){
 fn_802B82B0();
 return fn_8006546C(lbl_80534728,object);
}
}
#pragma pop
