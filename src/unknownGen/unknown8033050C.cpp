#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beNDMWStatusSubMenu_fieldInit();
void *beNDMWStatusSubMenu_getMeta();
void beNDMWStatusSubMenu_vtableRead();
void beNDMWWindowCtrl_register();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_800A325C(void *);
void fn_803250AC();
void *fn_8032B8A4();
extern char lbl_80453A54[];
extern char lbl_804E1D8C[];
extern char lbl_80535EC0[];
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
  if(flags>0) fn_800A325C(object);
 }
 return object;
}
void fn_80330580(){
 fn_80066188((int)beNDMWStatusSubMenu_register);
}
void beNDMWStatusSubMenu_register(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80535EC0,(int)beNDMWWindowCtrl_register,(int)fn_8032B8A4,(int)beNDMWStatusSubMenu_getMetaCall,(int)lbl_80453A54,104,(int)beNDMWStatusSubMenu_vtableRead,(int)beNDMWStatusSubMenu_fieldInit,0,(int)lbl_804E1D8C);
}
void *beNDMWStatusSubMenu_getMetaCall(){return beNDMWStatusSubMenu_getMeta();}
}
#pragma pop
