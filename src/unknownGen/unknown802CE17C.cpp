#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void __dl__FPv(void *);
void beMessenger_fieldInit();
void *beMessenger_getMeta();
void beMessenger_vtableRead();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void *fn_80284550();
void fn_802B1AC8();
void igInfoManager_register();
extern char beMessenger_className[];
extern char beMessenger_dependencies[];
extern char beMessenger_meta[];
void beMessenger_register();
void *beMessenger_getMetaCall();
}
extern "C" {
UnknownGenHolder *dtor_802CE17C(UnknownGenHolder *object,short flags){
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
