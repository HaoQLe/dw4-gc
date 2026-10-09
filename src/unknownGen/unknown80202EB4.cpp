#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80067DB0(void *,void *);
void *fn_8020B300(void *);
void *fn_8020B30C(void *,void *);
}
extern "C" {
void *igSimpleUserInfo_virtual94(int p0,int p1){
 void *value0;
 void *value1;
 void *value2;
 void *value3;
 value1=fn_8020B300((void *)p0);
 value0=(void *)0;
 while((unsigned int)(int)value0<(unsigned int)(int)value1){
  value2=fn_8020B30C((void *)p0,value0);
  value3=fn_80067DB0(*reinterpret_cast<void **>(reinterpret_cast<char *>(value2)+8),(void *)p1);
  if((unsigned char)(int)value3){
   return value2;
  }
  value0=(reinterpret_cast<char *>(value0)+1);
 }
 return (void *)0;
}
}
#pragma pop
