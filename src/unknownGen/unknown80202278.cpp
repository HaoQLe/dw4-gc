#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800667E0();
void *fn_80069090(void *);
void fn_800691E8(void *,void *);
}
extern "C" {
void *igShaderData_virtual44(int p0){
 void *value0;
 void *value1;
 fn_800667E0();
 value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+20);
 if((int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8))+8)!=(int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+8)){
  fn_800691E8(value0,*reinterpret_cast<void **>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8))+8));
  value1=fn_80069090(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+20));
  return value1;
 } else {
  return value0;
 }
}
}
#pragma pop
