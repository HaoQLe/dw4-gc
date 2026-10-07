#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_802774A0(void *,void *,void *);
}
extern "C" {
void *fn_802774F0(int p0,int p1,int p2){
 void *value0;
 value0=fn_802774A0((void *)p0,(void *)p1,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+0));
 if(!value0){
  return (void *)0;
 } else {
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p2)+92)=value0;
  return (void *)1;
 }
}
}
#pragma pop
