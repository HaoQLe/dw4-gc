#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_802E76CC();
extern void *lbl_80535830;
}
extern "C" {
void *fn_802E74EC(void *object){
 fn_802E76CC();
 return fn_8006546C(lbl_80535830,object);
}
}
#pragma pop
