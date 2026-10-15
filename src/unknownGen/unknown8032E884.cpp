#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void __dl__FPv(void *);
void beNDMWShopCtrlA0_fieldInit();
void *beNDMWShopCtrlA0_getMeta();
void beNDMWShopCtrlA0_vtableRead();
void beNDMWWindowCtrl_register();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_8032B8A4();
extern char beNDMWShopCtrlA0_className[];
extern char beNDMWShopCtrlA0_dependencies[];
extern char beNDMWShopCtrlA0_meta[];
void beNDMWShopCtrlA0_register();
void *beNDMWShopCtrlA0_getMetaCall();
}
extern "C" {
UnknownGenHolder *dtor_8032E884(UnknownGenHolder *object,short flags){
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
