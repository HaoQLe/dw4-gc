#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_8033D84C();
extern void *lbl_8053644C;
}
extern "C" {
void *fn_8033D66C(void *object){
 fn_8033D84C();
 return fn_8006546C(lbl_8053644C,object);
}
}
#pragma pop
