#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8005641C(void *);
void *fn_800682A4(void *,void *,int);
void *fn_80068430(void *);
void memset(void *,int,void *);
}
extern "C" {
void fn_800E2C2C(int p0){
 void *value0;
 void *value4;
 void *value5;
 void *value6;
 void *value1;
 void *value2;
 void *value3;
 value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8);
 if(value0){
  value4=fn_8005641C(value0);
  if((int)(80-(int)value4)>0){
   value5=fn_800682A4((void *)p0,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8),80);
   *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+8)=value5;
   memset((void *)(int)((int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8)+(int)value4),0,(void *)(int)(80-(int)value4));
  }
 }
 if(!*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+24)){
  value6=fn_80068430((void *)p0);
  if((int)(int)value6!=0){
   value1=*reinterpret_cast<void **>(reinterpret_cast<char *>(value6)+4);
   *reinterpret_cast<void * *>(reinterpret_cast<char *>(value6)+4)=(reinterpret_cast<char *>(value1)+1);
  }
  value2=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+24);
  if(value2){
   value3=*reinterpret_cast<void **>(reinterpret_cast<char *>(value2)+4);
   *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+4)=(reinterpret_cast<char *>(value3)+-1);
   if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value2)+4)&0x7FFFFF)){
    fn_80066E1C(value2);
   }
  }
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+24)=value6;
  return;
 } else {
  return;
 }
}
}
#pragma pop
