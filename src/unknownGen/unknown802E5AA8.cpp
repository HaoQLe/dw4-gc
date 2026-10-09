#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void __dl__FPv(void *);
void beAction2InfoRam_fieldInit();
void *beAction2InfoRam_getMeta();
void beAction2InfoRam_vtableRead();
void beBaseInfoRam_register();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B2B2C();
extern char lbl_80420FB8[];
extern char lbl_804D306C[];
extern char lbl_805357BC[];
void beAction2InfoRam_register();
void *beAction2InfoRam_getMetaCall();
}
extern "C" {
UnknownGenHolder *dtor_802E5AA8(UnknownGenHolder *object,short flags){
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
void fn_802E5B1C(){
 fn_80066188((int)beAction2InfoRam_register);
}
void beAction2InfoRam_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_805357BC,(int)beBaseInfoRam_register,(int)fn_802B2B2C,(int)beAction2InfoRam_getMetaCall,(int)lbl_80420FB8,60,(int)beAction2InfoRam_vtableRead,(int)beAction2InfoRam_fieldInit,0,(int)lbl_804D306C);
}
void *beAction2InfoRam_getMetaCall(){return beAction2InfoRam_getMeta();}
}
#pragma pop
