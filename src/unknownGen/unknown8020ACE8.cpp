#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80041660(void *,void *,int);
void *fn_80068430(void *,void *);
void *fn_801220C8(void *);
}
extern "C" {
void fn_8020ACE8(int p0){
 void *value0;
 void *value8;
 void *value1;
 void *value2;
 void *value9;
 void *value3;
 void *value4;
 void *value5;
 void *value6;
 void *value7;
 value0=(void *)(int)*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+72);
 if(!((unsigned int)(int)value0&0x1)){
  *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+72)=(unsigned char)(int)(void *)(int)((int)value0|0x1);
  value8=fn_80068430((void *)p0,value0);
  value1=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8);
  if(value1){
   value2=*reinterpret_cast<void **>(reinterpret_cast<char *>(value1)+4);
   *reinterpret_cast<void * *>(reinterpret_cast<char *>(value1)+4)=(reinterpret_cast<char *>(value2)+-1);
   if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value1)+4)&0x7FFFFF)){
    fn_80066E1C(value1);
   }
  }
  value9=fn_801220C8(value8);
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+8)=value9;
  value3=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+56);
  value4=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8);
  value5=*reinterpret_cast<void **>(reinterpret_cast<char *>(value3)+8);
  if((int)(int)value5>=0){
   if((int)(int)value5<=(int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value4)+12)){
    *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+8)=value5;
   } else {
    fn_80041660(value4,value5,12);
   }
  }
  *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+73)=1;
  value6=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+60);
  if(value6){
   value7=*reinterpret_cast<void **>(reinterpret_cast<char *>(value6)+4);
   *reinterpret_cast<void * *>(reinterpret_cast<char *>(value6)+4)=(reinterpret_cast<char *>(value7)+-1);
   if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value6)+4)&0x7FFFFF)){
    fn_80066E1C(value6);
   }
  }
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+60)=(void *)0;
  return;
 } else {
  return;
 }
}
}
#pragma pop
