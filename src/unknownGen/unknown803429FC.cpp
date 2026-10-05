#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_80342B30();
extern void *lbl_8053673C;
}
extern "C" {
void *fn_803429FC(void *object){
 fn_80342B30();
 return fn_8006546C(lbl_8053673C,object);
}
}
#pragma pop
