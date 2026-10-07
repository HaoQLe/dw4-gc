#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800667E0();
}
extern "C" {
void fn_801030F4(){}
void fn_801030F8(int p0){
 void *value0;
 void *value1;
 void *value2;
 fn_800667E0();
 value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+60);
 if(value0){
  value1=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+64);
  if(value1){
   *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+16)=1;
   value2=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+60);
   *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+12)=value2;
  }
 }
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+68)=1;
}
}
#pragma pop
