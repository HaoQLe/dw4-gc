#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8004155C(void *,void *,int);
void *fn_800635C8(void *,void *,void *,int);
extern char lbl_80480EC0[];
extern char lbl_80480EF8[];
extern char lbl_8055E9F0[8];
extern char lbl_8055E9F8[8];
extern void *lbl_80562B74;
extern void *lbl_80562BB0;
extern void *lbl_80562C14;
extern void *lbl_80562C80;
extern void *lbl_80562C84;
}
extern "C" {
void fn_800CDAB0(){}
void *fn_800CDAB4(){return lbl_80562BB0;}
void *fn_800CDABC(){return lbl_80562B74;}
void *fn_800CDAC4(){return lbl_80562C14;}
void *fn_800CDACC(){return lbl_80562BB0;}
void fn_800CDAD4(int p0){
 if((int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12)>(int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8)){
  fn_8004155C((void *)p0,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8),4);
  return;
 } else {
  return;
 }
}
void *fn_800CDB08(){
 void *value0;
 if(!lbl_80562C80){
  value0=fn_800635C8(lbl_80480EF8,lbl_8055E9F0,lbl_8055E9F8,2);
  lbl_80562C80=value0;
 }
 return lbl_80562C80;
}
void *fn_800CDB50(){
 char *data=lbl_80480EC0;
 if(!lbl_80562C84) lbl_80562C84=fn_800635C8(data+0x1E4,data+0x194,data+0x1BC,0xA);
 return lbl_80562C84;
}
}
#pragma pop
