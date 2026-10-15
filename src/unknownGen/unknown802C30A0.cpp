#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void __dl__FPv(void *);
void beBaseInfoRam_register();
void beNumberCtrlInfoRam_fieldInit();
void *beNumberCtrlInfoRam_getMeta();
void beNumberCtrlInfoRam_vtableRead();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B2B2C();
extern char beNumberCtrlInfoRam_className[];
extern char beNumberCtrlInfoRam_dependencies[];
extern char beNumberCtrlInfoRam_meta[];
void beNumberCtrlInfoRam_register();
void *beNumberCtrlInfoRam_getMetaCall();
}
extern "C" {
UnknownGenHolder *dtor_802C30A0(UnknownGenHolder *object,short flags){
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
