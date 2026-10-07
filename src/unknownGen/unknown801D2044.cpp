#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_801CF230(void *,void *,void *);
void fn_801CF304(void *,void *,void *);
void *fn_801D1BCC(void *,void *,void *,void *,void *,void *,void *,void *);
}
extern "C" {
void *fn_801D2044(int p0,int p1,int p2,int p3,int p4,int p5,int p6){
 void *value0;
 void *local0;
 fn_801CF230((void *)p1,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12),&local0);
 if(local0){
  value0=fn_801D1BCC((void *)p0,(void *)p1,(void *)p2,(void *)p3,(void *)p4,(void *)p5,(void *)p6,local0);
  return value0;
 } else {
  return (void *)0;
 }
}
void *fn_801D20D0(int p0,int p1,int p2,int p3,int p4,int p5,int p6){
 void *value0;
 void *local0;
 fn_801CF304((void *)p1,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12),&local0);
 if(local0){
  value0=fn_801D1BCC((void *)p0,(void *)p1,(void *)p2,(void *)p3,(void *)p4,(void *)p5,(void *)p6,local0);
  return value0;
 } else {
  return (void *)0;
 }
}
}
#pragma pop
