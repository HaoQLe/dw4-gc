#include <unknownGen.h>
#include <meta/igLongMetaField.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80068128(void *,void *);
extern void *lbl_8056198C;
}
static inline void *UnknownGenCast801A9010_14(void *q){
 void *value4;
 if(((unsigned int)(int)q!=0&&(value4=fn_80068128(q,lbl_8056198C),(unsigned char)(int)value4))) return q;
 return 0;
}
extern "C" {
void *fn_801A9010(int p0,int p1,int p2,int p3,int p4){
 void *value2;
 void *value3;
 void *value0;
 void *value1;
 if(((int)p0!=0&&(value3=fn_80068128((void *)p0,lbl_8056198C),(unsigned char)(int)value3))){
  value2=(void *)p0;
 } else {
  value2=(void *)0;
 }
 value0=UnknownGenCast801A9010_14((void *)p2);
 if((value2&&value0)){
  value1=(void *)reinterpret_cast<Meta::igLongMetaField *>(value0)->_offset;
  *reinterpret_cast<long long *>(reinterpret_cast<char *>((void *)(int)(p3+(int)value1))+0)=*reinterpret_cast<long long *>(reinterpret_cast<char *>((void *)(int)(p1+(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value2)+8)))+0);
  return (void *)1;
 } else {
  return (void *)0;
 }
}
}
#pragma pop
