#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80294FE8(void *);
void fn_802959C4(void *);
void fn_802959E4(void *);
void *memset(void *,int,int);
}
extern "C" {
void fn_80290CD4(int p0){
 void *value1;
 void *value0;
 void *value2;
 void *value3;
 if((int)p0!=0){
  value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+4);
  value1=value0;
  if(value0){
   *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+4)=(void *)0;
   value2=fn_80294FE8(value0);
   value1=value2;
  }
  fn_802959E4(value1);
  value3=memset((void *)p0,0,168);
  fn_802959C4(value3);
  return;
 } else {
  return;
 }
}
}
#pragma pop
