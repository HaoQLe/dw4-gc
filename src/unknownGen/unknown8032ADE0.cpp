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
void beNDMWStatusInfoRam_arkRegister(){
 meta_registerNow((int)beNDMWStatusInfoRam_register);
}
void beNDMWStatusInfoRam_register(){
 fn_803250AC();
 meta_registerClass(0,(int)beNDMWStatusInfoRam_meta,(int)beBaseInfoRam_register,(int)fn_802B2B2C,(int)beNDMWStatusInfoRam_getMetaCall,(int)beNDMWStatusInfoRam_className,48,(int)beNDMWStatusInfoRam_vtableRead,(int)beNDMWStatusInfoRam_fieldInit,0,(int)beNDMWStatusInfoRam_dependencies);
}
void *beNDMWStatusInfoRam_getMetaCall(){return beNDMWStatusInfoRam_getMeta();}
}
#pragma pop
