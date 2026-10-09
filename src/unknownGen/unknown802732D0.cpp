#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80272D20(void *,void *);
}
extern "C" {
void *fn_802732D0(int p0,int p1){
 void *value0;
 value0=fn_80272D20((void *)p0,(void *)p1);
 if(!value0){
  return (void *)0;
 } else {
  switch((int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+0)){
  case 4:
   return *reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+8);
  case 5:
   return *reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+8);
  default:
   return (void *)0;
  }
 }
}
}
#pragma pop
