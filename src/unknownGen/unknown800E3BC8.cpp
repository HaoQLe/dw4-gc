#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80056378(void *);
}
extern "C" {
void *igGamecubeVertexArray1_1_virtualFC(int p0){
 void *value0;
 void *value1;
 void *value2;
 void *value3;
 void *value4;
 void *value5;
 value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8);
 value1=*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+68);
 if(value1){
  fn_80056378(value1);
  value2=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8);
  *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+68)=(void *)0;
 }
 value3=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8);
 value4=*reinterpret_cast<void **>(reinterpret_cast<char *>(value3)+72);
 if(value4){
  fn_80056378(value4);
  value5=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8);
  *reinterpret_cast<void * *>(reinterpret_cast<char *>(value5)+72)=(void *)0;
  return value5;
 } else {
  return value4;
 }
}
}
#pragma pop
