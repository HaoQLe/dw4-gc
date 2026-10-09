#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beNDMWShopTitle03_getMeta();
void beNDMWShopTitle03_vtableRead();
void beNDMWWindowTitle_register();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void __dl__FPv(void *);
void fn_803250AC();
void *fn_80326F88();
extern char lbl_80453474[];
extern char lbl_80535D40[];
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
void fn_80326ED4(){
 fn_80066188((int)beNDMWShopTitle03_register);
}
void beNDMWShopTitle03_register(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80535D40,(int)beNDMWWindowTitle_register,(int)fn_80326F88,(int)beNDMWShopTitle03_getMetaCall,(int)lbl_80453474,80,(int)beNDMWShopTitle03_vtableRead,0,0,0);
}
void *beNDMWShopTitle03_getMetaCall(){return beNDMWShopTitle03_getMeta();}
}
#pragma pop
