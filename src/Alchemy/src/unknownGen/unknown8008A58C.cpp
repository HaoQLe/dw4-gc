#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
extern void *kSuccess__3Gap;
}
extern "C" {
void *fn_8008A58C(int p0,int p1,int p2){
 *reinterpret_cast<short *>(reinterpret_cast<char *>((void *)p1)+144)=(short)(int)(void *)p2;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=kSuccess__3Gap;
 return (void *)p0;
}
unsigned short fn_8008A59C(void *object){return *reinterpret_cast<unsigned short *>(reinterpret_cast<char *>(object)+144);}
void *fn_8008A5A4(int p0,int p1,int p2){
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p1)+124)=(void *)p2;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=kSuccess__3Gap;
 return (void *)p0;
}
int fn_8008A5B4(void *object){return *reinterpret_cast<int *>(reinterpret_cast<char *>(object)+124);}
}
#pragma pop
