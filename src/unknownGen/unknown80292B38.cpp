#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80292B7C(void *);
void fn_80292F40(void *);
void fn_80293278(void *);
}
extern "C" {
void fn_80292B38(int p0){
 void *value0;
 value0=(void *)(int)*reinterpret_cast<short *>(reinterpret_cast<char *>((void *)p0)+156);
 if((int)(int)value0==2){
  fn_80292B7C((void *)p0);
 } else {
  if((int)(int)value0==1){
   fn_80292F40((void *)p0);
   return;
  } else {
   fn_80293278((void *)p0);
   return;
  }
 }
}
}
#pragma pop
