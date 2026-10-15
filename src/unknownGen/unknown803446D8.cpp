#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void __dl__FPv(void *);
void beBaseInfoManager_register();
void beNDMWGameRam_fieldInit();
void *beNDMWGameRam_getMeta();
void beNDMWGameRam_vtableRead();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void *fn_802B381C();
void fn_803250AC();
extern char beNDMWGameRam_className[];
extern char beNDMWGameRam_dependencies[];
extern char beNDMWGameRam_meta[];
void beNDMWGameRam_register();
void *beNDMWGameRam_getMetaCall();
}
extern "C" {
UnknownGenHolder *dtor_803446D8(UnknownGenHolder *object,short flags){
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
