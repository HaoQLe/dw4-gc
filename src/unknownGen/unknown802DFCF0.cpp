#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_802E001C();
extern void *lbl_80535584;
}
extern "C" {
void *fn_802DFCF0(void *object){
 fn_802E001C();
 return fn_8006546C(lbl_80535584,object);
}
}
#pragma pop
