#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_802D8870();
extern void *lbl_80535304;
}
extern "C" {
void *fn_802D8680(void *object){
 fn_802D8870();
 return fn_8006546C(lbl_80535304,object);
}
}
#pragma pop
