#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80068390(void *,void *);
}
extern "C" {
void igClut_virtual30(int p0){
 if(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+20)){
  fn_80068390((void *)p0,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+20));
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+20)=(void *)0;
  return;
 } else {
  return;
 }
}
}
#pragma pop
