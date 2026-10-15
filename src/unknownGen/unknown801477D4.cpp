#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void __dl__FPv(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void *fn_8013AFE4();
void igGenerateMacroTexture_fieldInit();
void *igGenerateMacroTexture_getMeta();
void igGenerateMacroTexture_vtableRead();
void igOptTraverseGraph_register();
extern char lbl_8049EB58[];
extern char igGenerateMacroTexture_className[];
extern void *igGenerateMacroTexture_meta;
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
void igGenerateMacroTexture_registerNow(){
 meta_registerNow((int)igGenerateMacroTexture_register);
}
void igGenerateMacroTexture_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igGenerateMacroTexture_meta,(int)igOptTraverseGraph_register,(int)fn_8013AFE4,(int)igGenerateMacroTexture_getMetaCall,(int)igGenerateMacroTexture_className,108,(int)igGenerateMacroTexture_vtableRead,(int)igGenerateMacroTexture_fieldInit,0,(int)lbl_8049EB58);
}
void *igGenerateMacroTexture_getMetaCall(){return igGenerateMacroTexture_getMeta();}
}
#pragma pop
