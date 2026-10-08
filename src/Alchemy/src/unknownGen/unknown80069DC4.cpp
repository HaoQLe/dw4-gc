#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80069A1C(void *,void *,void *,void *);
}
extern "C" {
void fn_80069DC4(int p0,int p1){
 void *value0;
 value0=(void *)0;
 while((int)(int)value0<(int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+68)){
  fn_80069A1C((void *)p0,(void *)p1,value0,(void *)(int)*reinterpret_cast<int *>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+32))+((int)value0<<2)));
  value0=(reinterpret_cast<char *>(value0)+1);
 }
}
}
#pragma pop
