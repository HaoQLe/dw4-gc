#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_802761E4(void *);
void fn_802767CC(void *,void *,void *);
}
extern "C" {
void *fn_8027CAE8(int p0,int p1){
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p1)+8)=(void *)(int)*reinterpret_cast<short *>(reinterpret_cast<char *>((void *)p0)+28);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p1)+4)=(void *)-1;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p1)+0)=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+40);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+40)=(void *)p1;
 return (void *)p0;
}
void fn_8027CB08(int p0,int p1){
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+40)=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+0);
 void *value0=fn_802761E4((void *)p0);
 fn_802767CC((void *)p0,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+4),value0);
}
}
#pragma pop
