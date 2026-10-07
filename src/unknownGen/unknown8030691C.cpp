#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80041660(void *,void *,int);
}
extern "C" {
void *fn_8030691C(int p0,int p1){
 void *value0;
 void *value1;
 void *value2;
 value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+16);
 value1=*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+16);
 if((int)p1>=0){
  if((int)p1<=(int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value1)+12)){
   *reinterpret_cast<void * *>(reinterpret_cast<char *>(value1)+8)=(void *)p1;
   return value1;
  } else {
   value2=fn_80041660(value1,(void *)p1,1);
   return value2;
  }
 }
 return value1;
}
}
#pragma pop
