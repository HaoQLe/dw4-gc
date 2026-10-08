#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8003FDA4(void *,int,int);
void *fn_800658F8(void *,void *);
extern char lbl_804AB5D0[];
extern void *lbl_8056469C;
}
extern "C" {
void fn_80208234(int p0,int p1,int p2,int p3,int p4,int p5){
 void *value1;
 void *value0=lbl_8056469C;
 if(value0){
  value1=fn_800658F8(value0,lbl_804AB5D0);
  if((int)(int)value1!=0){
   fn_8003FDA4(value1,0,1);
   fn_8003FDA4(value1,1,3);
   fn_8003FDA4(value1,2,1);
   return;
  } else {
   return;
  }
 }
}
}
#pragma pop
