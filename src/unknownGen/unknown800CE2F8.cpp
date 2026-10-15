#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *igUserUCodeExt_registerNow();
void *igScissorExt_registerNow();
void *igPointSpriteExt_registerNow();
void *igMultiTextureExt_registerNow();
void *igLineWidthExt_registerNow();
void *igDisableExt_registerNow();
void *igDecalExt_registerNow();
void igBlendEquationExt_registerNow();
extern char lbl_80562CEC[1];
extern char lbl_80562CED[1];
}
extern "C" {
void fn_800CE2F8(){
 void *value0;
 void *value1;
 void *value2;
 void *value3;
 void *value4;
 void *value5;
 void *value6;
 if((int)*reinterpret_cast<signed char *>((lbl_80562CED+0))==0){
  *reinterpret_cast<unsigned char *>((lbl_80562CEC+0))=0;
  *reinterpret_cast<unsigned char *>((lbl_80562CED+0))=1;
 }
 if(!(void *)(int)*reinterpret_cast<unsigned char *>((lbl_80562CEC+0))){
  *reinterpret_cast<unsigned char *>((lbl_80562CEC+0))=1;
  value0=igUserUCodeExt_registerNow();
  value1=igScissorExt_registerNow();
  value2=igPointSpriteExt_registerNow();
  value3=igMultiTextureExt_registerNow();
  value4=igLineWidthExt_registerNow();
  value5=igDisableExt_registerNow();
  value6=igDecalExt_registerNow();
  igBlendEquationExt_registerNow();
  return;
 } else {
  return;
 }
}
}
#pragma pop
