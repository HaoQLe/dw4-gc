#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void __dl__FPv(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void *fn_8013AFE4();
void igGenerateMacroTexture_fieldInit();
void *igGenerateMacroTexture_getMeta();
void igGenerateMacroTexture_vtableRead();
void igOptTraverseGraph_register();
extern char lbl_8049EB58[];
extern char lbl_8049EB68[];
extern void *lbl_805641F8;
void igGenerateMacroTexture_register();
void *igGenerateMacroTexture_getMetaCall();
}
extern "C" {
UnknownGenHolder *fn_801477D4(UnknownGenHolder *object,short flags){
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
void fn_80147848(){
 fn_80066188((int)igGenerateMacroTexture_register);
}
void igGenerateMacroTexture_register(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_805641F8,(int)igOptTraverseGraph_register,(int)fn_8013AFE4,(int)igGenerateMacroTexture_getMetaCall,(int)lbl_8049EB68,108,(int)igGenerateMacroTexture_vtableRead,(int)igGenerateMacroTexture_fieldInit,0,(int)lbl_8049EB58);
}
void *igGenerateMacroTexture_getMetaCall(){return igGenerateMacroTexture_getMeta();}
}
#pragma pop
