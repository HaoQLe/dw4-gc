#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800667B4();
void fn_801195CC(void *);
}
extern "C" {
void fn_8011963C(int p0){
 fn_800667B4();
 if(*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+32)){
  fn_801195CC((void *)p0);
  return;
 } else {
  return;
 }
}
}
#pragma pop
