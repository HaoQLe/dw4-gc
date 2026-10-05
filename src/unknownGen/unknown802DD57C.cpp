#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_802DD6F8();
extern void *lbl_80535478;
}
extern "C" {
void *fn_802DD57C(void *object){
 fn_802DD6F8();
 return fn_8006546C(lbl_80535478,object);
}
}
#pragma pop
