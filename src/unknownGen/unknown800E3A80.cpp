#include <unknownGen.h>
#include <meta/igGamecubeVertexArray1_1.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80056378(void *);
}
extern "C" {
void *igGamecubeVertexArray1_1_virtualF8(int p0){
 void *value0;
 void *value1;
 void *value2;
 void *value3;
 void *value4;
 void *value5;
 void *value6;
 void *value7;
 void *value8;
 value0=reinterpret_cast<Meta::igGamecubeVertexArray1_1 *>((void *)p0)->_vdata;
 value1=*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+64);
 if(value1){
  fn_80056378(value1);
  value2=reinterpret_cast<Meta::igGamecubeVertexArray1_1 *>((void *)p0)->_vdata;
  *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+64)=(void *)0;
 }
 value3=reinterpret_cast<Meta::igGamecubeVertexArray1_1 *>((void *)p0)->_vdata;
 value4=*reinterpret_cast<void **>(reinterpret_cast<char *>(value3)+60);
 if(value4){
  fn_80056378(value4);
  value5=reinterpret_cast<Meta::igGamecubeVertexArray1_1 *>((void *)p0)->_vdata;
  *reinterpret_cast<void * *>(reinterpret_cast<char *>(value5)+60)=(void *)0;
 }
 value6=reinterpret_cast<Meta::igGamecubeVertexArray1_1 *>((void *)p0)->_vdata;
 value7=*reinterpret_cast<void **>(reinterpret_cast<char *>(value6)+76);
 if(value7){
  fn_80056378(value7);
  value8=reinterpret_cast<Meta::igGamecubeVertexArray1_1 *>((void *)p0)->_vdata;
  *reinterpret_cast<void * *>(reinterpret_cast<char *>(value8)+76)=(void *)0;
  return value8;
 } else {
  return value7;
 }
}
}
#pragma pop
