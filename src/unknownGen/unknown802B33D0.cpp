#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_802B3758();
extern void *lbl_8053455C;
}
extern "C" {
void *fn_802B33D0(void *object){
 fn_802B3758();
 return fn_8006546C(lbl_8053455C,object);
}
}
#pragma pop
