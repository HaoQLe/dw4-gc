#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void __dl__FPv(void *);
void beBaseInfoRam_register();
void beGeneraterInfoRam_fieldInit();
void *beGeneraterInfoRam_getMeta();
void beGeneraterInfoRam_vtableRead();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B2B2C();
extern char beGeneraterInfoRam_className[];
extern char beGeneraterInfoRam_dependencies[];
extern char beGeneraterInfoRam_meta[];
void beGeneraterInfoRam_register();
void *beGeneraterInfoRam_getMetaCall();
}
extern "C" {
UnknownGenHolder *dtor_802D6DBC(UnknownGenHolder *object,short flags){
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
