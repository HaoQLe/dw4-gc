#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80041660(void *,int,int);
void *fn_80068430(int,int);
void *fn_801BDE9C(void *);
void *fn_80201D8C(void *);
}
extern "C" {
void *fn_801F3A60(int p0,int p1,int p2,int p3,int p4,int p5){
 void *value3;
 void *value0;
 void *value1;
 void *value4;
 void *value2;
 void *value5;
 value3=fn_80068430((int)(int)((void *)p0),(int)(int)((void *)p1));
 value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+40);
 if(value0){
  value1=*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+4);
  *reinterpret_cast<void * *>(reinterpret_cast<char *>(value0)+4)=(reinterpret_cast<char *>(value1)+-1);
  if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+4)&0x7FFFFF)){
   fn_80066E1C(value0);
  }
 }
 value4=fn_801BDE9C(value3);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+40)=value4;
 fn_80201D8C((void *)p0);
 value2=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+44);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+20)=(void *)0;
 if((int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value2)+12)>=0){
  *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+8)=(void *)0;
  return value2;
 } else {
  value5=fn_80041660(value2,0,4);
  return value5;
 }
}
}
#pragma pop
