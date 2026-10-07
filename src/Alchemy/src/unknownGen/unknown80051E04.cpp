#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8004D8D8(void *);
}
extern "C" {
void fn_80051E04(int p0){
 if((int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+196)>0){
  fn_8004D8D8((void *)p0);
  return;
 } else {
  return;
 }
}
}
#pragma pop
