#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80024180();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_8010CBD4();
void igGuiComponent_fieldInit();
void igObjectList_register();
void igObject_register();
extern char igDataList_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igGuiComponentList_className[];
extern char igGuiComponent_dependencies[];
extern char igGuiComponent_className[];
extern char igGuiComponent_vtable[];
extern char igGuiComponentList_vtable[];
extern char lbl_804974E4[];
extern char igGuiComponentList_dependencies[8];
extern void *lbl_805621F4;
extern void *igGuiComponentList_meta;
extern void *igGuiComponent_meta;
void *igGuiComponentList_getMeta();
void *igGuiComponentList_vtableRead();
void igGuiComponentList_arkRegister();
void igGuiComponentList_register();
void *igGuiComponentList_getMetaCall();
void *igGuiComponent_getMeta();
void *igGuiComponent_vtableRead();
void igGuiComponent_arkRegister();
void igGuiComponent_register();
void *igGuiComponent_getMetaCall();
}
struct UnknownGenObject80111BB0_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot80111D4C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80111D4C(){igObject_construct(this);}
};
struct UnknownGenObject80111D4C : UnknownGenRoot80111D4C {
 char unknown04[8];
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 UnknownGenRefMember unknown14;
 char unknown18[4];
 UnknownGenRefMember unknown1C;
 char unknown20[8];
 inline ~UnknownGenObject80111D4C(){unknown00=igGuiComponent_vtable;}
};
extern "C" {
void *fn_80111B38(){
 if(!igGuiComponentList_meta) igGuiComponentList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igGuiComponentList_meta;
}
}
#pragma pop
