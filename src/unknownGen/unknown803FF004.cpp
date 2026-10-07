#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_803F9D24(void *);
void fn_803FA27C(void *,...);
extern char lbl_804618C8[];
}
extern "C" {
void fn_803FF004(int p0){
 void *value0;
 if((unsigned int)p0==0){
  value0=(void *)0;
 } else {
  value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+4);
 }
 if((int)(int)value0==0){
  fn_803FA27C(lbl_804618C8);
  return;
 } else {
  fn_803F9D24((void *)p0);
  return;
 }
}
}
#pragma pop
