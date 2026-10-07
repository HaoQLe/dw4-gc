#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8029CCA4(void *);
}
extern "C" {
int fn_80293FE8(void *object){return *reinterpret_cast<int *>(reinterpret_cast<char *>(object)+144);}
int fn_80293FF0(void *object){return *reinterpret_cast<int *>(reinterpret_cast<char *>(object)+148);}
void fn_80293FF8(int p0){
 if((int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+4)==3){
  fn_8029CCA4(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8));
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+140)=(void *)0;
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+4)=(void *)0;
  return;
 } else {
  return;
 }
}
}
#pragma pop
