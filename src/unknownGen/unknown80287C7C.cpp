#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *atoi(void *);
void *fn_80287D1C(void *,void *,void *,void *);
}
extern "C" {
void *fn_80287C7C(int p0,int p1,int p2,int p3){
 void *value0;
 void *value1;
 void *local0;
 value0=fn_80287D1C((void *)p0,(void *)p1,(void *)p2,&local0);
 if((unsigned char)(int)value0){
  value1=atoi(local0);
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p3)+0)=value1;
  return (void *)1;
 } else {
  return (void *)0;
 }
}
}
#pragma pop
