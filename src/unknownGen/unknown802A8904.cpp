#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8029BC68(void *,void *,void *);
void *fn_802A8878(void *,void *,void *,void *,void *,int);
}
extern "C" {
void *fn_802A8904(int p0,int p1,int p2){
 void *value0;
 if((!*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+44)&&(value0=fn_802A8878((void *)p0,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+20),*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+24),*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+28),*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+32),0),*reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+44)=value0,!*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+44)))){
  return (void *)0;
 } else {
  fn_8029BC68(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+44),(void *)p1,(void *)p2);
  return (void *)1;
 }
}
}
#pragma pop
