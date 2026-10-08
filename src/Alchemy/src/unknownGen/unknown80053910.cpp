#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *strcmp(void *,void *);
}
extern "C" {
void *fn_80053910(int p0,int p1,int p2){
 void *value0;
 void *value1;
 value0=(void *)0;
 while((int)(int)value0<(int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12)){
  value1=strcmp((void *)(int)*reinterpret_cast<int *>(reinterpret_cast<char *>((void *)(int)*reinterpret_cast<int *>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8))+((int)value0<<2)))+(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+8)),(void *)p2);
  if((int)(int)value1==0){
   return (void *)(int)*reinterpret_cast<int *>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8))+((int)value0<<2));
  }
  value0=(reinterpret_cast<char *>(value0)+1);
 }
 return (void *)0;
}
}
#pragma pop
