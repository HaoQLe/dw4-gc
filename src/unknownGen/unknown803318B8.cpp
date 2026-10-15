#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void __dl__FPv(void *);
void beNDMWStatusCtrlDisk_fieldInit();
void *beNDMWStatusCtrlDisk_getMeta();
void beNDMWStatusCtrlDisk_vtableRead();
void beNDMWWindowCtrl_register();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_8032B8A4();
extern char beNDMWStatusCtrlDisk_className[];
extern char beNDMWStatusCtrlDisk_dependencies[];
extern char beNDMWStatusCtrlDisk_meta[];
void beNDMWStatusCtrlDisk_register();
void *beNDMWStatusCtrlDisk_getMetaCall();
}
extern "C" {
UnknownGenHolder *dtor_803318B8(UnknownGenHolder *object,short flags){
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
