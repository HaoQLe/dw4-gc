#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_801E5CBC(void *,void *,void *);
extern void *lbl_805657AC;
}
extern "C" {
void fn_801E591C(int p0){
 if(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+160)){
  fn_801E5CBC(lbl_805657AC,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+160),*reinterpret_cast<void **>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8))+20))+8));
  return;
 } else {
  return;
 }
}
}
#pragma pop
