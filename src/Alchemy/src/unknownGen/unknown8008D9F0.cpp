#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80068430(void *,void *);
}
extern "C" {
void fn_8008D9F0(int p0,int p1){
 void *value3;
 void *value0;
 void *value1;
 void *value2;
 if((int)p1!=0){
  value3=fn_80068430((void *)p1,(void *)p1);
  if((unsigned int)(int)value3==(unsigned int)p0){
   return;
  }
 }
 if((unsigned int)p1!=0){
  value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+4);
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p1)+4)=(reinterpret_cast<char *>(value0)+1);
 }
 value1=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+128);
 if(value1){
  value2=*reinterpret_cast<void **>(reinterpret_cast<char *>(value1)+4);
  *reinterpret_cast<void * *>(reinterpret_cast<char *>(value1)+4)=(reinterpret_cast<char *>(value2)+-1);
  if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value1)+4)&0x7FFFFF)){
   fn_80066E1C(value1);
  }
 }
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+128)=(void *)p1;
}
}
#pragma pop
