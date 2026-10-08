#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800D0270();
void *fn_800D039C();
void *fn_800D0B24();
void *fn_800D17DC();
void *fn_800D1900();
void *fn_800D4BB8();
void *fn_800D4CA0();
void fn_800D5A04();
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
  value0=fn_800D0270();
  value1=fn_800D039C();
  value2=fn_800D0B24();
  value3=fn_800D17DC();
  value4=fn_800D1900();
  value5=fn_800D4BB8();
  value6=fn_800D4CA0();
  fn_800D5A04();
  return;
 } else {
  return;
 }
}
}
#pragma pop
