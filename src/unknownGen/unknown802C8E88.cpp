#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfoData_register();
void beModelCtrlInfoRamData_fieldInit();
void *beModelCtrlInfoRamData_getMeta();
void beModelCtrlInfoRamData_vtableRead();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void __dl__FPv(void *);
void fn_802B1AC8();
void *fn_802B8770();
extern char lbl_8041EFBC[];
extern char lbl_804D0D00[];
extern char lbl_80534DF8[];
void beModelCtrlInfoRamData_register();
void *beModelCtrlInfoRamData_getMetaCall();
}
extern "C" {
UnknownGenHolder *dtor_802C8E88(UnknownGenHolder *object,short flags){
 if(object){
  UnknownGenValue *value=object->unknown00;
  if(value){
   --value->unknown04;
   if(!(reinterpret_cast<volatile unsigned int *>(value)[1]&0x7FFFFF)) fn_80066E1C(value);
  }
  if(flags>0) __dl__FPv(object);
 }
 return object;
}
void fn_802C8EFC(){
 fn_80066188((int)beModelCtrlInfoRamData_register);
}
void beModelCtrlInfoRamData_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534DF8,(int)beBaseInfoData_register,(int)fn_802B8770,(int)beModelCtrlInfoRamData_getMetaCall,(int)lbl_8041EFBC,24,(int)beModelCtrlInfoRamData_vtableRead,(int)beModelCtrlInfoRamData_fieldInit,0,(int)lbl_804D0D00);
}
void *beModelCtrlInfoRamData_getMetaCall(){return beModelCtrlInfoRamData_getMeta();}
}
#pragma pop
