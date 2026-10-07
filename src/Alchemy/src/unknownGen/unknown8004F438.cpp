#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80043260(void *,void *,int,int);
extern void *kSuccess__3Gap;
}
extern "C" {
void fn_8004F438(int p0,int p1){
 void *value0;
 void *value1;
 void *value2;
 value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+28);
 value1=*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+8);
 if((int)(int)value1>0){
  value2=fn_80043260((void *)p1,value0,0,0);
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p1)+220)=value2;
  *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p1)+212)=1;
 }
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=kSuccess__3Gap;
}
}
#pragma pop
