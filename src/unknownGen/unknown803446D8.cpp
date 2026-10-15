#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void __dl__FPv(void *);
void beBaseInfoManager_register();
void beNDMWGameRam_fieldInit();
void *beNDMWGameRam_getMeta();
void beNDMWGameRam_vtableRead();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void *fn_802B381C();
void fn_803250AC();
extern char beNDMWGameRam_className[];
extern char lbl_804E4098[];
extern char beNDMWGameRam_meta[];
void beNDMWGameRam_register();
void *beNDMWGameRam_getMetaCall();
}
extern "C" {
UnknownGenHolder *dtor_803446D8(UnknownGenHolder *object,short flags){
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
void beNDMWGameRam_registerNow(){
 meta_registerNow((int)beNDMWGameRam_register);
}
void beNDMWGameRam_register(){
 fn_803250AC();
 meta_registerClass(0,(int)beNDMWGameRam_meta,(int)beBaseInfoManager_register,(int)fn_802B381C,(int)beNDMWGameRam_getMetaCall,(int)beNDMWGameRam_className,76,(int)beNDMWGameRam_vtableRead,(int)beNDMWGameRam_fieldInit,0,(int)lbl_804E4098);
}
void *beNDMWGameRam_getMetaCall(){return beNDMWGameRam_getMeta();}
}
#pragma pop
