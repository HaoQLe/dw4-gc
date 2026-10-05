#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_802C012C();
extern void *lbl_805349F0;
}
extern "C" {
void *fn_802C0004(void *object){
 fn_802C012C();
 return fn_8006546C(lbl_805349F0,object);
}
}
#pragma pop
