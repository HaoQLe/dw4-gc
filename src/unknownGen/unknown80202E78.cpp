#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80069128(void *,void *,void *);
extern void *kSuccess__3Gap;
}
extern "C" {
void igSimpleUserInfo_virtual9C(int p0,int p1,int p2){
 fn_80069128(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+32),(void *)p2,(void *)p2);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=kSuccess__3Gap;
}
}
#pragma pop
