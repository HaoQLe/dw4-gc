#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_80339BEC();
extern void *lbl_805361E8;
}
extern "C" {
void *fn_803399E8(void *object){
 fn_80339BEC();
 return fn_8006546C(lbl_805361E8,object);
}
}
#pragma pop
