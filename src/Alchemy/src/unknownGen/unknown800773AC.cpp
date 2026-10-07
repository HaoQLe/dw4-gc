#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
extern void *kFailure__3Gap;
extern void *kSuccess__3Gap;
}
extern "C" {
void fn_800773AC(int p0,int p1,int p2){
 if(!*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p1)+20)){
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p1)+12)=(void *)p2;
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=kSuccess__3Gap;
  return;
 }
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=kFailure__3Gap;
}
int fn_800773D4(void *object){return *reinterpret_cast<int *>(reinterpret_cast<char *>(object)+12);}
void fn_800773DC(int p0,int p1,int p2){
 if(!*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p1)+20)){
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p1)+16)=(void *)p2;
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=kSuccess__3Gap;
  return;
 }
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=kFailure__3Gap;
}
int fn_80077404(void *object){return *reinterpret_cast<int *>(reinterpret_cast<char *>(object)+16);}
}
#pragma pop
