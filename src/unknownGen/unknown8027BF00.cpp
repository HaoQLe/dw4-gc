#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8027BD18(void *,void *,void *);
}
extern "C" {
void *fn_8027BF00(int p0,int p1){
 void *value0;
 void *value2;
 void *value1;
 value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+28);
 if((unsigned int)p1>(unsigned int)(int)value0){
  value2=fn_8027BD18((void *)p0,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+24),(void *)p1);
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+24)=value2;
  value1=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+96);
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+96)=(void *)(int)((int)value1+(p1-(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+28)));
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+28)=(void *)p1;
 }
 return *reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+24);
}
}
#pragma pop
