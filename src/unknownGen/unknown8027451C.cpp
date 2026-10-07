#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80274408(void *);
void fn_80274468(void *);
}
extern "C" {
void *fn_8027451C(int p0){
 void *value0;
 value0=fn_80274408((void *)p0);
 if((int)(int)value0!=0){
  fn_80274468((void *)p0);
 }
 return (reinterpret_cast<char *>((void *)p0)+12);
}
}
#pragma pop
