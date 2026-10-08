#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800667A0(void *);
void fn_8006834C(void *,void *);
}
extern "C" {
void fn_80063B1C(int p0){
 if(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+32)){
  fn_8006834C((void *)p0,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+32));
 }
 fn_800667A0((void *)p0);
}
}
#pragma pop
