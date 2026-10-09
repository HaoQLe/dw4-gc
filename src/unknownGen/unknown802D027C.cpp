#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfoRam_register();
void beMatCtrlInfoRam_fieldInit();
void *beMatCtrlInfoRam_getMeta();
void beMatCtrlInfoRam_vtableRead();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_800A325C(void *);
void fn_802B1AC8();
void *fn_802B2B2C();
extern char lbl_8041F920[];
extern char lbl_804D1674[];
extern char lbl_8053508C[];
void beMatCtrlInfoRam_register();
void *beMatCtrlInfoRam_getMetaCall();
}
extern "C" {
UnknownGenHolder *dtor_802D027C(UnknownGenHolder *object,short flags){
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
void fn_802D02F0(){
 fn_80066188((int)beMatCtrlInfoRam_register);
}
void beMatCtrlInfoRam_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_8053508C,(int)beBaseInfoRam_register,(int)fn_802B2B2C,(int)beMatCtrlInfoRam_getMetaCall,(int)lbl_8041F920,48,(int)beMatCtrlInfoRam_vtableRead,(int)beMatCtrlInfoRam_fieldInit,0,(int)lbl_804D1674);
}
void *beMatCtrlInfoRam_getMetaCall(){return beMatCtrlInfoRam_getMeta();}
}
#pragma pop
