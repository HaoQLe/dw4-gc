#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
extern void *kFailure__3Gap;
extern void *kSuccess__3Gap;
}
extern "C" {
unsigned char igProgramFile_virtual108(void *object){return *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(object)+148);}
void igProgramFile_virtual110(int p0,int p1,int p2,int p3){
 if(!*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p1)+148)){
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p1)+124)=(void *)p3;
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p1)+120)=(void *)p2;
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=kSuccess__3Gap;
  return;
 }
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=kFailure__3Gap;
}
}
#pragma pop
