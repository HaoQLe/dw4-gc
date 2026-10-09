#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void __dl__FPv(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_800ABC8C();
void igTextureAttr_register();
void igTextureCubeAttr_fieldInit();
void *igTextureCubeAttr_getMeta();
void igTextureCubeAttr_vtableRead();
extern char lbl_80478468[];
extern char lbl_8055E018[8];
extern void *lbl_80562528;
extern void *lbl_80562554;
void igTextureCubeAttr_register();
void *igTextureCubeAttr_getMetaCall();
void *igTextureCubeAttr_parentMeta();
}
extern "C" {
void *fn_800AECCC(int p0){
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=(void *)0;
 return (void *)p0;
}
UnknownGenHolder *dtor_800AECD8(UnknownGenHolder *object,short flags){
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
void fn_800AED4C(){
 fn_80066188((int)igTextureCubeAttr_register);
}
void igTextureCubeAttr_register(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_80562528,(int)igTextureAttr_register,(int)igTextureCubeAttr_parentMeta,(int)igTextureCubeAttr_getMetaCall,(int)lbl_80478468,104,(int)igTextureCubeAttr_vtableRead,(int)igTextureCubeAttr_fieldInit,0,(int)lbl_8055E018);
}
void *igTextureCubeAttr_getMetaCall(){return igTextureCubeAttr_getMeta();}
void *igTextureCubeAttr_parentMeta(){return lbl_80562554;}
}
#pragma pop
