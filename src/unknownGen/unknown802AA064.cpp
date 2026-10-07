#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8029EF04(void *);
}
extern "C" {
void *fn_802AA064(int p0){
 void *value0;
 void *value1;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+63)=0;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+68)=(void *)0;
 value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+96);
 if(value0){
  value1=fn_8029EF04(value0);
  return value1;
 } else {
  return value0;
 }
}
}
#pragma pop
