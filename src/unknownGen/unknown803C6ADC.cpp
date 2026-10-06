#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80400BB0(void *,void *,void *,void *);
}
extern "C" {
void fn_803C6ADC(int p0,int p1,int p2){
 fn_80400BB0(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8),*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12),*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+16),(void *)p2);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+4)=(void *)0;
}
}
#pragma pop
