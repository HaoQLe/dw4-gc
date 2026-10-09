#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void __dl__FPv(void *);
void beBaseInfoRam_register();
void beGeneraterInfoRam_fieldInit();
void *beGeneraterInfoRam_getMeta();
void beGeneraterInfoRam_vtableRead();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B2B2C();
extern char lbl_80420014[];
extern char lbl_804D1D80[];
extern char lbl_80535280[];
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
void fn_802D6E30(){
 fn_80066188((int)beGeneraterInfoRam_register);
}
void beGeneraterInfoRam_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80535280,(int)beBaseInfoRam_register,(int)fn_802B2B2C,(int)beGeneraterInfoRam_getMetaCall,(int)lbl_80420014,48,(int)beGeneraterInfoRam_vtableRead,(int)beGeneraterInfoRam_fieldInit,0,(int)lbl_804D1D80);
}
void *beGeneraterInfoRam_getMetaCall(){return beGeneraterInfoRam_getMeta();}
}
#pragma pop
