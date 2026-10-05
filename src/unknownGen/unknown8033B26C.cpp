#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_8033B470();
extern void *lbl_80536230;
}
extern "C" {
void *fn_8033B26C(void *object){
 fn_8033B470();
 return fn_8006546C(lbl_80536230,object);
}
}
#pragma pop
