#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_800635C8(void *,void *,void *,int);
void fn_800D0B24();
extern char lbl_80488B24[];
extern char lbl_80488B84[];
extern char lbl_8055EAE4[8];
extern char lbl_8055EAEC[8];
extern char lbl_8055EAF4[8];
extern char lbl_8055EAFC[8];
extern void *lbl_805621F4;
extern void *lbl_80562E34;
extern void *lbl_80562E38;
extern void *lbl_80562E3C;
}
extern "C" {
void *fn_800D08C8(){
 void *value0;
 if(!lbl_80562E34){
  value0=fn_800635C8(lbl_80488B24,lbl_8055EAE4,lbl_8055EAEC,2);
  lbl_80562E34=value0;
 }
 return lbl_80562E34;
}
void *fn_800D0910(){
 void *value0;
 if(!lbl_80562E38){
  value0=fn_800635C8(lbl_80488B84,lbl_8055EAF4,lbl_8055EAFC,2);
  lbl_80562E38=value0;
 }
 return lbl_80562E38;
}
void *fn_800D0958(){
 if(!lbl_80562E3C) lbl_80562E3C=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80562E3C;
}
void *fn_800D0994(){
 if(!lbl_80562E3C || !(reinterpret_cast<unsigned int *>(lbl_80562E3C)[0x24/4]&4)) fn_800D0B24();
 return lbl_80562E3C;
}
}
#pragma pop
