#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void __dl__FPv(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_800ABC8C();
void *fn_800AC294();
void igSpriteAttr_fieldInit();
void igVisualAttribute_register();
extern char igSpriteAttr_className[];
extern char igSpriteAttr_vtable[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern char lbl_8055E158[8];
extern void *igSpriteAttr_meta;
void *igSpriteAttr_getMeta();
void *igSpriteAttr_vtableRead();
void igSpriteAttr_registerNow();
void igSpriteAttr_register();
void *igSpriteAttr_getMetaCall();
}
struct UnknownGenRoot800B0704 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800B0704(){fn_8006665C(this);}
};
struct UnknownGenObject800B0704 : UnknownGenRoot800B0704 {
 char unknown04[20];
 UnknownGenRefMember unknown18;
 char unknown1C[4];
 inline ~UnknownGenObject800B0704(){unknown00=igSpriteAttr_vtable;}
};
extern "C" {
void *igSpriteAttr_getMeta(){
 if(!igSpriteAttr_meta || !(reinterpret_cast<unsigned int *>(igSpriteAttr_meta)[0x24/4]&4)) igSpriteAttr_registerNow();
 return igSpriteAttr_meta;
}
void *igSpriteAttr_vtableRead(){
 UnknownGenObject800B0704 object;
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=igSpriteAttr_vtable;
 object.unknown18.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
UnknownGenHolder *dtor_800B07A4(UnknownGenHolder *object,short flags){
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
void igSpriteAttr_registerNow(){
 meta_registerNow((int)igSpriteAttr_register);
}
void igSpriteAttr_register(){
 fn_800ABC8C();
 meta_registerClass(0,(int)&igSpriteAttr_meta,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igSpriteAttr_getMetaCall,(int)igSpriteAttr_className,32,(int)igSpriteAttr_vtableRead,(int)igSpriteAttr_fieldInit,0,(int)lbl_8055E158);
}
void *igSpriteAttr_getMetaCall(){return igSpriteAttr_getMeta();}
}
#pragma pop
