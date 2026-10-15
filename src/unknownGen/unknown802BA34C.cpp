#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void __dl__FPv(void *);
void beBaseInfoData_register();
void beSelectCtrlInfoRamData_fieldInit();
void *beSelectCtrlInfoRamData_getMeta();
void beSelectCtrlInfoRamData_vtableRead();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B8770();
extern char beSelectCtrlInfoRamData_className[];
extern char lbl_804CF6C8[];
extern char beSelectCtrlInfoRamData_meta[];
void beSelectCtrlInfoRamData_register();
void *beSelectCtrlInfoRamData_getMetaCall();
}
extern "C" {
UnknownGenHolder *dtor_802BA34C(UnknownGenHolder *object,short flags){
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
void beSelectCtrlInfoRamData_registerNow(){
 meta_registerNow((int)beSelectCtrlInfoRamData_register);
}
void beSelectCtrlInfoRamData_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beSelectCtrlInfoRamData_meta,(int)beBaseInfoData_register,(int)fn_802B8770,(int)beSelectCtrlInfoRamData_getMetaCall,(int)beSelectCtrlInfoRamData_className,32,(int)beSelectCtrlInfoRamData_vtableRead,(int)beSelectCtrlInfoRamData_fieldInit,0,(int)lbl_804CF6C8);
}
void *beSelectCtrlInfoRamData_getMetaCall(){return beSelectCtrlInfoRamData_getMeta();}
}
#pragma pop
