#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8027BD18(void *,void *,void *);
}
extern "C" {
void fn_8027961C(int p0){
 void *value0;
 void *value1;
 value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+28);
 if((unsigned int)(int)value0>512){
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+96)=(void *)(int)((int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+96)+(((unsigned int)(int)value0>>1)-(int)value0));
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+28)=(void *)(int)((unsigned int)(int)value0>>1);
  value1=fn_8027BD18((void *)p0,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+24),(void *)(int)((unsigned int)(int)value0>>1));
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+24)=value1;
  return;
 } else {
  return;
 }
}
}
#pragma pop
