#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void __dl__FPv(void *);
void beModelCtrlInfoWork_fieldInit();
void *beModelCtrlInfoWork_getMeta();
void beModelCtrlInfoWork_vtableRead();
void *fn_800237D0();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void igObject_register();
extern char beModelCtrlInfoWork_className[];
extern char beModelCtrlInfoWork_dependencies[];
extern char beModelCtrlInfoWork_meta[];
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
void beModelCtrlInfoWork_arkRegister(){
 meta_registerNow((int)beModelCtrlInfoWork_register);
}
void beModelCtrlInfoWork_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beModelCtrlInfoWork_meta,(int)igObject_register,(int)fn_800237D0,(int)beModelCtrlInfoWork_getMetaCall,(int)beModelCtrlInfoWork_className,236,(int)beModelCtrlInfoWork_vtableRead,(int)beModelCtrlInfoWork_fieldInit,0,(int)beModelCtrlInfoWork_dependencies);
}
void *beModelCtrlInfoWork_getMetaCall(){return beModelCtrlInfoWork_getMeta();}
}
#pragma pop
