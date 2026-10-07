#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800DDEB0(void *,void *,void *,void *,void *,void *,void *);
void fn_800DE530(void *,void *,void *,void *,void *,void *,void *,void *);
void *fn_800DEEDC(void *);
}
extern "C" {
void fn_800DC560(int p0,int p1){
 void *value0;
 void *local9;
 void *local8;
 void *local7;
 void *local6;
 void *local5;
 void *local4;
 void *local3;
 void *local2;
 void *local1;
 void *local0;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+44)=(void *)p1;
 value0=fn_800DEEDC(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+44));
 if(!(unsigned char)(int)value0){
  fn_800DE530(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+44),&local7,&local6,&local5,&local4,&local3,&local2,&local1);
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+64)=local7;
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+72)=local6;
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+28)=local5;
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+32)=local4;
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+36)=local3;
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+40)=local2;
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+84)=local1;
  fn_800DDEB0((void *)p0,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+44),*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8),*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12),&local9,&local0,&local8);
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+16)=local0;
  return;
 } else {
  return;
 }
}
}
#pragma pop
