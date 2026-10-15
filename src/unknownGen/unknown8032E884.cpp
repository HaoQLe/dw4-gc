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
extern char lbl_804E1CB8[];
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
void beNDMWShopCtrlA0_registerNow(){
 meta_registerNow((int)beNDMWShopCtrlA0_register);
}
void beNDMWShopCtrlA0_register(){
 fn_803250AC();
 meta_registerClass(0,(int)beNDMWShopCtrlA0_meta,(int)beNDMWWindowCtrl_register,(int)fn_8032B8A4,(int)beNDMWShopCtrlA0_getMetaCall,(int)beNDMWShopCtrlA0_className,92,(int)beNDMWShopCtrlA0_vtableRead,(int)beNDMWShopCtrlA0_fieldInit,0,(int)lbl_804E1CB8);
}
void *beNDMWShopCtrlA0_getMetaCall(){return beNDMWShopCtrlA0_getMeta();}
}
#pragma pop
