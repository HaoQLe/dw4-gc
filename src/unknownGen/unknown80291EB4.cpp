#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
extern char lbl_80517500[];
}
extern "C" {
void *fn_80291EB4(void *p0){
 void *value0;
 void *value1;
 value0=*reinterpret_cast<void **>(reinterpret_cast<char *>(p0)+180);
 if(value0){
  value1=reinterpret_cast<void * (*)(void *)>(*reinterpret_cast<void **>((lbl_80517500+0)))(value0);
  return value1;
 } else {
  return value0;
 }
}
}
#pragma pop
