#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80412794(void *,void *);
extern void *lbl_8055CEE0;
}
extern "C" {
void *fn_804123BC(int p0,int p1,int p2,int p3,int p4,int p5){
 void *value0=lbl_8055CEE0;
 if(value0){
  fn_80412794(value0,(void *)p2);
 }
 return (void *)0;
}
}
#pragma pop
