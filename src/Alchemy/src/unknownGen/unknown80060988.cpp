#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80069128(void *,void *);
}
extern "C" {
void fn_80060988(int p0,int p1){
 void *value0;
 if((int)p1!=0){
  fn_80069128(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+20),(void *)p1);
  value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+4);
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p1)+4)=(reinterpret_cast<char *>(value0)+-1);
  if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+4)&0x7FFFFF)){
   fn_80066E1C((void *)p1);
   return;
  } else {
   return;
  }
 }
}
}
#pragma pop
