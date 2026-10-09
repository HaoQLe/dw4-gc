#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfoRam_register();
void beNDMWStatusInfoRam_fieldInit();
void *beNDMWStatusInfoRam_getMeta();
void beNDMWStatusInfoRam_vtableRead();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void __dl__FPv(void *);
void *fn_802B2B2C();
void fn_803250AC();
extern char lbl_804536C8[];
extern char lbl_804E1A58[];
extern char lbl_80535DC0[];
void beNDMWStatusInfoRam_register();
void *beNDMWStatusInfoRam_getMetaCall();
}
extern "C" {
UnknownGenHolder *dtor_8032ADE0(UnknownGenHolder *object,short flags){
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
void fn_8032AE54(){
 fn_80066188((int)beNDMWStatusInfoRam_register);
}
void beNDMWStatusInfoRam_register(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80535DC0,(int)beBaseInfoRam_register,(int)fn_802B2B2C,(int)beNDMWStatusInfoRam_getMetaCall,(int)lbl_804536C8,48,(int)beNDMWStatusInfoRam_vtableRead,(int)beNDMWStatusInfoRam_fieldInit,0,(int)lbl_804E1A58);
}
void *beNDMWStatusInfoRam_getMetaCall(){return beNDMWStatusInfoRam_getMeta();}
}
#pragma pop
