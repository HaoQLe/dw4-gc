#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
extern void *_arkCore__Q23Gap4Core;
void fn_8003E450(void *,void *);
void *fn_80053998(void *,void *);
void fn_80058C80();
extern void *kFailure__3Gap;
}
extern "C" {
void fn_800660AC(int p0){
 void *value1;
 void *value2;
 void *value0=_arkCore__Q23Gap4Core;
 value1=fn_80053998(*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+24),(void *)p0);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+12)=value1;
 if((int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12)==-1){
  fn_8003E450(_arkCore__Q23Gap4Core,(void *)p0);
  value2=fn_80053998(*reinterpret_cast<void **>(reinterpret_cast<char *>(_arkCore__Q23Gap4Core)+24),(void *)p0);
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+12)=value2;
  return;
 } else {
  return;
 }
}
void fn_80066114(int p0,int p1,int p2){
 if(!*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+92)){
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=kFailure__3Gap;
 } else {
  if(*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p1)+26)){
   *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=kFailure__3Gap;
   return;
  } else {
   if((unsigned int)p2==0){
    fn_80058C80();
   }
   *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=kFailure__3Gap;
   return;
  }
 }
}
int fn_80066180(void *object){return *reinterpret_cast<int *>(reinterpret_cast<char *>(object)+96);}
}
#pragma pop
