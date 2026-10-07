#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800635C8(void *,int,int,int);
extern char lbl_8055D4C4[1];
extern void *lbl_805620F8;
extern char lbl_805620FC[1];
extern void *lbl_80562110;
}
extern "C" {
void *fn_8003D160(){
 void *value0;
 if((int)*reinterpret_cast<signed char *>((lbl_805620FC+0))==0){
  lbl_805620F8=(void *)0;
  *reinterpret_cast<unsigned char *>((lbl_805620FC+0))=1;
 }
 if(!lbl_805620F8){
  value0=fn_800635C8(lbl_8055D4C4,0,0,0);
  lbl_805620F8=value0;
 }
 return lbl_805620F8;
}
void *fn_8003D1C0(void *p0){
 lbl_80562110=p0;
 return p0;
}
}
#pragma pop
