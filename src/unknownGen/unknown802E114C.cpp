#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_802E133C();
extern void *lbl_805355D8;
}
extern "C" {
void *fn_802E114C(void *object){
 fn_802E133C();
 return fn_8006546C(lbl_805355D8,object);
}
}
#pragma pop
