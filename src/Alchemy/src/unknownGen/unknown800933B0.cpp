#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
extern void *kFailure__3Gap;
extern void *kSuccess__3Gap;
}
extern "C" {
unsigned short igElfFile_virtual11C(void *object){return *reinterpret_cast<unsigned short *>(reinterpret_cast<char *>(object)+124);}
void *igElfFile_virtual120(int p0,int p1,int p2){
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p1)+128)=(void *)p2;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=kSuccess__3Gap;
 return (void *)p0;
}
int igElfFile_virtual124(void *object){return *reinterpret_cast<int *>(reinterpret_cast<char *>(object)+128);}
void *igElfFile_virtual128(int p0){
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=kFailure__3Gap;
 return (void *)p0;
}
}
#pragma pop
