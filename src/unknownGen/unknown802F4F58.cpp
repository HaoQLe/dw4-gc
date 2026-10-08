#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8028A400(void *,void *);
extern void *lbl_80535A68;
extern void *lbl_80561B3C;
}
extern "C" {
void fn_802F4F58(int p0){
 void *value0=lbl_80561B3C;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value0)+60)=lbl_80535A68;
 fn_8028A400(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12),(void *)p0);
}
}
#pragma pop
