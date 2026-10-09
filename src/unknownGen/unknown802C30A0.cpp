#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfoRam_register();
void beNumberCtrlInfoRam_fieldInit();
void *beNumberCtrlInfoRam_getMeta();
void beNumberCtrlInfoRam_vtableRead();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_800A325C(void *);
void fn_802B1AC8();
void *fn_802B2B2C();
extern char lbl_8041E71C[];
extern char lbl_804D0380[];
extern char lbl_80534B48[];
void beNumberCtrlInfoRam_register();
void *beNumberCtrlInfoRam_getMetaCall();
}
extern "C" {
UnknownGenHolder *dtor_802C30A0(UnknownGenHolder *object,short flags){
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
void fn_802C3114(){
 fn_80066188((int)beNumberCtrlInfoRam_register);
}
void beNumberCtrlInfoRam_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534B48,(int)beBaseInfoRam_register,(int)fn_802B2B2C,(int)beNumberCtrlInfoRam_getMetaCall,(int)lbl_8041E71C,68,(int)beNumberCtrlInfoRam_vtableRead,(int)beNumberCtrlInfoRam_fieldInit,0,(int)lbl_804D0380);
}
void *beNumberCtrlInfoRam_getMetaCall(){return beNumberCtrlInfoRam_getMeta();}
}
#pragma pop
