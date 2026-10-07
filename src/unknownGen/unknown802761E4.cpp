#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802767CC(void *,void *,void *);
}
extern "C" {
void *fn_802761E4(int p0){
 void *value0;
 void *value1;
 value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+16);
 value1=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+20);
 if((int)(int)value0!=(int)(int)value1){
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+20)=value0;
  fn_802767CC((void *)p0,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+24),value1);
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+24)=(void *)-1;
 }
 return *reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+16);
}
}
#pragma pop
