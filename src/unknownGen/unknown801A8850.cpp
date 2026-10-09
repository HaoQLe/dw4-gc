#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80068128(void *,void *);
void fn_80128CF4(void *,void *);
extern void *lbl_8056398C;
}
static inline void *UnknownGenCast801A8850_14(void *q){
 void *value3;
 if(((unsigned int)(int)q!=0&&(value3=fn_80068128(q,lbl_8056398C),(unsigned char)(int)value3))) return q;
 return 0;
}
extern "C" {
void *fn_801A8850(int p0,int p1,int p2,int p3,int p4){
 void *value1;
 void *value2;
 void *value0;
 if(((int)p0!=0&&(value2=fn_80068128((void *)p0,lbl_8056398C),(unsigned char)(int)value2))){
  value1=(void *)p0;
 } else {
  value1=(void *)0;
 }
 value0=UnknownGenCast801A8850_14((void *)p2);
 if((value1&&value0)){
  fn_80128CF4((void *)(int)(p3+(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+8)),(void *)(int)(p1+(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value1)+8)));
  return (void *)1;
 } else {
  return (void *)0;
 }
}
}
#pragma pop
