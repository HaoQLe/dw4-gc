#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *fn_800635C8(void *,void *,void *,int);
void igPointSpriteExt_arkRegister();
extern char lbl_80488B24[];
extern char lbl_80488B84[];
extern char lbl_8055EAE4[8];
extern char lbl_8055EAEC[8];
extern char lbl_8055EAF4[8];
extern char lbl_8055EAFC[8];
extern void *lbl_805621F4;
extern void *lbl_80562E34;
extern void *lbl_80562E38;
extern void *igPointSpriteExt_meta;
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
 if(!igPointSpriteExt_meta) igPointSpriteExt_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igPointSpriteExt_meta;
}
void *igPointSpriteExt_getMeta(){
 if(!igPointSpriteExt_meta || !(reinterpret_cast<unsigned int *>(igPointSpriteExt_meta)[0x24/4]&4)) igPointSpriteExt_arkRegister();
 return igPointSpriteExt_meta;
}
}
#pragma pop
