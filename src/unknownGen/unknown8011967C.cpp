#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80068128(void *,void *);
void *fn_801EA984(void *);
extern void *lbl_80563710;
}
static inline void *UnknownGenCast8011967C_14(void *q){
 void *value3;
 if((q&&(value3=fn_80068128(q,lbl_80563710),(unsigned char)(int)value3))) return q;
 return 0;
}
extern "C" {
void *fn_8011967C(int p0){
 void *value1;
 void *value2;
 void *value0;
 value2=fn_801EA984((void *)p0);
 if((int)(int)value2<=0){
  return (void *)0;
 } else {
  value1=(reinterpret_cast<char *>(value2)+-1);
  while((int)(int)value1>=0){
   value0=UnknownGenCast8011967C_14((void *)(int)*reinterpret_cast<int *>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8))+16))+((int)value1<<2)));
   if(value0){
    return *reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+32);
   }
   value1=(reinterpret_cast<char *>(value1)+-1);
  }
  return (void *)0;
 }
}
}
#pragma pop
