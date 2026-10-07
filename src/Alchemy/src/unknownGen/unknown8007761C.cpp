#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80260E00(void *);
extern void *kFailure__3Gap;
extern void *kSuccess__3Gap;
}
extern "C" {
void fn_8007761C(int p0,int p1){
 if(!*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p1)+20)){
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=kFailure__3Gap;
  return;
 } else {
  fn_80260E00((reinterpret_cast<char *>((void *)p1)+24));
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=kSuccess__3Gap;
  return;
 }
}
}
#pragma pop
