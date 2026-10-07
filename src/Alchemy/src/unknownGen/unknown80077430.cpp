#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80260DA8(void *,void *);
extern void *kFailure__3Gap;
extern void *kSuccess__3Gap;
}
extern "C" {
void fn_80077430(){}
void fn_80077434(int p0,int p1){
 fn_80260DA8((reinterpret_cast<char *>((void *)p1)+24),*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+12));
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p1)+20)=1;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=kSuccess__3Gap;
}
void fn_80077484(int p0,int p1){
 if(!*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p1)+20)){
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=kFailure__3Gap;
  return;
 }
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p1)+20)=0;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=kSuccess__3Gap;
}
}
#pragma pop
