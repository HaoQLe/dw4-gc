#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8040D8E4(void *);
void fn_8040E53C(void *);
}
extern "C" {
void fn_8040D9D8(int p0){
 void *value0;
 value0=fn_8040D8E4(*reinterpret_cast<void **>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+24))+84));
 if(!(unsigned char)(int)value0){
  fn_8040E53C((void *)p0);
  return;
 } else {
  return;
 }
}
}
#pragma pop
