#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80056378(void *);
}
extern "C" {
void fn_8016948C(int p0,int p1){
 if((unsigned int)p0!=0){
  fn_80056378((void *)p0);
  return;
 } else {
  return;
 }
}
}
#pragma pop
