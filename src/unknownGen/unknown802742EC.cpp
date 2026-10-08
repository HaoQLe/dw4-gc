#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802734A8(void *,void *,int);
void fn_80273934(void *,void *);
}
extern "C" {
void fn_802742EC(int p0,int p1,int p2){
 void *value0;
 value0=(void *)0;
 while((int)(int)value0<(int)p2){
  fn_802734A8((void *)p0,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)(int)(p1+((int)value0<<3)))+4),0);
  fn_80273934((void *)p0,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)(int)(p1+((int)value0<<3)))+0));
  value0=(reinterpret_cast<char *>(value0)+1);
 }
}
}
#pragma pop
