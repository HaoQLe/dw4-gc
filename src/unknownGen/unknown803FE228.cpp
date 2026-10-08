#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_803F03D0(void *);
void *fn_803FA4FC(void *);
}
extern "C" {
void fn_803FE228(int p0){
 void *value0;
 void *value1;
 value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+64);
 if(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+68)){
  value1=fn_803FA4FC(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+68));
  if((int)(int)value1==3){
   fn_803F03D0(value0);
   return;
  } else {
   return;
  }
 }
}
}
#pragma pop
