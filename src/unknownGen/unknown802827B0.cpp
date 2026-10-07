#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8027BF6C(void *,void *);
}
extern "C" {
void *fn_802827B0(int p0){
 void *value0;
 void *value1;
 void *value2;
 if((int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+0)!=3){
  value1=(void *)1;
 } else {
  value2=fn_8027BF6C((reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8))+20),(reinterpret_cast<char *>((void *)p0)+8));
  if((int)(int)value2==0){
   value0=(void *)2;
  } else {
   *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=(void *)2;
   value0=(void *)0;
  }
  value1=value0;
 }
 return value1;
}
}
#pragma pop
