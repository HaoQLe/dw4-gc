#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800682A4(void *,void *,void *);
void fn_80068390(void *,void *);
}
extern "C" {
void *fn_800EAD30(int p0,int p1,int p2){
 void *value0;
 void *value1;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+16)=(void *)p2;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+12)=(void *)p1;
 value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12);
 if((int)((int)value0<<2)!=0){
  value1=fn_800682A4((void *)p0,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8),(void *)(int)((int)value0<<2));
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+8)=value1;
 } else {
  if(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8)){
   fn_80068390((void *)p0,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8));
  }
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+8)=(void *)0;
 }
 return (void *)(int)((int)value0<<2);
}
}
#pragma pop
