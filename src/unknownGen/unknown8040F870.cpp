#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8011D0D4(void *,int);
}
extern "C" {
void fn_8040F870(int p0,int p1){
 void *value0;
 void *value1;
 void *value2;
 void *value3;
 value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8);
 if(value0){
  fn_8011D0D4(value0,0);
 }
 if((unsigned int)p1!=0){
  value1=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+4);
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p1)+4)=(reinterpret_cast<char *>(value1)+1);
 }
 value2=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8);
 if(value2){
  value3=*reinterpret_cast<void **>(reinterpret_cast<char *>(value2)+4);
  *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+4)=(reinterpret_cast<char *>(value3)+-1);
  if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value2)+4)&0x7FFFFF)){
   fn_80066E1C(value2);
  }
 }
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+8)=(void *)p1;
 if((unsigned int)p1!=0){
  fn_8011D0D4((void *)p1,(int)(int)(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12)));
  return;
 } else {
  return;
 }
}
}
#pragma pop
