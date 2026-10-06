#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80305ED0(void *,void *,void *,void *,void *);
extern char lbl_80458F0C[];
}
extern "C" {
void fn_8036BCDC(int p0,int p1,int p2,int p3){
 fn_80305ED0(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12),lbl_80458F0C,(void *)p1,(void *)p2,(void *)p3);
}
}
#pragma pop
