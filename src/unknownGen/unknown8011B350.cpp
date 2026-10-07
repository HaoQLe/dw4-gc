#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_801197C8(void *,void *);
void *fn_801197EC(void *);
}
extern "C" {
void fn_8011B350(int p0,int p1,int p2,int p3,int p4,int p5){
 void *value0;
 void *value1;
 void *value2;
 value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12);
 value1=*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+168);
 if(value1){
  value2=fn_801197EC(value1);
  fn_801197C8(value1,(void *)(int)((unsigned int)__cntlzw((unsigned char)(int)value2)>>5));
  fn_801197C8(value1,value2);
  return;
 } else {
  return;
 }
}
}
#pragma pop
