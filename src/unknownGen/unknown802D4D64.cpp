#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void __dl__FPv(void *);
void beBaseInfoManager_register();
void beHitLandModel_fieldInit();
void *beHitLandModel_getMeta();
void beHitLandModel_vtableRead();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B381C();
extern char beHitLandModel_className[];
extern char beHitLandModel_dependencies[];
extern char beHitLandModel_meta[];
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
void beHitLandModel_arkRegister(){
 meta_registerNow((int)beHitLandModel_register);
}
void beHitLandModel_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beHitLandModel_meta,(int)beBaseInfoManager_register,(int)fn_802B381C,(int)beHitLandModel_getMetaCall,(int)beHitLandModel_className,112,(int)beHitLandModel_vtableRead,(int)beHitLandModel_fieldInit,0,(int)beHitLandModel_dependencies);
}
void *beHitLandModel_getMetaCall(){return beHitLandModel_getMeta();}
}
#pragma pop
