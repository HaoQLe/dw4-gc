#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80067DB0(void *,void *);
void *fn_8020B300(void *);
void *fn_8020B30C(void *,void *);
void fn_8020B320(void *,void *);
extern void *kFailure__3Gap;
extern void *kSuccess__3Gap;
}
extern "C" {
void fn_80202F34(int p0,int p1,int p2){
 void *value0;
 void *value1;
 void *value2;
 void *value3;
 value1=fn_8020B300((void *)p1);
 value0=(void *)0;
 while((unsigned int)(int)value0<(unsigned int)(int)value1){
  value2=fn_8020B30C((void *)p1,value0);
  value3=fn_80067DB0(*reinterpret_cast<void **>(reinterpret_cast<char *>(value2)+8),(void *)p2);
  if((unsigned char)(int)value3){
   fn_8020B320((void *)p1,value0);
   *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=kSuccess__3Gap;
   return;
  }
  value0=(reinterpret_cast<char *>(value0)+1);
 }
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=kFailure__3Gap;
}
}
#pragma pop
