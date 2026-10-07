#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8027AB4C(void *,void *);
}
extern "C" {
void fn_8027C1E0(int p0){
 double value0;
 void *value1;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+56)=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+52);
 if((int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+24)!=284){
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+8)=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+24);
  value0=*reinterpret_cast<double *>(reinterpret_cast<char *>((void *)p0)+32);
  *reinterpret_cast<double *>(reinterpret_cast<char *>((void *)p0)+16)=value0;
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+24)=(void *)284;
  return;
 } else {
  value1=fn_8027AB4C((void *)p0,(reinterpret_cast<char *>((void *)p0)+16));
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+8)=value1;
  return;
 }
}
void fn_8027C240(int p0){
 void *value0=fn_8027AB4C((void *)p0,(reinterpret_cast<char *>((void *)p0)+32));
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+24)=value0;
}
}
#pragma pop
