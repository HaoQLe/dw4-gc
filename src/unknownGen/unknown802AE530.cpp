#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80068128(void *,void *);
void fn_8029AF34(void *);
void fn_8029B55C(void *);
void fn_802AEA80(void *,void *);
extern char lbl_805343EC[];
}
static inline void *UnknownGenCast802AE530_8(void *q){
 void *value2;
 if((q&&(value2=fn_80068128(q,*reinterpret_cast<void **>((lbl_805343EC+0))),(unsigned char)(int)value2))) return q;
 return 0;
}
extern "C" {
void *igCriMovieCodec_virtual68(int p0,int p1){
 void *value0;
 void *value1;
 value0=UnknownGenCast802AE530_8(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+96));
 if(value0){
  value1=*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+16);
  if(value1){
   fn_8029AF34(value1);
   fn_8029B55C(*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+16));
   fn_802AEA80((void *)p0,*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+20));
   *reinterpret_cast<void * *>(reinterpret_cast<char *>(value0)+16)=(void *)0;
   *reinterpret_cast<void * *>(reinterpret_cast<char *>(value0)+20)=(void *)0;
  }
  reinterpret_cast<void (*)(void *,void *)>(*reinterpret_cast<void **>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+8))+0))+20))(*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+8),*reinterpret_cast<void **>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+8))+0));
  fn_802AEA80((void *)p0,*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+12));
  *reinterpret_cast<void * *>(reinterpret_cast<char *>(value0)+8)=(void *)0;
  *reinterpret_cast<void * *>(reinterpret_cast<char *>(value0)+12)=(void *)0;
  return (void *)1;
 } else {
  return (void *)0;
 }
}
}
#pragma pop
