#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beMessenger_fieldInit();
void *beMessenger_getMeta();
void beMessenger_vtableRead();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_800A325C(void *);
void *fn_80284550();
void fn_802B1AC8();
void igInfoManager_register();
extern char lbl_8041F694[];
extern char lbl_804D134C[];
extern char lbl_80534FBC[];
void beMessenger_register();
void *beMessenger_getMetaCall();
}
extern "C" {
UnknownGenHolder *dtor_802CE17C(UnknownGenHolder *object,short flags){
 if(object){
  UnknownGenValue *value=object->unknown00;
  if(value){
   --value->unknown04;
   if(!(reinterpret_cast<volatile unsigned int *>(value)[1]&0x7FFFFF)) fn_80066E1C(value);
  }
  if(flags>0) fn_800A325C(object);
 }
 return object;
}
void fn_802CE1F0(){
 fn_80066188((int)beMessenger_register);
}
void beMessenger_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534FBC,(int)igInfoManager_register,(int)fn_80284550,(int)beMessenger_getMetaCall,(int)lbl_8041F694,56,(int)beMessenger_vtableRead,(int)beMessenger_fieldInit,0,(int)lbl_804D134C);
}
void *beMessenger_getMetaCall(){return beMessenger_getMeta();}
}
#pragma pop
