#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800BD398();
void fn_8011C658(void *,int);
}
extern "C" {
void fn_8028AF00(int p0){
 void *value0;
 void *value1;
 void *value2;
 void *value3;
 value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+28);
 value1=*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+8);
 value2=*reinterpret_cast<void **>(reinterpret_cast<char *>(value1)+8);
 value3=(void *)0;
 while((int)(int)value3<(int)(int)value2){
  fn_8011C658((void *)(int)*reinterpret_cast<int *>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+28))+8))+16))+((int)value3<<2)),0);
  value3=(reinterpret_cast<char *>(value3)+1);
 }
 fn_800BD398();
}
}
#pragma pop
