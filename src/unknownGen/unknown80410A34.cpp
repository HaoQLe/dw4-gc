#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80068128(void *,void *);
void *fn_801EA93C(void *);
extern char lbl_8056520C[4];
}
static inline void *UnknownGenCast80410A34_18(void *q){
 void *value8;
 if(((int)(int)q!=0&&(value8=fn_80068128(q,*reinterpret_cast<void **>((lbl_8056520C+0))),(unsigned char)(int)value8))) return q;
 return 0;
}
extern "C" {
void fn_80410A34(int p0,int p1){
 void *value0;
 void *value1;
 void *value2;
 void *value7;
 void *value3;
 void *value4;
 void *value5;
 void *value6;
 if((int)p1!=0){
  if((int)p1!=0){
   value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+4);
   *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p1)+4)=(reinterpret_cast<char *>(value0)+1);
  }
  value1=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+76);
  if((value1&&(value2=*reinterpret_cast<void **>(reinterpret_cast<char *>(value1)+4),*reinterpret_cast<void * *>(reinterpret_cast<char *>(value1)+4)=(reinterpret_cast<char *>(value2)+-1),!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value1)+4)&0x7FFFFF)))){
   fn_80066E1C(value1);
  }
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+76)=(void *)p1;
  value7=fn_801EA93C((void *)p1);
  value3=UnknownGenCast80410A34_18(value7);
  if(value3){
   value4=*reinterpret_cast<void **>(reinterpret_cast<char *>(value3)+4);
   *reinterpret_cast<void * *>(reinterpret_cast<char *>(value3)+4)=(reinterpret_cast<char *>(value4)+1);
  }
  value5=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+80);
  if((value5&&(value6=*reinterpret_cast<void **>(reinterpret_cast<char *>(value5)+4),*reinterpret_cast<void * *>(reinterpret_cast<char *>(value5)+4)=(reinterpret_cast<char *>(value6)+-1),!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value5)+4)&0x7FFFFF)))){
   fn_80066E1C(value5);
  }
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+80)=value3;
  return;
 } else {
  return;
 }
}
}
#pragma pop
