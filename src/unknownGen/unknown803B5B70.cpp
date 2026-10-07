#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_803B5AA8(void *);
void *fn_803B5D18(int,void *);
}
extern "C" {
void *fn_803B5B70(int p0){
 void *value0;
 void *value1;
 void *value2;
 value1=fn_803B5D18(80,(void *)p0);
 value0=value1;
 if((int)(int)value1!=0){
  value2=fn_803B5AA8(value1);
  value0=value2;
 }
 return value0;
}
}
#pragma pop
