#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006E820(void *,void *,void *,int);
void fn_800722E0(void *,void *,void *);
extern char lbl_8055D7C0[3];
}
extern "C" {
void *fn_8006E2B0(int p0,int p1,int p2,int p3){
 void *value0;
 value0=fn_8006E820((void *)p0,(void *)p1,(void *)p2,1);
 if(!value0){
  return (void *)0;
 } else {
  fn_800722E0(*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+12),(void *)p3,lbl_8055D7C0);
  return (void *)1;
 }
}
}
#pragma pop
