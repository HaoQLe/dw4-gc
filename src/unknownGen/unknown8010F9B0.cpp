#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void __dl__FPv(void *);
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_8010CBD4();
void *fn_8010F4FC();
void igEventReceiver_register();
void igGuiSystem_fieldInit();
extern char igGuiSystem_dependencies[];
extern char igGuiSystem_className[];
extern char igGuiSystem_vtable[];
extern char igEventReceiver_vtable[];
extern void *lbl_805621F4;
extern void *igGuiSystem_meta;
void *igGuiSystem_getMeta();
void *igGuiSystem_vtableRead();
void igGuiSystem_arkRegister();
void igGuiSystem_register();
void *igGuiSystem_getMetaCall();
}
struct UnknownGenRoot8010FA28 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8010FA28(){igObject_construct(this);}
};
struct UnknownGenObject8010FA28 : UnknownGenRoot8010FA28 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 UnknownGenRefMember unknown14;
 UnknownGenRefMember unknown18;
 UnknownGenRefMember unknown1C;
 char unknown20[16];
 inline ~UnknownGenObject8010FA28(){unknown00=igGuiSystem_vtable;}
};
extern "C" {
void *fn_8010F9B0(){
 if(!igGuiSystem_meta) igGuiSystem_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igGuiSystem_meta;
}
void *igGuiSystem_getMeta(){
 if(!igGuiSystem_meta || !(reinterpret_cast<unsigned int *>(igGuiSystem_meta)[0x24/4]&4)) igGuiSystem_arkRegister();
 return igGuiSystem_meta;
}
void *igGuiSystem_vtableRead(){
 UnknownGenObject8010FA28 object;
 object.unknown00=igEventReceiver_vtable;
 object.unknown00=igGuiSystem_vtable;
 object.unknown08.value=0;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 object.unknown14.value=0;
 object.unknown18.value=0;
 object.unknown1C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
UnknownGenHolder *dtor_8010FBDC(UnknownGenHolder *object,short flags){
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
void igGuiSystem_arkRegister(){
 meta_registerNow((int)igGuiSystem_register);
}
void igGuiSystem_register(){
 fn_8010CBD4();
 meta_registerClass(0,(int)&igGuiSystem_meta,(int)igEventReceiver_register,(int)fn_8010F4FC,(int)igGuiSystem_getMetaCall,(int)igGuiSystem_className,36,(int)igGuiSystem_vtableRead,(int)igGuiSystem_fieldInit,0,(int)igGuiSystem_dependencies);
}
void *igGuiSystem_getMetaCall(){return igGuiSystem_getMeta();}
}
#pragma pop
