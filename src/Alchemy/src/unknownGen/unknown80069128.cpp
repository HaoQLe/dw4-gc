#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80041970(void *,void *);
}
extern "C" {
void *fn_80069128(int p0,int p1,int p2){
 void *value3;
 void *value0;
 void *value1;
 void *value2;
 void *value4;
 value3=(void *)p2;
 if((unsigned int)p1!=0){
  value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+4);
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p1)+4)=(reinterpret_cast<char *>(value0)+1);
  value3=value0;
 }
 value1=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8);
 if((int)(int)value1<(int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12)){
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+8)=(reinterpret_cast<char *>(value1)+1);
  value2=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+16);
  *reinterpret_cast<int *>(reinterpret_cast<char *>(value2)+((int)value1<<2))=(int)p1;
  return value2;
 } else {
  value4=fn_80041970((void *)p0,(void *)p1);
  return value4;
 }
}
}
#pragma pop
