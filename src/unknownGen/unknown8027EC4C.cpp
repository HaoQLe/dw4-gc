#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8027BD18(void *,void *,int);
}
extern "C" {
void fn_8027EC4C(int p0){
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+96)=(void *)(int)((int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+96)-(((int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+44)+(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+56))<<2));
 fn_8027BD18((void *)p0,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+52),0);
 fn_8027BD18((void *)p0,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+64),0);
}
}
#pragma pop
