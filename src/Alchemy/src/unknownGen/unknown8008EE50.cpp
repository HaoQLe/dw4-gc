#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
extern void *kSuccess__3Gap;
}
extern "C" {
void *fn_8008EE50(int p0,int p1,int p2){
 *reinterpret_cast<short *>(reinterpret_cast<char *>((void *)p1)+112)=(short)(int)(void *)p2;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=kSuccess__3Gap;
 return (void *)p0;
}
unsigned short fn_8008EE60(void *object){return *reinterpret_cast<unsigned short *>(reinterpret_cast<char *>(object)+112);}
void *fn_8008EE68(int p0,int p1,int p2){
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p1)+128)=(void *)p2;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=kSuccess__3Gap;
 return (void *)p0;
}
int fn_8008EE78(void *object){return *reinterpret_cast<int *>(reinterpret_cast<char *>(object)+128);}
}
#pragma pop
