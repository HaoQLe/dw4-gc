#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beModelCtrlInfoWork_register();
void beNDMWMdlItemInfoWork_fieldInit();
void *beNDMWMdlItemInfoWork_getMeta();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void __dl__FPv(void *);
void fn_803250AC();
void *fn_80338A20();
void fn_8033A934();
extern char lbl_804546C8[];
extern char lbl_804E2A3C[];
extern char lbl_80536204[];
void beNDMWMdlItemInfoWork_register();
void *beNDMWMdlItemInfoWork_getMetaCall();
}
extern "C" {
UnknownGenHolder *dtor_8033AB0C(UnknownGenHolder *object,short flags){
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
void fn_8033AB80(){
 fn_80066188((int)beNDMWMdlItemInfoWork_register);
}
void beNDMWMdlItemInfoWork_register(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80536204,(int)beModelCtrlInfoWork_register,(int)fn_80338A20,(int)beNDMWMdlItemInfoWork_getMetaCall,(int)lbl_804546C8,268,(int)fn_8033A934,(int)beNDMWMdlItemInfoWork_fieldInit,0,(int)lbl_804E2A3C);
}
void *beNDMWMdlItemInfoWork_getMetaCall(){return beNDMWMdlItemInfoWork_getMeta();}
}
#pragma pop
