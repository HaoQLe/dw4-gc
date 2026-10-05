#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_802CE1F0();
extern void *lbl_80534FBC;
}
extern "C" {
void *fn_802CDEC4(void *object){
 fn_802CE1F0();
 return fn_8006546C(lbl_80534FBC,object);
}
}
#pragma pop
