#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
extern void *kFailure__3Gap;
extern void *kSuccess__3Gap;
}
extern "C" {
void fn_800F978C(int p0,int p1,int p2){
 if((unsigned int)*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p1)+321)==1){
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=kFailure__3Gap;
  return;
 }
 if((unsigned int)p2==0){
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=kFailure__3Gap;
  return;
 }
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p1)+1280)=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p2)+4);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p1)+1284)=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p2)+8);
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p1)+1288)=(unsigned char)(int)(void *)(int)*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p2)+1);
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p1)+1289)=(unsigned char)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p2)+20);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=kSuccess__3Gap;
}
}
#pragma pop
