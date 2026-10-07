#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_802038CC(void *,void *);
void *fn_80203B44(void *,void *);
}
extern "C" {
void *fn_80203C2C(int p0,int p1){
 void *value0;
 if(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12)){
  value0=fn_80203B44(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12),(void *)p1);
  return value0;
 } else {
  return (void *)0;
 }
}
void *fn_80203C60(int p0,int p1){
 void *value0;
 if(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12)){
  value0=fn_802038CC(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12),(void *)p1);
  return value0;
 } else {
  return (void *)0;
 }
}
}
#pragma pop
