#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80296810(void *);
extern char lbl_804193AC[];
}
extern "C" {
void *fn_8029E5CC(int p0){
 if((unsigned int)p0==0){
  fn_80296810(lbl_804193AC);
  return (void *)-3;
 } else {
  return (void *)(int)*reinterpret_cast<signed char *>(reinterpret_cast<char *>((void *)p0)+1);
 }
}
}
#pragma pop
