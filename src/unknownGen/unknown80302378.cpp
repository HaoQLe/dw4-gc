#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80068128(void *,void *);
void fn_80069128(void *,void *);
extern char lbl_80535100[];
}
extern "C" {
void *beLua_virtual6C(int p0,int p1){
 void *value0;
 value0=fn_80068128((void *)p1,*reinterpret_cast<void **>((lbl_80535100+0)));
 if((unsigned char)(int)value0){
  fn_80069128(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+20),(void *)p1);
  return (void *)1;
 } else {
  return (void *)0;
 }
}
}
#pragma pop
