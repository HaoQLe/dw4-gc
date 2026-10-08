#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800C37E4(void *,int);
void fn_801E754C(void *);
}
extern "C" {
void fn_801E7234(int p0,int p1){
 void *value0;
 void *value1;
 void *value2;
 void *value3;
 if((int)p1!=0){
  value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+4);
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p1)+4)=(reinterpret_cast<char *>(value0)+1);
 }
 value1=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+32);
 if(value1){
  value2=*reinterpret_cast<void **>(reinterpret_cast<char *>(value1)+4);
  *reinterpret_cast<void * *>(reinterpret_cast<char *>(value1)+4)=(reinterpret_cast<char *>(value2)+-1);
  if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value1)+4)&0x7FFFFF)){
   fn_80066E1C(value1);
  }
 }
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+32)=(void *)p1;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+32))+96)=(void *)0;
 value3=fn_800C37E4(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+32),0);
 if(!value3){
  fn_801E754C(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+32));
 }
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+60)=0;
}
}
#pragma pop
