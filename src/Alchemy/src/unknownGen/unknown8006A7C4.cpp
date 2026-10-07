#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80067098(void *);
void fn_8006A47C(void *,void *,void *);
}
extern "C" {
void *fn_8006A7C4(int p0,int p1,int p2,int p3,int p4,int p5){
 void *value0;
 void *value1;
 value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8);
 if((void *)(int)*reinterpret_cast<int *>(reinterpret_cast<char *>((void *)p1)+(int)value0)){
  value1=fn_80067098((void *)(int)*reinterpret_cast<int *>(reinterpret_cast<char *>((void *)p1)+(int)value0));
  return value1;
 } else {
  return (void *)(int)*reinterpret_cast<int *>(reinterpret_cast<char *>((void *)p1)+(int)value0);
 }
}
void fn_8006A7F4(int p0,int p1,int p2,int p3,int p4,int p5){
 fn_8006A47C((void *)p0,(void *)p1,*reinterpret_cast<void **>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+32))+0));
}
void fn_8006A81C(int p0,int p1,int p2,int p3,int p4,int p5){
 fn_8006A47C((void *)p0,(void *)p1,(void *)(int)*reinterpret_cast<int *>(reinterpret_cast<char *>((void *)p2)+(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8)));
}
}
#pragma pop
