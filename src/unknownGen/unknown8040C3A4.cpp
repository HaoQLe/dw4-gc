#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80069128(void *,void *);
void fn_800692E0(void *,void *,void *,int);
void *fn_8040C1D0(void *,void *,void *);
}
extern "C" {
void fn_8040C3A4(int p0,int p1,int p2){
 void *value0;
 void *local0;
 value0=fn_8040C1D0((void *)p2,(void *)p0,(void *)p2);
 if((int)(int)value0!=0){
  fn_800692E0(&local0,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+32),value0,0);
  fn_80069128(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+32),value0);
  return;
 } else {
  return;
 }
}
}
#pragma pop
