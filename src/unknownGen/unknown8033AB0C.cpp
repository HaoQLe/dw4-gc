#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void __dl__FPv(void *);
void beModelCtrlInfoWork_register();
void beNDMWMdlItemInfoWork_fieldInit();
void *beNDMWMdlItemInfoWork_getMeta();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_80338A20();
void fn_8033A934();
extern char beNDMWMdlItemInfoWork_className[];
extern char lbl_804E2A3C[];
extern char beNDMWMdlItemInfoWork_meta[];
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
void beNDMWMdlItemInfoWork_registerNow(){
 meta_registerNow((int)beNDMWMdlItemInfoWork_register);
}
void beNDMWMdlItemInfoWork_register(){
 fn_803250AC();
 meta_registerClass(0,(int)beNDMWMdlItemInfoWork_meta,(int)beModelCtrlInfoWork_register,(int)fn_80338A20,(int)beNDMWMdlItemInfoWork_getMetaCall,(int)beNDMWMdlItemInfoWork_className,268,(int)fn_8033A934,(int)beNDMWMdlItemInfoWork_fieldInit,0,(int)lbl_804E2A3C);
}
void *beNDMWMdlItemInfoWork_getMetaCall(){return beNDMWMdlItemInfoWork_getMeta();}
}
#pragma pop
