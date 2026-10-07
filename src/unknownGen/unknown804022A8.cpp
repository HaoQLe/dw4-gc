#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80401EE0(void *,void *);
void fn_8040210C(void *,void *);
}
extern "C" {
void fn_804022A8(int p0,int p1,int p2){
 if((unsigned int)p2==0){
  fn_8040210C((void *)p0,(void *)p1);
  return;
 } else {
  fn_80401EE0((void *)p0,(void *)p1);
  return;
 }
}
}
#pragma pop
