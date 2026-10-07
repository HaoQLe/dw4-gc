#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80276F5C(void *,int,void *);
void fn_8027C1E0(void *);
void fn_8027CE80(void *);
void *fn_8027DA18(void *);
}
extern "C" {
void fn_8027E458(int p0){
 void *value0;
 void *value1;
 value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+40);
 fn_8027C1E0((void *)p0);
 value1=fn_8027DA18(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8));
 if((int)(int)value1==0){
  if((int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8)!=59){
   fn_8027CE80((void *)p0);
  }
 }
 fn_80276F5C(value0,1,(void *)(int)*reinterpret_cast<short *>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+40))+30));
 *reinterpret_cast<short *>(reinterpret_cast<char *>(value0)+28)=(short)(int)(void *)(int)*reinterpret_cast<short *>(reinterpret_cast<char *>(value0)+30);
}
}
#pragma pop
