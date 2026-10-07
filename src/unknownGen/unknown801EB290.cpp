#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80041C90(void *,void *,void *);
void *fn_80068430(int,int);
void *fn_801B4794(void *);
void fn_801EB254(int,int);
void *fn_801EB290(int,int,int,int,int,int);
}
extern "C" {
void *fn_801EB290(int p0,int p1,int p2,int p3,int p4,int p5){
 void *value2;
 void *value0;
 void *value1;
 void *value3;
 if(!*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+36)){
  value2=fn_80068430((int)(int)((void *)p0),(int)(int)((void *)p1));
  value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+36);
  if(value0){
   value1=*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+4);
   *reinterpret_cast<void * *>(reinterpret_cast<char *>(value0)+4)=(reinterpret_cast<char *>(value1)+-1);
   if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+4)&0x7FFFFF)){
    fn_80066E1C(value0);
   }
  }
  value3=fn_801B4794(value2);
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+36)=value3;
 }
 return *reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+36);
}
void *fn_801EB310(int p0,int p1,int p2,int p3,int p4,int p5){
 void *value4;
 void *value0;
 void *value1;
 void *value2;
 void *value3;
 void *value5;
 void *local0;
 value4=fn_801EB290((int)(int)((void *)p0),(int)(int)((void *)p1),(int)(int)((void *)p2),(int)(int)((void *)p3),(int)(int)((void *)p4),(int)(int)((void *)p5));
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
