#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_803F2C5C(void *,int);
}
extern "C" {
void fn_803F0BA4(int p0,int p1,int p2){
 void *value0;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+2384)=(void *)(int)((int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+2384)+p1);
 value0=fn_803F2C5C((void *)p0,36);
 if(value0){
  reinterpret_cast<void (*)(void *,void *,void *)>(value0)((void *)p0,(void *)p2,(reinterpret_cast<char *>((void *)p0)+2384));
  return;
 } else {
  return;
 }
}
}
#pragma pop
