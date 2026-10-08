#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80278648(void *,int,int);
void *fn_802787A4(void *,void *,void *,void *);
}
extern "C" {
void fn_80278810(int p0,int p1,int p2,int p3){
 void *value0;
 value0=fn_802787A4((void *)p0,(void *)p1,(void *)p2,(void *)p3);
 if((int)(int)value0==0){
  fn_80278648((void *)p0,0,-1);
  return;
 } else {
  return;
 }
}
}
#pragma pop
