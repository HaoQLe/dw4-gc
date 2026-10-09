#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void __dl__FPv(void *);
void beBaseInfoRam_register();
void beNDMWPanelWazaInfoRam_fieldInit();
void *beNDMWPanelWazaInfoRam_getMeta();
void beNDMWPanelWazaInfoRam_vtableRead();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_802B2B2C();
void fn_803250AC();
extern char lbl_804540A0[];
extern char lbl_804E23DC[];
extern char lbl_8053609C[];
void beNDMWPanelWazaInfoRam_register();
void *beNDMWPanelWazaInfoRam_getMetaCall();
}
extern "C" {
UnknownGenHolder *dtor_803369F8(UnknownGenHolder *object,short flags){
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
void fn_80336A6C(){
 fn_80066188((int)beNDMWPanelWazaInfoRam_register);
}
void beNDMWPanelWazaInfoRam_register(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_8053609C,(int)beBaseInfoRam_register,(int)fn_802B2B2C,(int)beNDMWPanelWazaInfoRam_getMetaCall,(int)lbl_804540A0,48,(int)beNDMWPanelWazaInfoRam_vtableRead,(int)beNDMWPanelWazaInfoRam_fieldInit,0,(int)lbl_804E23DC);
}
void *beNDMWPanelWazaInfoRam_getMetaCall(){return beNDMWPanelWazaInfoRam_getMeta();}
}
#pragma pop
