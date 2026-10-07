#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80296810(void *);
extern char lbl_80418EB8[];
}
extern "C" {
void *fn_8029A718(int p0){
 if((unsigned int)p0==0){
  fn_80296810(lbl_80418EB8);
  return (void *)0;
 } else {
  return (void *)(int)*reinterpret_cast<short *>(reinterpret_cast<char *>((void *)p0)+64);
 }
}
}
#pragma pop
