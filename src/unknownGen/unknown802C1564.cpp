#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void __dl__FPv(void *);
void beBaseInfoRam_register();
void beParticleCtrl2InfoRam_fieldInit();
void *beParticleCtrl2InfoRam_getMeta();
void beParticleCtrl2InfoRam_vtableRead();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B2B2C();
extern char beParticleCtrl2InfoRam_className[];
extern char beParticleCtrl2InfoRam_dependencies[];
extern char beParticleCtrl2InfoRam_meta[];
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
}
#pragma pop
