#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_8033A71C();
extern void *lbl_805361F8;
}
extern "C" {
void *fn_8033A4C8(void *object){
 fn_8033A71C();
 return fn_8006546C(lbl_805361F8,object);
}
}
#pragma pop
