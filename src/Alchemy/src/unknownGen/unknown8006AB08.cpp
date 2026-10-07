#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80067F74(void *,void *,void *);
}
extern "C" {
void *fn_8006AB08(int p0,int p1,int p2,int p3,int p4,int p5){
 void *value0;
 void *value1;
 value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8);
 if((void *)(int)*reinterpret_cast<int *>(reinterpret_cast<char *>((void *)p1)+(int)value0)){
  value1=fn_80067F74((void *)(int)*reinterpret_cast<int *>(reinterpret_cast<char *>((void *)p1)+(int)value0),(void *)p2,(void *)p3);
  return value1;
 } else {
  return (void *)(int)*reinterpret_cast<int *>(reinterpret_cast<char *>((void *)p1)+(int)value0);
 }
}
}
#pragma pop
