#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void __dl__FPv(void *);
void *beNDMWShopTitle03_getMeta();
void beNDMWShopTitle03_vtableRead();
void beNDMWWindowTitle_register();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_80326F88();
extern char beNDMWShopTitle03_className[];
extern char beNDMWShopTitle03_meta[];
void beNDMWShopTitle03_register();
void *beNDMWShopTitle03_getMetaCall();
}
extern "C" {
UnknownGenHolder *dtor_80326E60(UnknownGenHolder *object,short flags){
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
void beNDMWShopTitle03_arkRegister(){
 meta_registerNow((int)beNDMWShopTitle03_register);
}
void beNDMWShopTitle03_register(){
 fn_803250AC();
 meta_registerClass(0,(int)beNDMWShopTitle03_meta,(int)beNDMWWindowTitle_register,(int)fn_80326F88,(int)beNDMWShopTitle03_getMetaCall,(int)beNDMWShopTitle03_className,80,(int)beNDMWShopTitle03_vtableRead,0,0,0);
}
void *beNDMWShopTitle03_getMetaCall(){return beNDMWShopTitle03_getMeta();}
}
#pragma pop
