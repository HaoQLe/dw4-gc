#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void __dl__FPv(void *);
void arkRegister__Q33Gap4Core10igRegistryFv();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void fn_8006665C(void *);
extern char igRegistry_vtable[];
extern void *igRegistry_meta;
extern void *lbl_805621F4;
}
struct UnknownGenRoot80026B8C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80026B8C(){fn_8006665C(this);}
};
struct UnknownGenObject80026B8C : UnknownGenRoot80026B8C {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 char unknown14[4];
 inline ~UnknownGenObject80026B8C(){unknown00=igRegistry_vtable;}
};
extern "C" {
void *igRegistry_create(void *object){
 arkRegister__Q33Gap4Core10igRegistryFv();
 return meta_createInstance(igRegistry_meta,object);
}
void *fn_80026B14(){
 if(!igRegistry_meta) igRegistry_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igRegistry_meta;
}
void *igRegistry_getMeta(){
 if(!igRegistry_meta || !(reinterpret_cast<unsigned int *>(igRegistry_meta)[0x24/4]&4)) arkRegister__Q33Gap4Core10igRegistryFv();
 return igRegistry_meta;
}
void *igRegistry_vtableRead(){
 UnknownGenObject80026B8C object;
 object.unknown00=igRegistry_vtable;
 object.unknown08.value=0;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
UnknownGenHolder *dtor_80026C8C(UnknownGenHolder *object,short flags){
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
