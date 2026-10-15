#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void __dl__FPv(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_800ABC8C();
void igTextureAttr_register();
void igTextureCubeAttr_fieldInit();
void *igTextureCubeAttr_getMeta();
void igTextureCubeAttr_vtableRead();
extern char igTextureCubeAttr_className[];
extern char igTextureCubeAttr_dependencies[8];
extern void *igTextureCubeAttr_meta;
extern void *igTextureAttr_meta;
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
}
#pragma pop
