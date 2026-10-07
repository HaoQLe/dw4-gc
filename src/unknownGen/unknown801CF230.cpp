#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_801CF128(void *,void *,void *);
void fn_801CF2A4(void *,void *,void *);
}
extern "C" {
void *fn_801CF230(int p0,int p1,int p2){
 void *value0;
 void *value1;
 void *local0;
 local0=(void *)0;
 fn_801CF2A4((void *)p0,(void *)p1,&local0);
 if(local0){
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p2)+0)=local0;
  value0=*reinterpret_cast<void **>(reinterpret_cast<char *>(local0)+16);
  return value0;
 } else {
  value1=fn_801CF128((void *)p0,(void *)p1,(void *)p2);
  return value1;
 }
}
}
#pragma pop
