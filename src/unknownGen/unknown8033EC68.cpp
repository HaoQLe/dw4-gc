#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_8033EEE8();
extern void *lbl_80536520;
}
extern "C" {
void *fn_8033EC68(void *object){
 fn_8033EEE8();
 return fn_8006546C(lbl_80536520,object);
}
}
#pragma pop
