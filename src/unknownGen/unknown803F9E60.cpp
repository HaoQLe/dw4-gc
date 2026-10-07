#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_802A1974(void *,void *);
}
extern "C" {
void *fn_803F9E60(int p0,int p1){
 void *value0;
 void *value1;
 value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+76);
 if(value0){
  value1=fn_802A1974(value0,(void *)p1);
  return value1;
 } else {
  return value0;
 }
}
}
#pragma pop
