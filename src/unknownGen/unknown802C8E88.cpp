#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void __dl__FPv(void *);
void beBaseInfoData_register();
void beModelCtrlInfoRamData_fieldInit();
void *beModelCtrlInfoRamData_getMeta();
void beModelCtrlInfoRamData_vtableRead();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B8770();
extern char beModelCtrlInfoRamData_className[];
extern char beModelCtrlInfoRamData_dependencies[];
extern char beModelCtrlInfoRamData_meta[];
void beModelCtrlInfoRamData_register();
void *beModelCtrlInfoRamData_getMetaCall();
}
extern "C" {
UnknownGenHolder *dtor_802C8E88(UnknownGenHolder *object,short flags){
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
