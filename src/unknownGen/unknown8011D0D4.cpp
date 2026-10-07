#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8011BDC0(void *,void *);
void fn_8011BECC(void *,void *);
}
extern "C" {
void *fn_8011D0D4(void *p0,int p1){
 void *value0;
 void *value1;
 void *value2;
 value0=*reinterpret_cast<void **>(reinterpret_cast<char *>(p0)+8);
 if(value0){
  fn_8011BECC(value0,p0);
 }
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(p0)+8)=(void *)p1;
 value1=*reinterpret_cast<void **>(reinterpret_cast<char *>(p0)+8);
 if(value1){
  value2=fn_8011BDC0(value1,p0);
  return value2;
 } else {
  return value1;
 }
}
}
#pragma pop
