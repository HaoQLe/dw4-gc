#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfoData_register();
void beSelectCtrlInfoRamData_fieldInit();
void *beSelectCtrlInfoRamData_getMeta();
void beSelectCtrlInfoRamData_vtableRead();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_800A325C(void *);
void fn_802B1AC8();
void *fn_802B8770();
extern char lbl_8041D8FC[];
extern char lbl_804CF6C8[];
extern char lbl_805347B8[];
void beSelectCtrlInfoRamData_register();
void *beSelectCtrlInfoRamData_getMetaCall();
}
extern "C" {
UnknownGenHolder *dtor_802BA34C(UnknownGenHolder *object,short flags){
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
void fn_802BA3C0(){
 fn_80066188((int)beSelectCtrlInfoRamData_register);
}
void beSelectCtrlInfoRamData_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_805347B8,(int)beBaseInfoData_register,(int)fn_802B8770,(int)beSelectCtrlInfoRamData_getMetaCall,(int)lbl_8041D8FC,32,(int)beSelectCtrlInfoRamData_vtableRead,(int)beSelectCtrlInfoRamData_fieldInit,0,(int)lbl_804CF6C8);
}
void *beSelectCtrlInfoRamData_getMetaCall(){return beSelectCtrlInfoRamData_getMeta();}
}
#pragma pop
