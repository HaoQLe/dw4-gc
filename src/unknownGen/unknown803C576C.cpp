#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_803C5188(void *);
}
extern "C" {
void fn_803C576C(int p0){
 if(!((unsigned int)p0&0x40)){
  fn_803C5188((void *)p0);
  return;
 } else {
  return;
 }
}
}
#pragma pop
