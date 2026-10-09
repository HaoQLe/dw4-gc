#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void __dl__FPv(void *);
void beBaseInfoManager_register();
void beCameraCtrl_fieldInit();
void *beCameraCtrl_getMeta();
void beCameraCtrl_vtableRead();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B381C();
extern char lbl_80420C34[];
extern char lbl_804D2BB8[];
extern char lbl_80535660[];
void beCameraCtrl_register();
void *beCameraCtrl_getMetaCall();
}
extern "C" {
UnknownGenHolder *dtor_802E2718(UnknownGenHolder *object,short flags){
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
void fn_802E278C(){
 fn_80066188((int)beCameraCtrl_register);
}
void beCameraCtrl_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80535660,(int)beBaseInfoManager_register,(int)fn_802B381C,(int)beCameraCtrl_getMetaCall,(int)lbl_80420C34,220,(int)beCameraCtrl_vtableRead,(int)beCameraCtrl_fieldInit,0,(int)lbl_804D2BB8);
}
void *beCameraCtrl_getMetaCall(){return beCameraCtrl_getMeta();}
}
#pragma pop
