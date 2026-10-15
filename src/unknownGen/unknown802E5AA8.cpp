#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void __dl__FPv(void *);
void beAction2InfoRam_fieldInit();
void *beAction2InfoRam_getMeta();
void beAction2InfoRam_vtableRead();
void beBaseInfoRam_register();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B2B2C();
extern char beAction2InfoRam_className[];
extern char beAction2InfoRam_dependencies[];
extern char beAction2InfoRam_meta[];
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
void beAction2InfoRam_arkRegister(){
 meta_registerNow((int)beAction2InfoRam_register);
}
void beAction2InfoRam_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beAction2InfoRam_meta,(int)beBaseInfoRam_register,(int)fn_802B2B2C,(int)beAction2InfoRam_getMetaCall,(int)beAction2InfoRam_className,60,(int)beAction2InfoRam_vtableRead,(int)beAction2InfoRam_fieldInit,0,(int)beAction2InfoRam_dependencies);
}
void *beAction2InfoRam_getMetaCall(){return beAction2InfoRam_getMeta();}
}
#pragma pop
