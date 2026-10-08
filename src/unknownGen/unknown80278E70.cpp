#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80279020(void *,void *);
}
extern "C" {
void fn_80278E70(int p0,int p1){
 void *value0;
 value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+4);
 while((unsigned int)(int)value0<(unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+0)){
  fn_80279020((void *)p1,value0);
  value0=(reinterpret_cast<char *>(value0)+16);
 }
}
}
#pragma pop
