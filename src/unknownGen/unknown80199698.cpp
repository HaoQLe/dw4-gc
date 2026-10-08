#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_801995DC(void *,void *,float);
}
extern "C" {
void fn_80199698(int p0,int p1,float f0){
 void *value0;
 void *value1;
 void *value2;
 value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+32);
 value1=*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+8);
 value2=(void *)0;
 while((unsigned int)(int)value2<(unsigned int)(int)value1){
  fn_801995DC((void *)p0,(void *)(int)*reinterpret_cast<int *>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+32))+16))+((int)value2<<2)),f0);
  value2=(reinterpret_cast<char *>(value2)+1);
 }
}
}
#pragma pop
