#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80070018(void *,void *);
void fn_80070140(void *,void *);
extern void *kFailure__3Gap;
extern void *kSuccess__3Gap;
}
extern "C" {
void fn_8006F724(int p0,int p1){
 void *value0;
 if((int)p1==0){
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=kFailure__3Gap;
  return;
 } else {
  value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+32);
  if((int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+52)>1){
   fn_80070018(value0,(void *)p1);
   fn_80070140(value0,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+20));
  }
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=kSuccess__3Gap;
  return;
 }
}
}
#pragma pop
