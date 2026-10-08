#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8003E85C(void *,int);
}
extern "C" {
void fn_80066188(int p0){
 void *value2;
 void *value0;
 void *value1;
 value2=reinterpret_cast<void * (*)(void *)>((void *)p0)((void *)p0);
 if((int)(int)value2!=0){
  value0=*reinterpret_cast<void **>(reinterpret_cast<char *>(value2)+4);
  value1=(void *)0;
  while((int)(int)value1<(int)(int)value0){
   reinterpret_cast<void (*)(void *)>((void *)(int)*reinterpret_cast<int *>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>(value2)+0))+((int)value1<<2)))(*reinterpret_cast<void **>(reinterpret_cast<char *>(value2)+0));
   value1=(reinterpret_cast<char *>(value1)+1);
  }
  fn_8003E85C(value2,1);
  return;
 } else {
  return;
 }
}
}
#pragma pop
