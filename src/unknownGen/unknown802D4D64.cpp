#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void __dl__FPv(void *);
void beBaseInfoManager_register();
void beHitLandModel_fieldInit();
void *beHitLandModel_getMeta();
void beHitLandModel_vtableRead();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B381C();
extern char lbl_8041FDA8[];
extern char lbl_804D1AE4[];
extern char lbl_805351C4[];
void beHitLandModel_register();
void *beHitLandModel_getMetaCall();
}
extern "C" {
UnknownGenHolder *dtor_802D4D64(UnknownGenHolder *object,short flags){
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
UnknownGenHolder *dtor_802D4DD8(UnknownGenHolder *object,short flags){
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
void fn_802D4E4C(){
 fn_80066188((int)beHitLandModel_register);
}
void beHitLandModel_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_805351C4,(int)beBaseInfoManager_register,(int)fn_802B381C,(int)beHitLandModel_getMetaCall,(int)lbl_8041FDA8,112,(int)beHitLandModel_vtableRead,(int)beHitLandModel_fieldInit,0,(int)lbl_804D1AE4);
}
void *beHitLandModel_getMetaCall(){return beHitLandModel_getMeta();}
}
#pragma pop
