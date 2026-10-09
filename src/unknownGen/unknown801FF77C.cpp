#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_801EAB04(void *);
void fn_801EAC44(void *,void *);
void fn_801FF70C(void *);
}
extern "C" {
void igSelfShadowShader_virtual44(int p0){
 void *value4;
 void *value0;
 void *value1;
 void *value2;
 void *value3;
 fn_801EAB04((void *)p0);
 fn_801FF70C((void *)p0);
 value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+88);
 if(value0){
  value1=*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+8);
  value4=(void *)0;
  while((int)(int)value4<(int)(int)value1){
   fn_801EAC44((void *)p0,(void *)(int)*reinterpret_cast<int *>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+88))+16))+((int)value4<<2)));
   value4=(reinterpret_cast<char *>(value4)+1);
  }
  value2=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+88);
  if(value2){
   value3=*reinterpret_cast<void **>(reinterpret_cast<char *>(value2)+4);
   *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+4)=(reinterpret_cast<char *>(value3)+-1);
   if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value2)+4)&0x7FFFFF)){
    fn_80066E1C(value2);
   }
  }
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+88)=(void *)0;
  return;
 } else {
  return;
 }
}
}
#pragma pop
