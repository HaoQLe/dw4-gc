#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_803F2C5C(void *,int);
}
extern "C" {
void *fn_803E694C(int p0){
 void *value0;
 void *value1;
 value0=fn_803F2C5C((void *)p0,49);
 if(((int)(int)value0!=0||(value1=fn_803F2C5C((void *)p0,57),(int)(int)value1!=0))){
  return (void *)1;
 } else {
  return (void *)0;
 }
}
}
#pragma pop
