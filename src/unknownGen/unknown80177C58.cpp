#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80069184(void *,void *);
}
extern "C" {
void *fn_80177C58(int p0,int p1,int p2,int p3,int p4,int p5){
 void *value10;
 void *value11;
 void *value12;
 void *value13;
 void *value14;
 void *value0;
 void *value1;
 void *value2;
 void *value3;
 void *value4;
 void *value5;
 void *value6;
 void *value15;
 void *value7;
 void *value8;
 void *value9;
 value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p2)+0);
 if(!value0){
  value1=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p3)+0);
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=value1;
  value2=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+0);
  value10=value0;
  if(value2){
   value3=*reinterpret_cast<void **>(reinterpret_cast<char *>(value2)+4);
   *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+4)=(reinterpret_cast<char *>(value3)+1);
   value10=value3;
  }
  value14=value10;
 } else {
  value4=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p3)+0);
  if(!value4){
   *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=value0;
   value5=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+0);
   value11=value0;
   if(value5){
    value6=*reinterpret_cast<void **>(reinterpret_cast<char *>(value5)+4);
    *reinterpret_cast<void * *>(reinterpret_cast<char *>(value5)+4)=(reinterpret_cast<char *>(value6)+1);
    value11=value6;
   }
   value13=value11;
  } else {
   value15=fn_80069184(value0,value4);
   value7=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p2)+0);
   *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=value7;
   value8=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+0);
   value12=value15;
   if(value8){
    value9=*reinterpret_cast<void **>(reinterpret_cast<char *>(value8)+4);
    *reinterpret_cast<void * *>(reinterpret_cast<char *>(value8)+4)=(reinterpret_cast<char *>(value9)+1);
    value12=value9;
   }
   value13=value12;
  }
  value14=value13;
 }
 return value14;
}
}
#pragma pop
