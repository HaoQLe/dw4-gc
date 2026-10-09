#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80067DB0(void *,void *);
}
extern "C" {
void *fn_8006ABFC(int p0,int p1,int p2,int p3,int p4,int p5){
 void *value0;
 if((unsigned int)*reinterpret_cast<int *>(reinterpret_cast<char *>((void *)p1)+(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8))==(unsigned int)*reinterpret_cast<int *>(reinterpret_cast<char *>((void *)p2)+(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8))){
  return (void *)1;
 } else {
  if((!(void *)(int)*reinterpret_cast<int *>(reinterpret_cast<char *>((void *)p1)+(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8))||!(void *)(int)*reinterpret_cast<int *>(reinterpret_cast<char *>((void *)p2)+(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8)))){
   return (void *)0;
  } else {
   value0=fn_80067DB0((void *)(int)*reinterpret_cast<int *>(reinterpret_cast<char *>((void *)p1)+(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8)),(void *)(int)*reinterpret_cast<int *>(reinterpret_cast<char *>((void *)p2)+(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8)));
   return value0;
  }
 }
}
}
#pragma pop
