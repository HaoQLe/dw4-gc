#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void __dl__FPv(void *);
void beNDMWStatusCtrlBaseEquip_register();
void *beNDMWStatusSubSlot_getMeta();
void beNDMWStatusSubSlot_vtableRead();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_80332910();
extern char beNDMWStatusSubSlot_className[];
extern char beNDMWStatusSubSlot_meta[];
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
}
#pragma pop
