#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006AE4C(void *,void *);
}
extern "C" {
void *fn_8006AE00(int p0,int p1){
 void *value0;
 value0=fn_8006AE4C((void *)p0,(void *)p1);
 if((int)(int)value0==-1){
  return (void *)0;
 } else {
  return (void *)(int)*reinterpret_cast<int *>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12))+16))+((int)value0<<2));
 }
}
}
#pragma pop
