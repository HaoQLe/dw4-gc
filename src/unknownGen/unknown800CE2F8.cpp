#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *igUserUCodeExt_arkRegister();
void *igScissorExt_arkRegister();
void *igPointSpriteExt_arkRegister();
void *igMultiTextureExt_arkRegister();
void *igLineWidthExt_arkRegister();
void *igDisableExt_arkRegister();
void *igDecalExt_arkRegister();
void igBlendEquationExt_arkRegister();
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
  value0=igUserUCodeExt_arkRegister();
  value1=igScissorExt_arkRegister();
  value2=igPointSpriteExt_arkRegister();
  value3=igMultiTextureExt_arkRegister();
  value4=igLineWidthExt_arkRegister();
  value5=igDisableExt_arkRegister();
  value6=igDecalExt_arkRegister();
  igBlendEquationExt_arkRegister();
  return;
 } else {
  return;
 }
}
}
#pragma pop
