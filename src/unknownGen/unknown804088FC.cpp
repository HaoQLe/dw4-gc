#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void *fn_8010DF8C();
void fn_80402E28();
void igLogoRenderer_fieldInit();
void igRenderer_register();
extern char igLogoRenderer_className[];
extern char lbl_80497C9C[];
extern char lbl_804F0E74[];
extern char igLogoRenderer_vtable[];
extern void *igLogoRenderer_meta;
void *igLogoRenderer_getMeta();
void *igLogoRenderer_vtableRead();
void igLogoRenderer_registerNow();
void igLogoRenderer_register();
void *igLogoRenderer_getMetaCall();
}
struct UnknownGenRoot80408988 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80408988(){fn_8006665C(this);}
};
struct UnknownGenObject80408988_0 : UnknownGenRoot80408988 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 inline ~UnknownGenObject80408988_0(){unknown00=lbl_80497C9C;}
};
struct UnknownGenObject80408988 : UnknownGenObject80408988_0 {
 char unknown0C[12];
 UnknownGenRefMember unknown18;
 UnknownGenRefMember unknown1C;
 UnknownGenRefMember unknown20;
 char unknown24[4];
 inline ~UnknownGenObject80408988(){unknown00=igLogoRenderer_vtable;}
};
extern "C" {
void *igLogoRenderer_create(void *object){
 igLogoRenderer_registerNow();
 return meta_createInstance(igLogoRenderer_meta,object);
}
void *igLogoRenderer_getMeta(){
 if(!igLogoRenderer_meta || !(reinterpret_cast<unsigned int *>(igLogoRenderer_meta)[0x24/4]&4)) igLogoRenderer_registerNow();
 return igLogoRenderer_meta;
}
void *igLogoRenderer_vtableRead(){
 UnknownGenObject80408988 object;
 object.unknown00=lbl_80497C9C;
 object.unknown08.value=0;
 object.unknown00=igLogoRenderer_vtable;
 object.unknown18.value=0;
 object.unknown1C.value=0;
 object.unknown20.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igLogoRenderer_registerNow(){
 meta_registerNow((int)igLogoRenderer_register);
}
void igLogoRenderer_register(){
 fn_80402E28();
 meta_registerClass(0,(int)&igLogoRenderer_meta,(int)igRenderer_register,(int)fn_8010DF8C,(int)igLogoRenderer_getMetaCall,(int)igLogoRenderer_className,40,(int)igLogoRenderer_vtableRead,(int)igLogoRenderer_fieldInit,0,(int)lbl_804F0E74);
}
void *igLogoRenderer_getMetaCall(){return igLogoRenderer_getMeta();}
}
#pragma pop
