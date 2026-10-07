#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_801F94E8(void *);
void fn_801F9B30(void *,void *);
}
extern "C" {
void fn_801F967C(int p0){
 void *value0;
 value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+52);
 if(value0){
  fn_801F9B30(value0,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+44));
 }
 fn_801F94E8((void *)p0);
}
}
#pragma pop
