#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80400E38(void *,void *,void *);
void fn_80401400(void *,void *);
}
extern "C" {
void fn_80401908(int p0,int p1,int p2){
 if((unsigned int)p2==0){
  fn_80401400((void *)p0,(void *)p1);
  return;
 } else {
  fn_80400E38((void *)p0,(void *)p1,(void *)p2);
  return;
 }
}
}
#pragma pop
