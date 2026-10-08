#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80069128(void *,void *);
}
extern "C" {
void *fn_8021A178(int p0,int p1){
 void *value1;
 void *value0;
 value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+8);
 value1=(void *)0;
 while((int)(int)value1<(int)(int)value0){
  fn_80069128(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8),(void *)(int)*reinterpret_cast<int *>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+16))+((int)value1<<2)));
  value1=(reinterpret_cast<char *>(value1)+1);
 }
 return (void *)1;
}
}
#pragma pop
