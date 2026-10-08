#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80312138(void *,void *);
}
extern "C" {
void *fn_8031B7EC(int p0){
 void *value0;
 void *value1;
 value0=(void *)0;
 do {
  value1=fn_80312138(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+20),value0);
  if((int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value1)+36)!=0){
   return (void *)1;
  }
  if((int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value1)+68)!=0){
   return (void *)1;
  }
  value0=(reinterpret_cast<char *>(value0)+1);
 } while((int)(int)value0<4);
 return (void *)0;
}
}
#pragma pop
