#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beNDMWPanelWazaInfoWork_fieldInit();
void *beNDMWPanelWazaInfoWork_getMeta();
void beNDMWPanelWazaInfoWork_vtableRead();
void *fn_800237D0();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void __dl__FPv(void *);
void fn_803250AC();
void igObject_register();
extern char lbl_804540B8[];
extern char lbl_804E23F4[];
extern char lbl_805360A4[];
void beNDMWPanelWazaInfoWork_register();
void *beNDMWPanelWazaInfoWork_getMetaCall();
}
extern "C" {
UnknownGenHolder *dtor_80336E90(UnknownGenHolder *object,short flags){
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
void fn_80336F04(){
 fn_80066188((int)beNDMWPanelWazaInfoWork_register);
}
void beNDMWPanelWazaInfoWork_register(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_805360A4,(int)igObject_register,(int)fn_800237D0,(int)beNDMWPanelWazaInfoWork_getMetaCall,(int)lbl_804540B8,48,(int)beNDMWPanelWazaInfoWork_vtableRead,(int)beNDMWPanelWazaInfoWork_fieldInit,0,(int)lbl_804E23F4);
}
void *beNDMWPanelWazaInfoWork_getMetaCall(){return beNDMWPanelWazaInfoWork_getMeta();}
}
#pragma pop
