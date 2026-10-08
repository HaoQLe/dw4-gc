#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_801731F0(void *);
void *fn_8017341C(void *,void *,void *,void *);
}
extern "C" {
void *fn_801733A0(int p0,int p1,int p2){
 void *value0;
 void *value1;
 void *value2;
 value1=fn_801731F0((void *)p0);
 value0=(void *)0;
 while((unsigned int)(int)value0<(unsigned int)(int)value1){
  value2=fn_8017341C((void *)p0,value0,(void *)p1,(void *)p2);
  if(!(unsigned char)(int)value2){
   return (void *)0;
  }
  value0=(reinterpret_cast<char *>(value0)+1);
 }
 return (void *)1;
}
}
#pragma pop
