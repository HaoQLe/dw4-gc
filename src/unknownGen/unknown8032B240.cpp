#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void __dl__FPv(void *);
void beNDMWStatusInfoWork_fieldInit();
void *beNDMWStatusInfoWork_getMeta();
void beNDMWStatusInfoWork_vtableRead();
void *fn_800237D0();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void igObject_register();
extern char lbl_804536E4[];
extern char lbl_804E1A70[];
extern char lbl_80535DC8[];
void beNDMWStatusInfoWork_register();
void *beNDMWStatusInfoWork_getMetaCall();
}
extern "C" {
UnknownGenHolder *dtor_8032B240(UnknownGenHolder *object,short flags){
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
void fn_8032B2B4(){
 fn_80066188((int)beNDMWStatusInfoWork_register);
}
void beNDMWStatusInfoWork_register(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80535DC8,(int)igObject_register,(int)fn_800237D0,(int)beNDMWStatusInfoWork_getMetaCall,(int)lbl_804536E4,36,(int)beNDMWStatusInfoWork_vtableRead,(int)beNDMWStatusInfoWork_fieldInit,0,(int)lbl_804E1A70);
}
void *beNDMWStatusInfoWork_getMetaCall(){return beNDMWStatusInfoWork_getMeta();}
}
#pragma pop
