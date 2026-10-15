#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_8010CBD4();
void *fn_8010DF8C();
void igGuiSystemRenderer_fieldInit();
void igRenderer_register();
extern char lbl_80494C54[];
extern char igGuiSystemRenderer_className[];
extern char igGuiSystemRenderer_vtable[];
extern char lbl_80497C9C[];
extern void *lbl_805621F4;
extern void *igGuiSystemRenderer_meta;
void *igGuiSystemRenderer_getMeta();
void *igGuiSystemRenderer_vtableRead();
void igGuiSystemRenderer_registerNow();
void igGuiSystemRenderer_register();
void *igGuiSystemRenderer_getMetaCall();
}
struct UnknownGenRoot8011010C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011010C(){fn_8006665C(this);}
};
struct UnknownGenObject8011010C_0 : UnknownGenRoot8011010C {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 inline ~UnknownGenObject8011010C_0(){unknown00=lbl_80497C9C;}
};
struct UnknownGenObject8011010C : UnknownGenObject8011010C_0 {
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 UnknownGenRefMember unknown14;
 UnknownGenRefMember unknown18;
 char unknown1C[4];
 inline ~UnknownGenObject8011010C(){unknown00=igGuiSystemRenderer_vtable;}
};
extern "C" {
void *fn_80110094(){
 if(!igGuiSystemRenderer_meta) igGuiSystemRenderer_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igGuiSystemRenderer_meta;
}
void *igGuiSystemRenderer_getMeta(){
 if(!igGuiSystemRenderer_meta || !(reinterpret_cast<unsigned int *>(igGuiSystemRenderer_meta)[0x24/4]&4)) igGuiSystemRenderer_registerNow();
 return igGuiSystemRenderer_meta;
}
void *igGuiSystemRenderer_vtableRead(){
 UnknownGenObject8011010C object;
 object.unknown00=lbl_80497C9C;
 object.unknown08.value=0;
 object.unknown00=igGuiSystemRenderer_vtable;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 object.unknown14.value=0;
 object.unknown18.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igGuiSystemRenderer_registerNow(){
 meta_registerNow((int)igGuiSystemRenderer_register);
}
void igGuiSystemRenderer_register(){
 fn_8010CBD4();
 meta_registerClass(0,(int)&igGuiSystemRenderer_meta,(int)igRenderer_register,(int)fn_8010DF8C,(int)igGuiSystemRenderer_getMetaCall,(int)igGuiSystemRenderer_className,28,(int)igGuiSystemRenderer_vtableRead,(int)igGuiSystemRenderer_fieldInit,0,(int)lbl_80494C54);
}
void *igGuiSystemRenderer_getMetaCall(){return igGuiSystemRenderer_getMeta();}
}
#pragma pop
