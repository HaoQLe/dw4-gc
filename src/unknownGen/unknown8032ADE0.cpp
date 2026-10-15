#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void __dl__FPv(void *);
void beBaseInfoRam_register();
void beNDMWStatusInfoRam_fieldInit();
void *beNDMWStatusInfoRam_getMeta();
void beNDMWStatusInfoRam_vtableRead();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void *fn_802B2B2C();
void fn_803250AC();
extern char beNDMWStatusInfoRam_className[];
extern char beNDMWStatusInfoRam_dependencies[];
extern char beNDMWStatusInfoRam_meta[];
void beNDMWStatusInfoRam_register();
void *beNDMWStatusInfoRam_getMetaCall();
}
extern "C" {
UnknownGenHolder *dtor_8032ADE0(UnknownGenHolder *object,short flags){
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
