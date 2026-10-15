#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void __dl__FPv(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_8010CBD4();
void igScalerModel_fieldInit();
void igSimpleChildHolderModel_register();
extern char igScalerModel_className[];
extern char igModel_vtable[];
extern char igScalerModel_vtable[];
extern char igSimpleChildHolderModel_vtable[];
extern char igGuiComponentModel_vtable[];
extern void *igSimpleChildHolderModel_meta;
extern void *igScalerModel_meta;
extern void *igGuiComponentAspect_meta;
void *igScalerModel_getMeta();
void *igScalerModel_vtableRead();
void igScalerModel_registerNow();
void igScalerModel_register();
void *igScalerModel_getMetaCall();
void *fn_8010DD30();
}
struct UnknownGenRoot8010DB70 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8010DB70(){igObject_construct(this);}
};
struct UnknownGenObject8010DB70_0 : UnknownGenRoot8010DB70 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 inline ~UnknownGenObject8010DB70_0(){unknown00=igModel_vtable;}
};
struct UnknownGenObject8010DB70_1 : UnknownGenObject8010DB70_0 {
 inline ~UnknownGenObject8010DB70_1(){unknown00=igGuiComponentModel_vtable;}
};
struct UnknownGenObject8010DB70_2 : UnknownGenObject8010DB70_1 {
 char unknown0C[24];
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject8010DB70_2(){unknown00=igSimpleChildHolderModel_vtable;}
};
struct UnknownGenObject8010DB70 : UnknownGenObject8010DB70_2 {
 char unknown28[24];
 inline ~UnknownGenObject8010DB70(){unknown00=igScalerModel_vtable;}
};
extern "C" {
UnknownGenHolder *dtor_8010DAB8(UnknownGenHolder *object,short flags){
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
void *fn_8010DB2C(){return igGuiComponentAspect_meta;}
void *igScalerModel_getMeta(){
 if(!igScalerModel_meta || !(reinterpret_cast<unsigned int *>(igScalerModel_meta)[0x24/4]&4)) igScalerModel_registerNow();
 return igScalerModel_meta;
}
void *igScalerModel_vtableRead(){
 UnknownGenObject8010DB70 object;
 object.unknown00=igModel_vtable;
 object.unknown08.value=0;
 object.unknown00=igGuiComponentModel_vtable;
 object.unknown00=igSimpleChildHolderModel_vtable;
 object.unknown24.value=0;
 object.unknown00=igScalerModel_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igScalerModel_registerNow(){
 meta_registerNow((int)igScalerModel_register);
}
void igScalerModel_register(){
 fn_8010CBD4();
 meta_registerClass(0,(int)&igScalerModel_meta,(int)igSimpleChildHolderModel_register,(int)fn_8010DD30,(int)igScalerModel_getMetaCall,(int)igScalerModel_className,64,(int)igScalerModel_vtableRead,(int)igScalerModel_fieldInit,0,0);
}
void *igScalerModel_getMetaCall(){return igScalerModel_getMeta();}
void *fn_8010DD30(){return igSimpleChildHolderModel_meta;}
}
#pragma pop
