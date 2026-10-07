#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8005383C(void *,void *);
void *fn_8005641C(void *);
}
extern "C" {
void *fn_80053BC0(int p0,int p1){
 void *value3;
 void *value0;
 void *value1;
 void *value4;
 void *value2;
 value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8);
 value1=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12);
 if(!value0){
  value3=(void *)0;
 } else {
  value4=fn_8005641C(value0);
  value3=(void *)(int)((unsigned int)(int)value4>>2);
 }
 if((int)(int)value1>=(int)(int)value3){
  fn_8005383C((void *)p0,value1);
 }
 *reinterpret_cast<int *>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8))+((int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12)<<2))=(int)p1;
 value2=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+12)=(reinterpret_cast<char *>(value2)+1);
 return value2;
}
}
#pragma pop
