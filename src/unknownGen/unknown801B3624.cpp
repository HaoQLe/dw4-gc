#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void __dl__FPv(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void *fn_8011148C();
void fn_801AA6DC();
void igGroup_register();
void igSelfShadowShader_fieldInit();
void *igSelfShadowShader_getMeta();
void igSelfShadowShader_vtableRead();
extern char lbl_804ACE04[];
extern char igSelfShadowShader_className[];
extern void *igSelfShadowShader_meta;
void igSelfShadowShader_register();
void *igSelfShadowShader_getMetaCall();
}
extern "C" {
UnknownGenHolder *dtor_801B3624(UnknownGenHolder *object,short flags){
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
void igSelfShadowShader_registerNow(){
 meta_registerNow((int)igSelfShadowShader_register);
}
void igSelfShadowShader_register(){
 fn_801AA6DC();
 meta_registerClass(0,(int)&igSelfShadowShader_meta,(int)igGroup_register,(int)fn_8011148C,(int)igSelfShadowShader_getMetaCall,(int)igSelfShadowShader_className,232,(int)igSelfShadowShader_vtableRead,(int)igSelfShadowShader_fieldInit,0,(int)lbl_804ACE04);
}
void *igSelfShadowShader_getMetaCall(){return igSelfShadowShader_getMeta();}
}
#pragma pop
