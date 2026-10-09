#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80078260(void *);
extern void *kFailure__3Gap;
extern void *kSuccess__3Gap;
}
extern "C" {
void fn_80078394(int p0,int p1){
 if(*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p1)+44)){
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=kFailure__3Gap;
  return;
 } else {
  if((*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p1)+52)&&!*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p1)+54))){
   *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p1)+53)=1;
   *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=kSuccess__3Gap;
   return;
  } else {
   fn_80078260((void *)p1);
   *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=kSuccess__3Gap;
   return;
  }
 }
}
}
#pragma pop
