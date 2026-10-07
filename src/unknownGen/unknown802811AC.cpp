#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8027BD18(void *,void *,int);
}
extern "C" {
void fn_802811AC(int p0,int p1){
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+96)=(void *)(int)((int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+96)-(((int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+8)*40)+24));
 fn_8027BD18((void *)p0,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+0),0);
 fn_8027BD18((void *)p0,(void *)p1,0);
}
}
#pragma pop
