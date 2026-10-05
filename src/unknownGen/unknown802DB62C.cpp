#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_802DB798();
extern void *lbl_80535408;
}
extern "C" {
void *fn_802DB62C(void *object){
 fn_802DB798();
 return fn_8006546C(lbl_80535408,object);
}
}
#pragma pop
