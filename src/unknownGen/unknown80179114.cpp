#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80179098(void *);
void fn_80179220(void *);
}
extern "C" {
void fn_80179114(int p0){
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+12)=(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12))+1);
 fn_80179098((void *)p0);
}
void fn_80179140(int p0,int p1){
 void *value0;
 void *value1;
 void *value2;
 if((int)p1!=0){
  value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+4);
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p1)+4)=(reinterpret_cast<char *>(value0)+1);
 }
 value1=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8);
 if(value1){
  value2=*reinterpret_cast<void **>(reinterpret_cast<char *>(value1)+4);
  *reinterpret_cast<void * *>(reinterpret_cast<char *>(value1)+4)=(reinterpret_cast<char *>(value2)+-1);
  if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value1)+4)&0x7FFFFF)){
   fn_80066E1C(value1);
  }
 }
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+8)=(void *)p1;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+12)=(void *)0;
 fn_80179220((void *)p0);
}
}
#pragma pop
