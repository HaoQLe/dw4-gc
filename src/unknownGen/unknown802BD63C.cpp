#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void __dl__FPv(void *);
void beSaveApi_register();
void *beSvConnectCheck_getMeta();
void beSvConnectCheck_vtableRead();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802BD764();
extern char beSvConnectCheck_className[];
extern char beSvConnectCheck_meta[];
void beSvConnectCheck_register();
void *beSvConnectCheck_getMetaCall();
}
extern "C" {
UnknownGenHolder *dtor_802BD63C(UnknownGenHolder *object,short flags){
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
