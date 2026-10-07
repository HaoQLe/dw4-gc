#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
extern void *kFailure__3Gap;
extern void *kSuccess__3Gap;
}
extern "C" {
void fn_8008932C(int p0,int p1,int p2){
 if(!*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p1)+148)){
  *reinterpret_cast<short *>(reinterpret_cast<char *>((void *)p1)+112)=(short)(int)(void *)p2;
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=kSuccess__3Gap;
  return;
 }
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=kFailure__3Gap;
}
unsigned short fn_80089354(void *object){return *reinterpret_cast<unsigned short *>(reinterpret_cast<char *>(object)+112);}
void fn_8008935C(int p0,int p1,int p2){
 if(!*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p1)+148)){
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p1)+128)=(void *)p2;
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=kSuccess__3Gap;
  return;
 }
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=kFailure__3Gap;
}
int fn_80089384(void *object){return *reinterpret_cast<int *>(reinterpret_cast<char *>(object)+128);}
}
#pragma pop
