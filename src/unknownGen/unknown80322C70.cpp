#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800667B4(void *);
}
extern "C" {
void fn_80322C70(int p0){
 void *value0;
 void *value1;
 void *value2;
 void *value3;
 void *value4;
 void *value5;
 value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+216);
 if(value0){
  if(value0){
   value1=*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+4);
   *reinterpret_cast<void * *>(reinterpret_cast<char *>(value0)+4)=(reinterpret_cast<char *>(value1)+-1);
   if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+4)&0x7FFFFF)){
    fn_80066E1C(value0);
   }
  }
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+216)=(void *)0;
 }
 value2=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+48);
 if(value2){
  if(value2){
   value3=*reinterpret_cast<void **>(reinterpret_cast<char *>(value2)+4);
   *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+4)=(reinterpret_cast<char *>(value3)+-1);
   if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value2)+4)&0x7FFFFF)){
    fn_80066E1C(value2);
   }
  }
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+48)=(void *)0;
 }
 value4=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+52);
 if(value4){
  if(value4){
   value5=*reinterpret_cast<void **>(reinterpret_cast<char *>(value4)+4);
   *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+4)=(reinterpret_cast<char *>(value5)+-1);
   if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value4)+4)&0x7FFFFF)){
    fn_80066E1C(value4);
   }
  }
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+52)=(void *)0;
 }
 fn_800667B4((void *)p0);
}
}
#pragma pop
