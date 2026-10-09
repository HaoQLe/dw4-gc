#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
extern void *kSuccess__3Gap;
}
extern "C" {
void *igProgramFile_virtual2A4(int p0,int p1,int p2){
 *reinterpret_cast<short *>(reinterpret_cast<char *>((void *)p1)+112)=(short)(int)(void *)p2;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=kSuccess__3Gap;
 return (void *)p0;
}
unsigned short igProgramFile_virtual2A8(void *object){return *reinterpret_cast<unsigned short *>(reinterpret_cast<char *>(object)+112);}
void *igProgramFile_virtual2AC(int p0,int p1,int p2){
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p1)+128)=(void *)p2;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=kSuccess__3Gap;
 return (void *)p0;
}
int igProgramFile_virtual2B0(void *object){return *reinterpret_cast<int *>(reinterpret_cast<char *>(object)+128);}
}
#pragma pop
