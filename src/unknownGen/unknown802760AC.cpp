#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80276884(void *,void *,void *);
void *fn_80276F5C(void *,int,int);
}
extern "C" {
void *fn_802760AC(int p0){
 void *value1;
 void *value0;
 void *local0;
 value1=fn_80276F5C((void *)p0,42,-1);
 local0=value1;
 value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+20);
 if((int)(int)value1==(int)(int)value0){
  fn_80276884((void *)p0,&local0,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+24));
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+24)=(void *)-1;
 }
 return local0;
}
}
#pragma pop
