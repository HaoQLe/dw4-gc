#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80041660(void *,int,int);
void fn_80069128(void *,void *);
void fn_800691E8(void *,int);
void fn_80179E18(void *,void *,void *,int);
extern void *kSuccess__3Gap;
}
extern "C" {
void *fn_80179BF0(int p0,int p1){
 void *value0;
 void *local0;
 fn_800691E8(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+20),0);
 value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+24);
 if((int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+12)>=0){
  *reinterpret_cast<void * *>(reinterpret_cast<char *>(value0)+8)=(void *)0;
 } else {
  fn_80041660(value0,0,4);
 }
 fn_800691E8(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+28),0);
 fn_800691E8(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+32),0);
 fn_80069128(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+32),(void *)p1);
 fn_80179E18(&local0,(void *)p0,(void *)p1,-1);
 if((int)(int)local0==(int)(int)kSuccess__3Gap){
  return (void *)p1;
 } else {
  return (void *)0;
 }
}
}
#pragma pop
