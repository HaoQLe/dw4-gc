#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_803422BC();
extern void *lbl_80536718;
}
extern "C" {
void *fn_80342084(void *object){
 fn_803422BC();
 return fn_8006546C(lbl_80536718,object);
}
}
#pragma pop
