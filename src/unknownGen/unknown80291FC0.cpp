#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80291FF4(void *);
void fn_8029232C(void *);
}
extern "C" {
void fn_80291FC0(int p0){
 if((int)*reinterpret_cast<short *>(reinterpret_cast<char *>((void *)p0)+156)==1){
  fn_80291FF4((void *)p0);
  return;
 } else {
  fn_8029232C((void *)p0);
  return;
 }
}
}
#pragma pop
