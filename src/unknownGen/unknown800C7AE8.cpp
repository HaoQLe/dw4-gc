#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800561FC(int,int);
}
extern "C" {
void *fn_800C7AE8(int p0){
 void *value1;
 void *value0;
 if(!*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+0)){
  value1=fn_800561FC(1,64);
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=value1;
  *reinterpret_cast<void * *>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+0))+60)=(void *)0;
  *reinterpret_cast<void * *>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+0))+52)=(void *)0;
  value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+0);
  *reinterpret_cast<void * *>(reinterpret_cast<char *>(value0)+32)=(void *)0;
  return value0;
 } else {
  return (void *)p0;
 }
}
}
#pragma pop
