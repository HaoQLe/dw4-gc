#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beParticleCtrl2InfoWork_fieldInit();
void *beParticleCtrl2InfoWork_getMeta();
void beParticleCtrl2InfoWork_vtableRead();
void *fn_800237D0();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_800A325C(void *);
void fn_802B1AC8();
void igObject_register();
extern char lbl_8041E4C4[];
extern char lbl_804D0098[];
extern char lbl_80534A84[];
void beParticleCtrl2InfoWork_register();
void *beParticleCtrl2InfoWork_getMetaCall();
}
extern "C" {
UnknownGenHolder *dtor_802C18D8(UnknownGenHolder *object,short flags){
 if(object){
  UnknownGenValue *value=object->unknown00;
  if(value){
   --value->unknown04;
   if(!(reinterpret_cast<volatile unsigned int *>(value)[1]&0x7FFFFF)) fn_80066E1C(value);
  }
  if(flags>0) fn_800A325C(object);
 }
 return object;
}
void fn_802C194C(){
 fn_80066188((int)beParticleCtrl2InfoWork_register);
}
void beParticleCtrl2InfoWork_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534A84,(int)igObject_register,(int)fn_800237D0,(int)beParticleCtrl2InfoWork_getMetaCall,(int)lbl_8041E4C4,24,(int)beParticleCtrl2InfoWork_vtableRead,(int)beParticleCtrl2InfoWork_fieldInit,0,(int)lbl_804D0098);
}
void *beParticleCtrl2InfoWork_getMetaCall(){return beParticleCtrl2InfoWork_getMeta();}
}
#pragma pop
