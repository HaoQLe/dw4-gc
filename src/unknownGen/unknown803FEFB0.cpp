#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_803F9D00(void *);
void fn_803FA27C(void *,...);
extern char lbl_8046189C[];
}
extern "C" {
void *fn_803FEFB0(int p0){
 void *value0;
 void *value1;
 if((unsigned int)p0==0){
  value0=(void *)0;
 } else {
  value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+4);
 }
 if((int)(int)value0==0){
  fn_803FA27C(lbl_8046189C);
  return (void *)0;
 } else {
  value1=fn_803F9D00((void *)p0);
  return value1;
 }
}
}
#pragma pop
