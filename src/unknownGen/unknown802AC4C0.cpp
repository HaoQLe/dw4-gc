#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_802AC614();
extern void *lbl_80534408;
}
extern "C" {
void *fn_802AC4C0(void *object){
 fn_802AC614();
 return fn_8006546C(lbl_80534408,object);
}
}
#pragma pop
