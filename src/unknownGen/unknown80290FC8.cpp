#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802910E0(void *);
void fn_80291490(void *);
void fn_80291834(void *);
void fn_80295250();
extern char lbl_80516A74[];
void memset(int,int,int);
}
extern "C" {
void fn_80290FC8(){
 memset((int)lbl_80516A74,0,2688);
}
void fn_80290FF8(){
 fn_80295250();
 memset((int)lbl_80516A74,0,2688);
}
void fn_8029102C(int p0){
 void *value0;
 value0=(void *)(int)*reinterpret_cast<short *>(reinterpret_cast<char *>((void *)p0)+156);
 if((int)(int)value0==2){
  fn_802910E0((void *)p0);
  return;
 } else {
  if((int)(int)value0==1){
   fn_80291490((void *)p0);
  } else {
   if(!(short)(int)value0){
    fn_80291834((void *)p0);
    return;
   } else {
    return;
   }
  }
  return;
 }
}
}
#pragma pop
