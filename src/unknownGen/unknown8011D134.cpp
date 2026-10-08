#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800667B4(void *);
void fn_8011BECC(void *,void *);
}
extern "C" {
void fn_8011D134(int p0){
 void *value0;
 value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8);
 if(value0){
  fn_8011BECC(value0,(void *)p0);
 }
 fn_800667B4((void *)p0);
}
}
#pragma pop
