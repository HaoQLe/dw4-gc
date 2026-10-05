#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_802D3BD4();
extern void *lbl_80535168;
}
extern "C" {
void *fn_802D399C(void *object){
 fn_802D3BD4();
 return fn_8006546C(lbl_80535168,object);
}
}
#pragma pop
