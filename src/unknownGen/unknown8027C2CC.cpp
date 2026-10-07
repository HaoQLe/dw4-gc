#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80276058(void *,void *);
void fn_8027C1E0(void *);
void fn_8027C274(void *,void *);
}
extern "C" {
void fn_8027C2CC(int p0,int p1){
 if((int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8)!=(int)p1){
  fn_8027C274((void *)p0,(void *)p1);
 }
 fn_8027C1E0((void *)p0);
}
void fn_8027C30C(int p0,int p1,int p2){
 if((int)p1==0){
  fn_80276058((void *)p0,(void *)p2);
  return;
 } else {
  return;
 }
}
void *fn_8027C338(int p0,int p1){
 if((int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8)==(int)p1){
  fn_8027C1E0((void *)p0);
  return (void *)1;
 } else {
  return (void *)0;
 }
}
}
#pragma pop
