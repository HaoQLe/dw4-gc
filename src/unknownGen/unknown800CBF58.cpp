#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_800CAEE0();
void igControllerManager_register();
void igController_register();
void *igGamecubeControllerManager_getMetaCall();
void igGamecubeController_fieldInit();
void *igGamecubeController_getMetaCall();
extern char lbl_8047FFA4[];
extern char lbl_80480130[];
extern char lbl_80480338[];
extern char lbl_804803A0[];
extern char lbl_80480590[];
extern char lbl_804805F8[];
extern char lbl_80480E60[];
extern char lbl_8055E9D4[8];
extern void *lbl_80562C08;
extern void *lbl_80562C14;
extern void *lbl_80562C50;
extern void *lbl_80562C54;
void *igGamecubeControllerManager_vtableRead();
void fn_800CC038();
void igGamecubeControllerManager_register();
void *igGamecubeControllerManager_parentMeta();
void *igGamecubeController_vtableRead();
void fn_800CC1E4();
void igGamecubeController_register();
void *igGamecubeController_parentMeta();
}
struct UnknownGenRoot800CBF94 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800CBF94(){fn_8006665C(this);}
};
struct UnknownGenObject800CBF94_0 : UnknownGenRoot800CBF94 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 inline ~UnknownGenObject800CBF94_0(){unknown00=lbl_80480590;}
};
struct UnknownGenObject800CBF94 : UnknownGenObject800CBF94_0 {
 char unknown0C[4];
 inline ~UnknownGenObject800CBF94(){unknown00=lbl_80480338;}
};
struct UnknownGenRoot800CC144 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800CC144(){fn_8006665C(this);}
};
struct UnknownGenObject800CC144 : UnknownGenRoot800CC144 {
 char unknown04[36];
 UnknownGenRefMember unknown28;
 char unknown2C[20];
 inline ~UnknownGenObject800CC144(){unknown00=lbl_804803A0;}
};
extern "C" {
void *igGamecubeControllerManager_getMeta(){
 if(!lbl_80562C50 || !(reinterpret_cast<unsigned int *>(lbl_80562C50)[0x24/4]&4)) fn_800CC038();
 return lbl_80562C50;
}
void *igGamecubeControllerManager_vtableRead(){
 UnknownGenObject800CBF94 object;
 object.unknown00=lbl_80480E60;
 object.unknown00=lbl_80480590;
 object.unknown08.value=0;
 object.unknown00=lbl_80480338;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800CC038(){
 fn_80066188((int)igGamecubeControllerManager_register);
}
void igGamecubeControllerManager_register(){
 fn_800CAEE0();
 fn_80066204(0,(int)&lbl_80562C50,(int)igControllerManager_register,(int)igGamecubeControllerManager_parentMeta,(int)igGamecubeControllerManager_getMetaCall,(int)lbl_8047FFA4,12,(int)igGamecubeControllerManager_vtableRead,0,0,0);
}
void *igGamecubeControllerManager_parentMeta(){return lbl_80562C08;}
void *fn_800CC0D0(void *object){
 fn_800CC1E4();
 return fn_8006546C(lbl_80562C54,object);
}
void *igGamecubeController_getMeta(){
 if(!lbl_80562C54 || !(reinterpret_cast<unsigned int *>(lbl_80562C54)[0x24/4]&4)) fn_800CC1E4();
 return lbl_80562C54;
}
void *igGamecubeController_vtableRead(){
 UnknownGenObject800CC144 object;
 object.unknown00=lbl_80480E60;
 object.unknown00=lbl_804805F8;
 object.unknown00=lbl_804803A0;
 object.unknown28.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800CC1E4(){
 fn_80066188((int)igGamecubeController_register);
}
void igGamecubeController_register(){
 fn_800CAEE0();
 fn_80066204(0,(int)&lbl_80562C54,(int)igController_register,(int)igGamecubeController_parentMeta,(int)igGamecubeController_getMetaCall,(int)lbl_80480130,52,(int)igGamecubeController_vtableRead,(int)igGamecubeController_fieldInit,0,(int)lbl_8055E9D4);
}
void *igGamecubeController_parentMeta(){return lbl_80562C14;}
}
#pragma pop
