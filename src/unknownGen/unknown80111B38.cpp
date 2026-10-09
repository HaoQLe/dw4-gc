#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80024180();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_8010CBD4();
void igGuiComponent_fieldInit();
void igObjectList_register();
void igObject_register();
extern char lbl_80472FA0[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_80495148[];
extern char lbl_8049515C[];
extern char lbl_80495174[];
extern char lbl_8049659C[];
extern char lbl_80497480[];
extern char lbl_804974E4[];
extern char lbl_8055F0F4[8];
extern void *lbl_805621F4;
extern void *lbl_8056374C;
extern void *lbl_80563750;
void *igGuiComponentList_getMeta();
void *igGuiComponentList_vtableRead();
void fn_80111C20();
void igGuiComponentList_register();
void *igGuiComponentList_getMetaCall();
void *igGuiComponent_getMeta();
void *igGuiComponent_vtableRead();
void fn_80111E84();
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
 inline UnknownGenRoot80111D4C(){fn_8006665C(this);}
};
struct UnknownGenObject80111D4C : UnknownGenRoot80111D4C {
 char unknown04[8];
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 UnknownGenRefMember unknown14;
 char unknown18[4];
 UnknownGenRefMember unknown1C;
 char unknown20[8];
 inline ~UnknownGenObject80111D4C(){unknown00=lbl_8049659C;}
};
extern "C" {
void *fn_80111B38(){
 if(!lbl_8056374C) lbl_8056374C=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_8056374C;
}
void *igGuiComponentList_getMeta(){
 if(!lbl_8056374C || !(reinterpret_cast<unsigned int *>(lbl_8056374C)[0x24/4]&4)) fn_80111C20();
 return lbl_8056374C;
}
void *igGuiComponentList_vtableRead(){
 UnknownGenObject80111BB0_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_804974E4;
 object.unknown00=lbl_80497480;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80111C20(){
 fn_80066188((int)igGuiComponentList_register);
}
void igGuiComponentList_register(){
 fn_8010CBD4();
 fn_80066204(0,(int)&lbl_8056374C,(int)igObjectList_register,(int)fn_80024180,(int)igGuiComponentList_getMetaCall,(int)lbl_80495148,20,(int)igGuiComponentList_vtableRead,0,0,(int)lbl_8055F0F4);
}
void *igGuiComponentList_getMetaCall(){return igGuiComponentList_getMeta();}
void *fn_80111CD4(){
 if(!lbl_80563750) lbl_80563750=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80563750;
}
void *igGuiComponent_getMeta(){
 if(!lbl_80563750 || !(reinterpret_cast<unsigned int *>(lbl_80563750)[0x24/4]&4)) fn_80111E84();
 return lbl_80563750;
}
void *igGuiComponent_vtableRead(){
 UnknownGenObject80111D4C object;
 object.unknown00=lbl_8049659C;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 object.unknown14.value=0;
 object.unknown1C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80111E84(){
 fn_80066188((int)igGuiComponent_register);
}
void igGuiComponent_register(){
 fn_8010CBD4();
 fn_80066204(0,(int)&lbl_80563750,(int)igObject_register,(int)fn_800237D0,(int)igGuiComponent_getMetaCall,(int)lbl_80495174,36,(int)igGuiComponent_vtableRead,(int)igGuiComponent_fieldInit,0,(int)lbl_8049515C);
}
void *igGuiComponent_getMetaCall(){return igGuiComponent_getMeta();}
}
#pragma pop
