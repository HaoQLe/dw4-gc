#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_803F4998(void *,void *,int,void *,int);
}
extern "C" {
void *fn_803E54BC(int p0,int p1,int p2,int p3,int p4,int p5){
 void *value0;
 if((int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)(int)(p0+(p1*116)))+4876)==0){
  value0=fn_803F4998((void *)p0,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)(int)(p0+(p1*116)))+4948),11,(void *)p2,0);
  return value0;
 } else {
  return (void *)0;
 }
}
}
#pragma pop
