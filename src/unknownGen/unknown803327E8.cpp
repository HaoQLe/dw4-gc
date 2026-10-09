#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beNDMWStatusCtrlBaseEquip_register();
void *beNDMWStatusSubSlot_getMeta();
void beNDMWStatusSubSlot_vtableRead();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void __dl__FPv(void *);
void fn_803250AC();
void *fn_80332910();
extern char lbl_80453B8C[];
extern char lbl_80535F30[];
void beNDMWStatusSubSlot_register();
void *beNDMWStatusSubSlot_getMetaCall();
}
extern "C" {
UnknownGenHolder *dtor_803327E8(UnknownGenHolder *object,short flags){
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
void fn_8033285C(){
 fn_80066188((int)beNDMWStatusSubSlot_register);
}
void beNDMWStatusSubSlot_register(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80535F30,(int)beNDMWStatusCtrlBaseEquip_register,(int)fn_80332910,(int)beNDMWStatusSubSlot_getMetaCall,(int)lbl_80453B8C,124,(int)beNDMWStatusSubSlot_vtableRead,0,0,0);
}
void *beNDMWStatusSubSlot_getMetaCall(){return beNDMWStatusSubSlot_getMeta();}
}
#pragma pop
