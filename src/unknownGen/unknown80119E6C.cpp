#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void __dl__FPv(void *);
void fn_8011A314(void *,void *);
extern void *lbl_805638B8;
}
extern "C" {
int fn_80119E6C(void *object){return *reinterpret_cast<int *>(reinterpret_cast<char *>(object)+12);}
void *fn_80119E74(int p0,int p1,int p2,int p3,int p4,int p5){
 void *value0=lbl_805638B8;
 if(value0){
  fn_8011A314(value0,(void *)p2);
 }
 return (void *)0;
}
}
#pragma pop
