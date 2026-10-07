#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_801F81CC(void *);
void *fn_801F9B0C(void *,void *);
}
extern "C" {
void *fn_801F89CC(void *p0){
 void *value1;
 void *value0;
 void *value2;
 void *value3;
 value0=*reinterpret_cast<void **>(reinterpret_cast<char *>(p0)+68);
 value1=value0;
 if(value0){
  value2=fn_801F9B0C(value0,p0);
  value1=value2;
 }
 if(*reinterpret_cast<void **>(reinterpret_cast<char *>(p0)+64)){
  value3=fn_801F81CC(p0);
  return value3;
 } else {
  return value1;
 }
}
}
#pragma pop
