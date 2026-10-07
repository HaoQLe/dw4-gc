#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8027F0D0(void *,void *);
}
extern "C" {
void *fn_8027F11C(int p0,int p1,int p2,int p3,int p4,int p5){
 void *value1;
 void *value0;
 value1=fn_8027F0D0((void *)p0,(void *)p1);
 value0=*reinterpret_cast<void **>(reinterpret_cast<char *>(value1)+16);
 if((int)(int)value0==0){
  *reinterpret_cast<void * *>(reinterpret_cast<char *>(value1)+16)=(void *)2;
 }
 return value1;
}
}
#pragma pop
