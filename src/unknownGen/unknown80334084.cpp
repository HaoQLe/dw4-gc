#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_803342BC();
extern void *lbl_80535FB8;
}
extern "C" {
void *fn_80334084(void *object){
 fn_803342BC();
 return fn_8006546C(lbl_80535FB8,object);
}
}
#pragma pop
