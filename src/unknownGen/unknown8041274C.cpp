#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8011ACBC(void *,void *);
void fn_8011AD54(void *,void *);
}
extern "C" {
void *igPickMode_virtual80(int p0){
 void *value0;
 void *value1;
 value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+80);
 if(value0){
  fn_8011AD54(value0,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+88));
  value1=fn_8011ACBC(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+80),(void *)(int)*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+92));
  return value1;
 } else {
  return value0;
 }
}
}
#pragma pop
