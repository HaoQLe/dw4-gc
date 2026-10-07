#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
extern void *kSuccess__3Gap;
}
extern "C" {
int fn_80083164(void *object){return *reinterpret_cast<int *>(reinterpret_cast<char *>(object)+168);}
void *fn_8008316C(int p0,int p1,int p2){
 *reinterpret_cast<short *>(reinterpret_cast<char *>((void *)p1)+172)=(short)(int)(void *)p2;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=kSuccess__3Gap;
 return (void *)p0;
}
unsigned short fn_8008317C(void *object){return *reinterpret_cast<unsigned short *>(reinterpret_cast<char *>(object)+172);}
void *fn_80083184(int p0,int p1,int p2){
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p1)+144)=(void *)p2;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=kSuccess__3Gap;
 return (void *)p0;
}
int fn_80083194(void *object){return *reinterpret_cast<int *>(reinterpret_cast<char *>(object)+144);}
}
#pragma pop
