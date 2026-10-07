#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8004155C(void *,int,int);
}
extern "C" {
void fn_8031BD7C(int p0,int p1,int p2,int p3,int p4,int p5){
 void *value0;
 void *value1;
 void *value2;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+16))+8)=(void *)0;
 value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+16);
 if((int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+8)<=0){
  fn_8004155C(value0,0,12);
 }
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+20))+8)=(void *)0;
 value1=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+20);
 if((int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value1)+8)<=0){
  fn_8004155C(value1,0,4);
 }
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+24))+8)=(void *)0;
 value2=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+24);
 if((int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value2)+8)<=0){
  fn_8004155C(value2,0,12);
  return;
 } else {
  return;
 }
}
}
#pragma pop
