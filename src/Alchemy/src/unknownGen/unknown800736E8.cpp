#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8007390C(void *);
void fn_80073BE8(void *);
}
extern "C" {
void *fn_800736E8(int p0,int p1){
 if((int)p0!=0){
  fn_8007390C((void *)p0);
  if((int)(short)p1>0){
   fn_80073BE8((void *)p0);
  }
 }
 return (void *)p0;
}
}
#pragma pop
