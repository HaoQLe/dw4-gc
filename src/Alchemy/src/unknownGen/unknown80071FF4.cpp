#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80068390(void *,void *);
}
extern "C" {
void fn_80071FF4(int p0){
 if(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8)){
  fn_80068390((void *)p0,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8));
 }
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+8)=(void *)0;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+12)=(void *)0;
}
}
#pragma pop
