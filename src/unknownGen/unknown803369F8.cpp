#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void __dl__FPv(void *);
void beBaseInfoRam_register();
void beNDMWPanelWazaInfoRam_fieldInit();
void *beNDMWPanelWazaInfoRam_getMeta();
void beNDMWPanelWazaInfoRam_vtableRead();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void *fn_802B2B2C();
void fn_803250AC();
extern char beNDMWPanelWazaInfoRam_className[];
extern char beNDMWPanelWazaInfoRam_dependencies[];
extern char beNDMWPanelWazaInfoRam_meta[];
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
}
#pragma pop
