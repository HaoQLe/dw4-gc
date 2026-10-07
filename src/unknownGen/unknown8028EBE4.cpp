#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800691E8(void *,void *);
}
extern "C" {
void fn_8028EBE4(int p0,int p1,int p2,int p3){
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+16)=(void *)p1;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+20)=(void *)p2;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+24)=(void *)p3;
 fn_800691E8(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8),(void *)(int)(p3*(p1*p2)));
}
}
#pragma pop
