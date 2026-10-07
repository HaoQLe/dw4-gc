#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800ED1E8(void *,void *);
}
extern "C" {
void fn_800C27D4(){}
void fn_800C27D8(int p0,int p1){
 if((int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12)>=0){
  fn_800ED1E8((void *)p1,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12));
  return;
 } else {
  return;
 }
}
void fn_800C280C(){}
}
#pragma pop
