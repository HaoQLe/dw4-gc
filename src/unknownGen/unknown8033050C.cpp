#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void __dl__FPv(void *);
void beNDMWStatusSubMenu_fieldInit();
void *beNDMWStatusSubMenu_getMeta();
void beNDMWStatusSubMenu_vtableRead();
void beNDMWWindowCtrl_register();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_8032B8A4();
extern char beNDMWStatusSubMenu_className[];
extern char beNDMWStatusSubMenu_dependencies[];
extern char beNDMWStatusSubMenu_meta[];
void beNDMWStatusSubMenu_register();
void *beNDMWStatusSubMenu_getMetaCall();
}
extern "C" {
UnknownGenHolder *dtor_8033050C(UnknownGenHolder *object,short flags){
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
void beNDMWStatusSubMenu_arkRegister(){
 meta_registerNow((int)beNDMWStatusSubMenu_register);
}
void beNDMWStatusSubMenu_register(){
 fn_803250AC();
 meta_registerClass(0,(int)beNDMWStatusSubMenu_meta,(int)beNDMWWindowCtrl_register,(int)fn_8032B8A4,(int)beNDMWStatusSubMenu_getMetaCall,(int)beNDMWStatusSubMenu_className,104,(int)beNDMWStatusSubMenu_vtableRead,(int)beNDMWStatusSubMenu_fieldInit,0,(int)beNDMWStatusSubMenu_dependencies);
}
void *beNDMWStatusSubMenu_getMetaCall(){return beNDMWStatusSubMenu_getMeta();}
}
#pragma pop
