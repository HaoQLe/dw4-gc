#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_801D397C(void *);
void fn_801D4CFC(void *);
}
extern "C" {
void *igAttrStackManager_virtual5C(int p0){
 void *value2;
 void *value0;
 void *value1;
 if((int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12)>0){
  value2=(void *)0;
  while((int)(int)value2<(int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12)){
   fn_801D397C((void *)(int)*reinterpret_cast<int *>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+16))+16))+((int)value2<<2)));
   value2=(reinterpret_cast<char *>(value2)+1);
  }
  *reinterpret_cast<void * *>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+24))+8)=(void *)0;
  value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+28);
  *reinterpret_cast<void * *>(reinterpret_cast<char *>(value0)+8)=(void *)0;
  fn_801D4CFC((void *)p0);
  *reinterpret_cast<void * *>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+44))+8)=(void *)0;
  value1=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+64);
  *reinterpret_cast<void * *>(reinterpret_cast<char *>(value1)+20)=(void *)0;
  return value1;
 } else {
  return (void *)p0;
 }
}
}
#pragma pop
