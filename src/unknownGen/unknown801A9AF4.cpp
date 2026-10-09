#include <unknownGen.h>
#include <meta/igBoolMetaField.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80068128(void *,void *);
void *fn_8018810C(void *,void *);
void *fn_80188264(void *);
extern void *kFailure__3Gap;
extern void *kSuccess__3Gap;
extern void *lbl_80561E48;
}
static inline void *UnknownGenCast801A9AF4_11(void *q){
 void *value2;
 if(((int)(int)q!=0&&(value2=fn_80068128(q,lbl_80561E48),(unsigned char)(int)value2))) return q;
 return 0;
}
extern "C" {
void fn_801A9AF4(int p0,int p1,int p2,int p3){
 void *value1;
 void *value0;
 void *value3;
 value1=fn_8018810C((void *)p3,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+0));
 if((int)(int)value1==0){
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=kFailure__3Gap;
  return;
 } else {
  value0=UnknownGenCast801A9AF4_11(value1);
  if(!value0){
   *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=kFailure__3Gap;
   return;
  } else {
   value3=fn_80188264((void *)p3);
   *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p2)+0)=(unsigned char)(int)(void *)(int)*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value3)+(int)(void *)reinterpret_cast<Meta::igBoolMetaField *>(value0)->_offset);
   *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=kSuccess__3Gap;
   return;
  }
 }
}
}
#pragma pop
