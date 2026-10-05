#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_802E5410();
extern void *lbl_80535760;
}
extern "C" {
void *fn_802E5220(void *object){
 fn_802E5410();
 return fn_8006546C(lbl_80535760,object);
}
}
#pragma pop
