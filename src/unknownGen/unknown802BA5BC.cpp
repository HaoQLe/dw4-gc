#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_802BA76C();
extern void *lbl_805347D0;
}
extern "C" {
void *fn_802BA5BC(void *object){
 fn_802BA76C();
 return fn_8006546C(lbl_805347D0,object);
}
}
#pragma pop
