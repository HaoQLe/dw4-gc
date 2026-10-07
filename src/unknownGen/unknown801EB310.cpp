#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80041C90(void *,void *,void *);
void fn_801EB254(int,int);
void *fn_801EB290(void *);
}
extern "C" {
void *fn_801EB310(int p0,int p1){
 void *value4;
 void *value0;
 void *value1;
 void *value2;
 void *value3;
 void *value5;
 void *local0;
 value4=fn_801EB290((void *)p0);
 if((unsigned int)p1!=0){
  value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+4);
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p1)+4)=(reinterpret_cast<char *>(value0)+1);
 }
 value1=*reinterpret_cast<void **>(reinterpret_cast<char *>(value4)+8);
 if(value1){
  value2=*reinterpret_cast<void **>(reinterpret_cast<char *>(value1)+4);
  *reinterpret_cast<void * *>(reinterpret_cast<char *>(value1)+4)=(reinterpret_cast<char *>(value2)+-1);
  if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value1)+4)&0x7FFFFF)){
   fn_80066E1C(value1);
  }
 }
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+8)=(void *)p1;
 value3=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+32);
 local0=value4;
 value5=fn_80041C90(value3,&local0,(void *)fn_801EB254);
 if((int)(int)value5==-1){
  return (void *)0;
 } else {
  return (void *)(int)*reinterpret_cast<int *>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+32))+16))+((int)value5<<2));
 }
}
}
#pragma pop
