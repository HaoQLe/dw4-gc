#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80276F5C(void *,int,void *);
void *fn_80276F80(void *,int,int,int);
}
extern "C" {
void *fn_80276614(int p0,int p1){
 void *value0;
 void *value1;
 void *value2;
 void *value3;
 void *value4;
 value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+0);
 value1=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+40);
 switch((int)(int)value0){
 case 1:
  value2=fn_80276F5C(value1,18,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+4));
  return value2;
 case 0:
  value3=fn_80276F5C(value1,19,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+4));
  return value3;
 case 2:
  value4=fn_80276F80(value1,20,3,3);
  return value4;
 }
 return value1;
}
}
#pragma pop
