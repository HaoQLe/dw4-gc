#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_80326A58();
extern void *lbl_80535D2C;
}
extern "C" {
void *fn_803267E0(void *object){
 fn_80326A58();
 return fn_8006546C(lbl_80535D2C,object);
}
}
#pragma pop
