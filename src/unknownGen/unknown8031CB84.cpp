#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802A8B60(void *);
}
extern "C" {
void fn_8031CB84(int p0){
 void *value0;
 void *value1;
 void *value2;
 void *value3;
 void *value4;
 value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12);
 if(value0){
  value1=*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+4);
  *reinterpret_cast<void * *>(reinterpret_cast<char *>(value0)+4)=(reinterpret_cast<char *>(value1)+-1);
  if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+4)&0x7FFFFF)){
   fn_80066E1C(value0);
  }
 }
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+12)=(void *)0;
 value2=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8);
 if(value2){
  fn_802A8B60(value2);
 }
 value3=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8);
 if(value3){
  value4=*reinterpret_cast<void **>(reinterpret_cast<char *>(value3)+4);
  *reinterpret_cast<void * *>(reinterpret_cast<char *>(value3)+4)=(reinterpret_cast<char *>(value4)+-1);
  if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value3)+4)&0x7FFFFF)){
   fn_80066E1C(value3);
  }
 }
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+8)=(void *)0;
}
}
#pragma pop
