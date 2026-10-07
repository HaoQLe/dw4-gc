#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802733E8(void *,int,int);
void fn_80273EB8(void *,void *);
void fn_80274408(void *);
}
extern "C" {
void fn_802745D4(int p0){
 void *value0;
 fn_80274408((void *)p0);
 value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+4);
 if((int)(int)value0==0){
  fn_802733E8(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8),0,0);
 } else {
  if((int)(int)value0>1){
   fn_80273EB8(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8),value0);
  }
 }
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+4)=(void *)1;
}
}
#pragma pop
