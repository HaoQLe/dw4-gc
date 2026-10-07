#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80068430(int,int);
void *fn_800BC62C(void *);
}
extern "C" {
void fn_801FF70C(int p0,int p1,int p2,int p3,int p4,int p5){
 void *value2;
 void *value0;
 void *value1;
 void *value3;
 value2=fn_80068430((int)(int)((void *)p0),(int)(int)((void *)p1));
 value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+188);
 if(value0){
  value1=*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+4);
  *reinterpret_cast<void * *>(reinterpret_cast<char *>(value0)+4)=(reinterpret_cast<char *>(value1)+-1);
  if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+4)&0x7FFFFF)){
   fn_80066E1C(value0);
  }
 }
 value3=fn_800BC62C(value2);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+188)=value3;
}
}
#pragma pop
