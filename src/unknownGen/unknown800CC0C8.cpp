#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_800CAEE0();
void igControllerManager_register();
void igController_register();
void *igGamecubeControllerManager_getMetaCall();
void igGamecubeController_fieldInit();
void *igGamecubeController_getMetaCall();
extern char igGamecubeControllerManager_className[];
extern char igGamecubeController_className[];
extern char igGamecubeControllerManager_vtable[];
extern char igGamecubeController_vtable[];
extern char lbl_80480590[];
extern char lbl_804805F8[];
extern char lbl_80480E60[];
extern char igGamecubeController_dependencies[8];
extern void *igControllerManager_meta;
extern void *igController_meta;
extern void *igGamecubeControllerManager_meta;
extern void *igGamecubeController_meta;
void *igGamecubeControllerManager_vtableRead();
void igGamecubeControllerManager_arkRegister();
void igGamecubeControllerManager_register();
void *igGamecubeControllerManager_parentMeta();
void *igGamecubeController_vtableRead();
void igGamecubeController_arkRegister();
void igGamecubeController_register();
void *igGamecubeController_parentMeta();
}
struct UnknownGenRoot800CBF94 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800CBF94(){igObject_construct(this);}
};
struct UnknownGenObject800CBF94_0 : UnknownGenRoot800CBF94 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 inline ~UnknownGenObject800CBF94_0(){unknown00=lbl_80480590;}
};
struct UnknownGenObject800CBF94 : UnknownGenObject800CBF94_0 {
 char unknown0C[4];
 inline ~UnknownGenObject800CBF94(){unknown00=igGamecubeControllerManager_vtable;}
};
struct UnknownGenRoot800CC144 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800CC144(){igObject_construct(this);}
};
struct UnknownGenObject800CC144 : UnknownGenRoot800CC144 {
 char unknown04[36];
 UnknownGenRefMember unknown28;
 char unknown2C[20];
 inline ~UnknownGenObject800CC144(){unknown00=igGamecubeController_vtable;}
};
extern "C" {
void *igGamecubeControllerManager_parentMeta(){return igControllerManager_meta;}
}
#pragma pop
