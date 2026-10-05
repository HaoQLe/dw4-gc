#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_803382B4();
extern void *lbl_80536150;
}
extern "C" {
void *fn_803380C4(void *object){
 fn_803382B4();
 return fn_8006546C(lbl_80536150,object);
}
}
#pragma pop
