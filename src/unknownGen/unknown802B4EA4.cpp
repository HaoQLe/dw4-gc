#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_802B5094();
extern void *lbl_80534620;
}
extern "C" {
void *fn_802B4EA4(void *object){
 fn_802B5094();
 return fn_8006546C(lbl_80534620,object);
}
}
#pragma pop
