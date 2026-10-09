#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8040E5E8(void *);
}
extern "C" {
void beCameraCtrl_virtual88(int p0){
 void *value0;
 void *value1;
 void *value2;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+76)=(void *)0;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+80)=(void *)0;
 value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+32);
 if(value0){
  fn_8040E5E8(value0);
 }
 value1=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+40);
 if(value1){
  value2=*reinterpret_cast<void **>(reinterpret_cast<char *>(value1)+4);
  *reinterpret_cast<void * *>(reinterpret_cast<char *>(value1)+4)=(reinterpret_cast<char *>(value2)+-1);
  if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value1)+4)&0x7FFFFF)){
   fn_80066E1C(value1);
  }
 }
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+40)=(void *)0;
}
}
#pragma pop
