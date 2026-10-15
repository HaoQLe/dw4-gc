#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void __dl__FPv(void *);
void beNDMWStatusInfoWork_fieldInit();
void *beNDMWStatusInfoWork_getMeta();
void beNDMWStatusInfoWork_vtableRead();
void *fn_800237D0();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void igObject_register();
extern char beNDMWStatusInfoWork_className[];
extern char beNDMWStatusInfoWork_dependencies[];
extern char beNDMWStatusInfoWork_meta[];
void beNDMWStatusInfoWork_register();
void *beNDMWStatusInfoWork_getMetaCall();
}
extern "C" {
UnknownGenHolder *dtor_8032B240(UnknownGenHolder *object,short flags){
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
