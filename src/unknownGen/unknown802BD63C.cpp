#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beSaveApi_register();
void *beSvConnectCheck_getMeta();
void beSvConnectCheck_vtableRead();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void __dl__FPv(void *);
void fn_802B1AC8();
void *fn_802BD764();
extern char lbl_8041DF44[];
extern char lbl_8053490C[];
void beSvConnectCheck_register();
void *beSvConnectCheck_getMetaCall();
}
extern "C" {
UnknownGenHolder *dtor_802BD63C(UnknownGenHolder *object,short flags){
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
void fn_802BD6B0(){
 fn_80066188((int)beSvConnectCheck_register);
}
void beSvConnectCheck_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_8053490C,(int)beSaveApi_register,(int)fn_802BD764,(int)beSvConnectCheck_getMetaCall,(int)lbl_8041DF44,244,(int)beSvConnectCheck_vtableRead,0,0,0);
}
void *beSvConnectCheck_getMetaCall(){return beSvConnectCheck_getMeta();}
}
#pragma pop
