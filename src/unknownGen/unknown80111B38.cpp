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
extern char lbl_8049515C[];
extern char igGuiComponent_className[];
extern char igGuiComponent_vtable[];
extern char igGuiComponentList_vtable[];
extern char lbl_804974E4[];
extern char lbl_8055F0F4[8];
extern void *lbl_805621F4;
extern void *igGuiComponentList_meta;
extern void *igGuiComponent_meta;
void *igGuiComponentList_getMeta();
void *igGuiComponentList_vtableRead();
void igGuiComponentList_registerNow();
void igGuiComponentList_register();
void *igGuiComponentList_getMetaCall();
void *igGuiComponent_getMeta();
void *igGuiComponent_vtableRead();
void igGuiComponent_registerNow();
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
void *igGuiComponentList_getMeta(){
 if(!igGuiComponentList_meta || !(reinterpret_cast<unsigned int *>(igGuiComponentList_meta)[0x24/4]&4)) igGuiComponentList_registerNow();
 return igGuiComponentList_meta;
}
void *igGuiComponentList_vtableRead(){
 UnknownGenObject80111BB0_0 object;
 igObject_construct(&object);
 object.unknown00=igDataList_vtable;
 object.unknown00=lbl_80476E0C;
 object.unknown00=igObjectList_vtable;
 object.unknown00=lbl_804974E4;
 object.unknown00=igGuiComponentList_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igGuiComponentList_registerNow(){
 meta_registerNow((int)igGuiComponentList_register);
}
void igGuiComponentList_register(){
 fn_8010CBD4();
 meta_registerClass(0,(int)&igGuiComponentList_meta,(int)igObjectList_register,(int)fn_80024180,(int)igGuiComponentList_getMetaCall,(int)igGuiComponentList_className,20,(int)igGuiComponentList_vtableRead,0,0,(int)lbl_8055F0F4);
}
void *igGuiComponentList_getMetaCall(){return igGuiComponentList_getMeta();}
void *fn_80111CD4(){
 if(!igGuiComponent_meta) igGuiComponent_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igGuiComponent_meta;
}
void *igGuiComponent_getMeta(){
 if(!igGuiComponent_meta || !(reinterpret_cast<unsigned int *>(igGuiComponent_meta)[0x24/4]&4)) igGuiComponent_registerNow();
 return igGuiComponent_meta;
}
void *igGuiComponent_vtableRead(){
 UnknownGenObject80111D4C object;
 object.unknown00=igGuiComponent_vtable;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 object.unknown14.value=0;
 object.unknown1C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igGuiComponent_registerNow(){
 meta_registerNow((int)igGuiComponent_register);
}
void igGuiComponent_register(){
 fn_8010CBD4();
 meta_registerClass(0,(int)&igGuiComponent_meta,(int)igObject_register,(int)fn_800237D0,(int)igGuiComponent_getMetaCall,(int)igGuiComponent_className,36,(int)igGuiComponent_vtableRead,(int)igGuiComponent_fieldInit,0,(int)lbl_8049515C);
}
void *igGuiComponent_getMetaCall(){return igGuiComponent_getMeta();}
}
#pragma pop
