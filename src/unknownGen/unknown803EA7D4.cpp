#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_803EA570(void *,void *,void *);
void *fn_803EF960(void *,void *);
void *fn_803EFC14(void *);
}
extern "C" {
void *fn_803EA7D4(int p0,int p1){
 void *value0;
 void *value1;
 void *local0;
 value0=fn_803EFC14((void *)p0);
 if((int)(int)value0==-1){
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p1)+0)=(void *)0;
  return (void *)0;
 } else {
  value1=fn_803EF960((void *)p0,&local0);
  if((int)(int)value1==0){
   *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p1)+0)=(void *)0;
   return (void *)0;
  } else {
   fn_803EA570((void *)p0,value1,(void *)p1);
   *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+4004)=*reinterpret_cast<void **>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+0))+20);
   *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+4008)=*reinterpret_cast<void **>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+0))+24);
   return (void *)0;
  }
 }
}
}
#pragma pop
