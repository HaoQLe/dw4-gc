#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8011D0D4(void *,int);
}
extern "C" {
void *fn_801195CC(int p0){
 void *value0;
 void *value1;
 void *value2;
 void *value3;
 value0=(void *)(int)*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+32);
 if(value0){
  value1=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+20);
  if(value1){
   fn_8011D0D4(value1,0);
   value2=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+20);
   *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+12)=(void *)0;
  }
  fn_8011D0D4(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12),0);
  value3=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+16);
  *reinterpret_cast<void * *>(reinterpret_cast<char *>(value3)+32)=(void *)0;
  *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+32)=0;
  return value3;
 } else {
  return (void *)p0;
 }
}
}
#pragma pop
