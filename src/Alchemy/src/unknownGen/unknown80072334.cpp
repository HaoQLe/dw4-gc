#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80071F9C(void *,void *);
extern char lbl_8055D79C[5];
extern char lbl_8055D7A4[6];
extern char lbl_8055DC50[5];
extern char lbl_8055DC58[6];
}
extern "C" {
void fn_80072334(int p0,int p1,int p2){
 void *value0;
 void *value1;
 if((unsigned char)p2){
  value0=lbl_8055DC58;
  if((unsigned char)p1){
   value0=lbl_8055DC50;
  }
  fn_80071F9C((void *)p0,value0);
  return;
 } else {
  value1=lbl_8055D7A4;
  if((unsigned char)p1){
   value1=lbl_8055D79C;
  }
  fn_80071F9C((void *)p0,value1);
  return;
 }
}
}
#pragma pop
