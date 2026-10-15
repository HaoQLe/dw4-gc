#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void __dl__FPv(void *);
void beParticleCtrl2InfoWork_fieldInit();
void *beParticleCtrl2InfoWork_getMeta();
void beParticleCtrl2InfoWork_vtableRead();
void *fn_800237D0();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void igObject_register();
extern char beParticleCtrl2InfoWork_className[];
extern char beParticleCtrl2InfoWork_dependencies[];
extern char beParticleCtrl2InfoWork_meta[];
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
  if(flags>0) __dl__FPv(object);
 }
 return object;
}
}
#pragma pop
