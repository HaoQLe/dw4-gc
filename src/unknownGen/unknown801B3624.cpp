#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_800A325C(void *);
void *fn_8011148C();
void fn_801AA6DC();
void igGroup_register();
void igSelfShadowShader_fieldInit();
void *igSelfShadowShader_getMeta();
void igSelfShadowShader_vtableRead();
extern char lbl_804ACE04[];
extern char lbl_804ACE48[];
extern void *lbl_80564968;
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
  if(flags>0) fn_800A325C(object);
 }
 return object;
}
void fn_801B3698(){
 fn_80066188((int)igSelfShadowShader_register);
}
void igSelfShadowShader_register(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564968,(int)igGroup_register,(int)fn_8011148C,(int)igSelfShadowShader_getMetaCall,(int)lbl_804ACE48,232,(int)igSelfShadowShader_vtableRead,(int)igSelfShadowShader_fieldInit,0,(int)lbl_804ACE04);
}
void *igSelfShadowShader_getMetaCall(){return igSelfShadowShader_getMeta();}
}
#pragma pop
