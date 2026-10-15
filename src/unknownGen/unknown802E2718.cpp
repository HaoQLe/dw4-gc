#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void __dl__FPv(void *);
void beBaseInfoManager_register();
void beCameraCtrl_fieldInit();
void *beCameraCtrl_getMeta();
void beCameraCtrl_vtableRead();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B381C();
extern char beCameraCtrl_className[];
extern char beCameraCtrl_dependencies[];
extern char beCameraCtrl_meta[];
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
void beCameraCtrl_arkRegister(){
 meta_registerNow((int)beCameraCtrl_register);
}
void beCameraCtrl_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beCameraCtrl_meta,(int)beBaseInfoManager_register,(int)fn_802B381C,(int)beCameraCtrl_getMetaCall,(int)beCameraCtrl_className,220,(int)beCameraCtrl_vtableRead,(int)beCameraCtrl_fieldInit,0,(int)beCameraCtrl_dependencies);
}
void *beCameraCtrl_getMetaCall(){return beCameraCtrl_getMeta();}
}
#pragma pop
