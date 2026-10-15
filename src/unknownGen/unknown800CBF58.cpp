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
void *igGamecubeControllerManager_getMeta(){
 if(!igGamecubeControllerManager_meta || !(reinterpret_cast<unsigned int *>(igGamecubeControllerManager_meta)[0x24/4]&4)) igGamecubeControllerManager_arkRegister();
 return igGamecubeControllerManager_meta;
}
void *igGamecubeControllerManager_vtableRead(){
 UnknownGenObject800CBF94 object;
 object.unknown00=lbl_80480E60;
 object.unknown00=lbl_80480590;
 object.unknown08.value=0;
 object.unknown00=igGamecubeControllerManager_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igGamecubeControllerManager_arkRegister(){
 meta_registerNow((int)igGamecubeControllerManager_register);
}
void igGamecubeControllerManager_register(){
 fn_800CAEE0();
 meta_registerClass(0,(int)&igGamecubeControllerManager_meta,(int)igControllerManager_register,(int)igGamecubeControllerManager_parentMeta,(int)igGamecubeControllerManager_getMetaCall,(int)igGamecubeControllerManager_className,12,(int)igGamecubeControllerManager_vtableRead,0,0,0);
}
void *igGamecubeControllerManager_parentMeta(){return igControllerManager_meta;}
void *igGamecubeController_create(void *object){
 igGamecubeController_arkRegister();
 return meta_createInstance(igGamecubeController_meta,object);
}
void *igGamecubeController_getMeta(){
 if(!igGamecubeController_meta || !(reinterpret_cast<unsigned int *>(igGamecubeController_meta)[0x24/4]&4)) igGamecubeController_arkRegister();
 return igGamecubeController_meta;
}
void *igGamecubeController_vtableRead(){
 UnknownGenObject800CC144 object;
 object.unknown00=lbl_80480E60;
 object.unknown00=lbl_804805F8;
 object.unknown00=igGamecubeController_vtable;
 object.unknown28.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igGamecubeController_arkRegister(){
 meta_registerNow((int)igGamecubeController_register);
}
void igGamecubeController_register(){
 fn_800CAEE0();
 meta_registerClass(0,(int)&igGamecubeController_meta,(int)igController_register,(int)igGamecubeController_parentMeta,(int)igGamecubeController_getMetaCall,(int)igGamecubeController_className,52,(int)igGamecubeController_vtableRead,(int)igGamecubeController_fieldInit,0,(int)igGamecubeController_dependencies);
}
void *igGamecubeController_parentMeta(){return igController_meta;}
}
#pragma pop
