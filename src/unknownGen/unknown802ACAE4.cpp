#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800284EC();
void fn_8002EABC();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_800A325C(void *);
void fn_802AA788();
void *fn_802AC7D0();
void fn_802AC81C();
void fn_802ACC90();
extern char lbl_8041BE68[];
extern char lbl_804CDBDC[];
extern char lbl_80534414[];
void fn_802ACBF4();
void *fn_802ACC70();
}
extern "C" {
UnknownGenHolder *dtor_802ACAE4(UnknownGenHolder *object,short flags){
 if(object){
  UnknownGenValue *value=object->unknown00;
  if(value){
   --value->unknown04;
   if(!(reinterpret_cast<volatile unsigned int *>(value)[1]&0x7FFFFF)) fn_80066E1C(value);
  }
  if(flags>0) fn_800A325C(object);
 }
 return object;
}
UnknownGenHolder *dtor_802ACB58(UnknownGenHolder *object,short flags){
 if(object){
  UnknownGenValue *value=object->unknown00;
  if(value){
   --value->unknown04;
   if(!(reinterpret_cast<volatile unsigned int *>(value)[1]&0x7FFFFF)) fn_80066E1C(value);
  }
  if(flags>0) fn_800A325C(object);
 }
 return object;
}
void fn_802ACBCC(){
 fn_80066188((int)fn_802ACBF4);
}
void fn_802ACBF4(){
 fn_802AA788();
 fn_80066204(0,(int)lbl_80534414,(int)fn_8002EABC,(int)fn_800284EC,(int)fn_802ACC70,(int)lbl_8041BE68,104,(int)fn_802AC81C,(int)fn_802ACC90,0,(int)lbl_804CDBDC);
}
void *fn_802ACC70(){return fn_802AC7D0();}
}
#pragma pop
