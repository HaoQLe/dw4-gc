#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800585C4(void *,void *,void *);
extern void *kFailure__3Gap;
extern void *kSuccess__3Gap;
}
extern "C" {
void fn_80058680(int p0,int p1,int p2){
 void *value0;
 void *local1;
 void *local0;
 if(*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p1)+44)){
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=kSuccess__3Gap;
 } else {
  value0=(void *)p2;
  if((int)p2==8){
   value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+20);
  }
  switch((int)(int)value0){
  case 1:
  case 2:
  case 3:
  case 5:
  case 6:
   *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=kFailure__3Gap;
   break;
  default:
   *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=kFailure__3Gap;
   break;
  case 0:
  case 4:
   fn_800585C4(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+12),&local1,&local0);
   if(!local1){
    *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=kFailure__3Gap;
   } else {
    *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p1)+56)=(void *)0;
    *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p1)+48)=local1;
    *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p1)+52)=local0;
    *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p1)+44)=1;
    *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p1)+24)=local1;
    *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=kSuccess__3Gap;
   }
  }
 }
}
}
#pragma pop
