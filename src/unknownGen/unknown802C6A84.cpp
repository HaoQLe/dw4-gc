#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beModelCtrlInfoWork_fieldInit();
void *beModelCtrlInfoWork_getMeta();
void beModelCtrlInfoWork_vtableRead();
void *fn_800237D0();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void __dl__FPv(void *);
void fn_802B1AC8();
void igObject_register();
extern char lbl_8041EAA0[];
extern char lbl_804D0730[];
extern char lbl_80534C64[];
void beModelCtrlInfoWork_register();
void *beModelCtrlInfoWork_getMetaCall();
}
extern "C" {
UnknownGenHolder *dtor_802C6A84(UnknownGenHolder *object,short flags){
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
UnknownGenHolder *dtor_802C6AF8(UnknownGenHolder *object,short flags){
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
UnknownGenHolder *dtor_802C6B6C(UnknownGenHolder *object,short flags){
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
UnknownGenHolder *dtor_802C6BE0(UnknownGenHolder *object,short flags){
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
void fn_802C6C54(){
 fn_80066188((int)beModelCtrlInfoWork_register);
}
void beModelCtrlInfoWork_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534C64,(int)igObject_register,(int)fn_800237D0,(int)beModelCtrlInfoWork_getMetaCall,(int)lbl_8041EAA0,236,(int)beModelCtrlInfoWork_vtableRead,(int)beModelCtrlInfoWork_fieldInit,0,(int)lbl_804D0730);
}
void *beModelCtrlInfoWork_getMetaCall(){return beModelCtrlInfoWork_getMeta();}
}
#pragma pop
