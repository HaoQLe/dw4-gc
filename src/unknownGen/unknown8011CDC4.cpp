#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80116EE4(void *,void *);
void fn_80116FA0(void *,void *);
void *fn_8011CBF8(void *);
void fn_8011CF30(void *);
}
extern "C" {
void fn_8011CDC4(int p0){
 void *value1;
 void *value2;
 void *value0;
 void *value3;
 value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8);
 value3=fn_8011CBF8((void *)p0);
 value1=(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+36))+8))+-1);
 while((int)(int)value1>=0){
  fn_80116FA0(value0,value1);
  value1=(reinterpret_cast<char *>(value1)+-1);
 }
 if(*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+40)){
  fn_80116EE4(value0,*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+40));
 }
 value2=(void *)0;
 while((int)(int)value2<(int)(int)value3){
  fn_80116EE4(value0,(void *)(int)*reinterpret_cast<int *>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+48))+16))+(((int)value2+(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+52))<<2)));
  value2=(reinterpret_cast<char *>(value2)+1);
 }
 if(*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+44)){
  fn_80116EE4(value0,*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+44));
 }
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+20)=*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+52);
 fn_8011CF30(value0);
}
}
#pragma pop
