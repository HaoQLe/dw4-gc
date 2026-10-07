#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80003238(void *,int,int);
}
extern "C" {
void fn_800A63F0(int p0,int p1){
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+8)=(void *)0;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+12)=(void *)0;
 if((int)p1==0){
  fn_80003238((reinterpret_cast<char *>((void *)p0)+16),0,2176);
  return;
 } else {
  return;
 }
}
}
#pragma pop
