#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_802E3FCC();
extern void *lbl_80535718;
}
extern "C" {
void *fn_802E3E78(void *object){
 fn_802E3FCC();
 return fn_8006546C(lbl_80535718,object);
}
}
#pragma pop
