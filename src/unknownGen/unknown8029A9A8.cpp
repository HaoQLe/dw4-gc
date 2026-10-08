#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8028FF04(void *);
void fn_80296810(void *);
extern char lbl_80418F68[];
}
extern "C" {
void *fn_8029A9A8(int p0){
 void *value0;
 void *value1;
 void *value2;
 if((unsigned int)p0==0){
  fn_80296810(lbl_80418F68);
  value1=(void *)-1;
 } else {
  if((int)*reinterpret_cast<signed char *>(reinterpret_cast<char *>((void *)p0)+1)>=2){
   value2=fn_8028FF04(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+4));
   value0=value2;
  } else {
   value0=(void *)0;
  }
  value1=value0;
 }
 return value1;
}
}
#pragma pop
