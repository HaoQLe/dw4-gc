#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void __dl__FPv(void *);
void beBaseInfoRam_register();
void beParticleCtrl2InfoRam_fieldInit();
void *beParticleCtrl2InfoRam_getMeta();
void beParticleCtrl2InfoRam_vtableRead();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B2B2C();
extern char lbl_8041E490[];
extern char lbl_804D0058[];
extern char lbl_80534A74[];
void beParticleCtrl2InfoRam_register();
void *beParticleCtrl2InfoRam_getMetaCall();
}
extern "C" {
UnknownGenHolder *dtor_802C1564(UnknownGenHolder *object,short flags){
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
void fn_802C15D8(){
 fn_80066188((int)beParticleCtrl2InfoRam_register);
}
void beParticleCtrl2InfoRam_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534A74,(int)beBaseInfoRam_register,(int)fn_802B2B2C,(int)beParticleCtrl2InfoRam_getMetaCall,(int)lbl_8041E490,56,(int)beParticleCtrl2InfoRam_vtableRead,(int)beParticleCtrl2InfoRam_fieldInit,0,(int)lbl_804D0058);
}
void *beParticleCtrl2InfoRam_getMetaCall(){return beParticleCtrl2InfoRam_getMeta();}
}
#pragma pop
