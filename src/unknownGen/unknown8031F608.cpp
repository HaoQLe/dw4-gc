#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8031F54C(void *,void *,void *,void *);
}
extern "C" {
void *fn_8031F608(int p0,int p1,int p2){
 void *value2;
 void *value0;
 void *value3;
 void *value1;
 void *value4;
 value2=fn_8031F54C((void *)p0,(void *)p1,(void *)p2,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8));
 if((int)(int)value2!=-1){
  value0=*reinterpret_cast<void **>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12))+16);
  return (void *)(int)*reinterpret_cast<signed char *>(reinterpret_cast<char *>(value0)+(int)value2);
 } else {
  value3=fn_8031F54C((void *)p0,(void *)p1,(void *)p2,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+16));
  if((int)(int)value3!=-1){
   value1=*reinterpret_cast<void **>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+20))+16);
   return (void *)(int)*reinterpret_cast<short *>(reinterpret_cast<char *>(value1)+((int)value3<<1));
  } else {
   value4=fn_8031F54C((void *)p0,(void *)p1,(void *)p2,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+24));
   if((int)(int)value4!=-1){
    return (void *)(int)*reinterpret_cast<int *>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+28))+16))+((int)value4<<2));
   } else {
    return (void *)0;
   }
  }
 }
}
}
#pragma pop
