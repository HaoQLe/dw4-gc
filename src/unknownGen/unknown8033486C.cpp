#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_80334A5C();
extern void *lbl_80535FD4;
}
extern "C" {
void *fn_8033486C(void *object){
 fn_80334A5C();
 return fn_8006546C(lbl_80535FD4,object);
}
}
#pragma pop
