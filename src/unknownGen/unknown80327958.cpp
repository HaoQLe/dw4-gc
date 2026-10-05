#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_80327C38();
extern void *lbl_80535D50;
}
extern "C" {
void *fn_80327958(void *object){
 fn_80327C38();
 return fn_8006546C(lbl_80535D50,object);
}
}
#pragma pop
