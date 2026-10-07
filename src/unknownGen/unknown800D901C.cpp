#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800682F4(void *,void *,void *,int);
void fn_80068390(void *,void *);
}
extern "C" {
void fn_800D901C(int p0){
 if(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+20)){
  fn_80068390((void *)p0,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+20));
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+20)=(void *)0;
  return;
 } else {
  return;
 }
}
void fn_800D905C(int p0,int p1){
 void *value0;
 if((unsigned int)p1!=(unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12)){
  value0=fn_800682F4((void *)p0,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+20),(void *)(int)(p1*(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+16)),128);
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+20)=value0;
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+12)=(void *)p1;
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+24)=(void *)(int)(p1*(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+16));
  return;
 } else {
  return;
 }
}
}
#pragma pop
