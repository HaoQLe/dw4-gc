#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8004CED8(void *,int);
void fn_8004D6DC(void *,void *,void *,int);
void fn_8004D94C(void *);
extern void *kFailure__3Gap;
extern void *kSuccess__3Gap;
}
extern "C" {
void fn_8004F870(int p0,int p1,int p2){
 void *value0;
 void *value1;
 void *value2;
 void *local0;
 value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+104);
 if((!value0&&(unsigned int)p2==0)){
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=kFailure__3Gap;
  return;
 } else {
  if(!value0){
   fn_8004D6DC(&local0,(void *)p1,(void *)p2,4);
   if((int)(int)local0==(int)(int)kFailure__3Gap){
    if((unsigned int)p2!=0){
     value1=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+104);
     if((value1&&(value2=*reinterpret_cast<void **>(reinterpret_cast<char *>(value1)+4),*reinterpret_cast<void * *>(reinterpret_cast<char *>(value1)+4)=(reinterpret_cast<char *>(value2)+-1),!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value1)+4)&0x7FFFFF)))){
      fn_80066E1C(value1);
     }
     *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p1)+104)=(void *)0;
    }
    *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=kFailure__3Gap;
    return;
   }
   *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p1)+196)=(void *)1;
  }
  if(!*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+104)){
   *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=kFailure__3Gap;
   return;
  } else {
   fn_8004D94C((void *)p1);
   fn_8004CED8(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+104),4);
   *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=kSuccess__3Gap;
   return;
  }
 }
}
}
#pragma pop
