#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8005383C(void *,void *);
void *fn_8005641C(void *);
}
extern "C" {
void *fn_80053B04(int p0,int p1){
 void *value1;
 void *value2;
 void *value3;
 void *value0;
 void *value4;
 void *value5;
 value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8);
 if(!value0){
  value1=(void *)0;
  value2=value0;
 } else {
  value4=fn_8005641C(value0);
  value1=(void *)(int)((unsigned int)(int)value4>>2);
  value2=value4;
 }
 value3=value2;
 if((int)p1>=(int)(int)value1){
  value5=fn_8005383C((void *)p0,(void *)p1);
  value3=value5;
 }
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+12)=(void *)p1;
 return value3;
}
}
#pragma pop
