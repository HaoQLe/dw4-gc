#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_80339EA4();
extern void *lbl_805361EC;
}
extern "C" {
void *fn_80339CA0(void *object){
 fn_80339EA4();
 return fn_8006546C(lbl_805361EC,object);
}
}
#pragma pop
