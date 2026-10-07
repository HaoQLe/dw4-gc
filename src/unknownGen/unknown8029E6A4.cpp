#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80296810(void *);
extern char lbl_8041945C[];
}
extern "C" {
void *fn_8029E6A4(int p0){
 if((unsigned int)p0==0){
  fn_80296810(lbl_8041945C);
  return (void *)-3;
 } else {
  return *reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+20);
 }
}
}
#pragma pop
