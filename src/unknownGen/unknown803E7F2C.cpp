#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_803F880C(void *,void *);
void fn_803F8A78(void *);
void *fn_803F8AA4(void *,void *);
}
extern "C" {
void *fn_803E7F2C(int p0,int p1){
 void *value0;
 void *value1;
 void *local0;
 value0=fn_803F8AA4((void *)p0,(void *)p1);
 if((int)(int)value0==0){
  return (void *)0;
 } else {
  value1=fn_803F880C(value0,&local0);
  if((int)(int)value1==0){
   local0=(void *)0;
  }
  fn_803F8A78(value0);
  return local0;
 }
}
}
#pragma pop
