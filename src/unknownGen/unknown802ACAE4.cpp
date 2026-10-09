#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800284EC();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_800A325C(void *);
void fn_802AA788();
void igInfo_register();
void igMovieInfo_fieldInit();
void *igMovieInfo_getMeta();
void igMovieInfo_vtableRead();
extern char lbl_8041BE68[];
extern char lbl_804CDBDC[];
extern char lbl_80534414[];
void igMovieInfo_register();
void *igMovieInfo_getMetaCall();
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
 fn_80066188((int)igMovieInfo_register);
}
void igMovieInfo_register(){
 fn_802AA788();
 fn_80066204(0,(int)lbl_80534414,(int)igInfo_register,(int)fn_800284EC,(int)igMovieInfo_getMetaCall,(int)lbl_8041BE68,104,(int)igMovieInfo_vtableRead,(int)igMovieInfo_fieldInit,0,(int)lbl_804CDBDC);
}
void *igMovieInfo_getMetaCall(){return igMovieInfo_getMeta();}
}
#pragma pop
