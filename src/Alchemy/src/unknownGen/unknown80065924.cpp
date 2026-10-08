#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800607F4(void *);
void fn_80065820(void *,void *);
extern void *lbl_805621F4;
}
extern "C" {
void fn_80065924(int p0,int p1,int p2){
 void *value1;
 void *value2;
 void *value3;
 void *value0;
 value1=(void *)0;
 while((int)(int)value1<(int)p2){
  value2=fn_800607F4(lbl_805621F4);
  value3=reinterpret_cast<void * (*)(void *)>((void *)(int)*reinterpret_cast<int *>(reinterpret_cast<char *>((void *)p1)+((int)value1<<2)))(value2);
  fn_80065820((void *)p0,value3);
  value0=*reinterpret_cast<void **>(reinterpret_cast<char *>(value3)+4);
  *reinterpret_cast<void * *>(reinterpret_cast<char *>(value3)+4)=(reinterpret_cast<char *>(value0)+-1);
  if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value3)+4)&0x7FFFFF)){
   fn_80066E1C(value3);
  }
  value1=(reinterpret_cast<char *>(value1)+1);
 }
}
}
#pragma pop
