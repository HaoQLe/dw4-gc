#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_803FA27C(void *,...);
void fn_803FEB5C(void *,void *,int,int);
void *fn_803FF2C4(void *);
extern char lbl_80461798[];
extern char lbl_804617C8[];
}
extern "C" {
void fn_803FEE24(int p0,int p1){
 void *value0;
 value0=fn_803FF2C4((void *)p0);
 if((int)(int)value0==0){
  fn_803FA27C(lbl_80461798);
 } else {
  if((unsigned int)p1==0){
   fn_803FA27C(lbl_804617C8);
   return;
  } else {
   fn_803FEB5C((void *)p0,(void *)p1,0,-1);
   return;
  }
 }
}
}
#pragma pop
