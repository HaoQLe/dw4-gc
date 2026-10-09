#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_803F01F4(void *);
void fn_803FA27C(void *,...);
extern char lbl_804617F4[];
}
extern "C" {
void *fn_803FEEA8(int p0){
 void *value0;
 value0=fn_803F01F4(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+64));
 switch((int)(int)value0){
 case 1:
  return (void *)1;
 case 0:
  return (void *)0;
 default:
  fn_803FA27C(lbl_804617F4,value0);
  return (void *)0;
 }
}
}
#pragma pop
