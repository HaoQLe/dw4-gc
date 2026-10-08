#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80125584(void *,void *);
}
extern "C" {
void fn_8028E8F0(int p0,int p1){
 if((int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+96)==0){
  fn_80125584(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8),(reinterpret_cast<char *>((void *)p1)+32));
  return;
 } else {
  return;
 }
}
}
#pragma pop
