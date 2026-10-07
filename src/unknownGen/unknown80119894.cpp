#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80119894(int);
}
extern "C" {
void *fn_80119894(int p0){
 void *value1;
 void *value2;
 void *value0;
 void *value3;
 value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8);
 if(value0){
  value2=value0;
 } else {
  if(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+24)){
   value3=fn_80119894((int)(int)(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+24)));
   value1=value3;
  } else {
   value1=(void *)0;
  }
  value2=value1;
 }
 return value2;
}
}
#pragma pop
