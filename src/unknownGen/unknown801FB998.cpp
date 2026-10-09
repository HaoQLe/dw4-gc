#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_801F78C8(void *);
}
extern "C" {
void *igPlanarShadowProcessor_virtual60(int p0,int p1){
 void *value3;
 void *value0;
 void *value1;
 void *value2;
 if((!*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12)&&!*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8))){
  return (void *)0;
 } else {
  value3=fn_801F78C8((void *)p1);
  if((int)(int)value3!=0){
   value0=*reinterpret_cast<void **>(reinterpret_cast<char *>(value3)+4);
   *reinterpret_cast<void * *>(reinterpret_cast<char *>(value3)+4)=(reinterpret_cast<char *>(value0)+1);
  }
  value1=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+60);
  if((value1&&(value2=*reinterpret_cast<void **>(reinterpret_cast<char *>(value1)+4),*reinterpret_cast<void * *>(reinterpret_cast<char *>(value1)+4)=(reinterpret_cast<char *>(value2)+-1),!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value1)+4)&0x7FFFFF)))){
   fn_80066E1C(value1);
  }
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+60)=value3;
  return (void *)1;
 }
}
}
#pragma pop
