#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_803E76D4(void *,void *);
void fn_803F8A78(void *);
void *fn_803F8AA4(void *,void *);
}
extern "C" {
void fn_803E7CE8(int p0){
 void *value0;
 value0=fn_803F8AA4((reinterpret_cast<char *>((void *)p0)+148),*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+144));
 if((int)(int)value0!=0){
  fn_803E76D4(value0,(void *)p0);
  fn_803F8A78(value0);
  return;
 } else {
  return;
 }
}
}
#pragma pop
