#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_801AA6DC();
void igInverseKinematicsHandle_registerNow();
void igObjectList_register();
extern char igDataList_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igInverseKinematicsHandleList_className[];
extern char igInverseKinematicsHandleList_vtable[];
extern char lbl_804B7840[];
extern char lbl_8056053C[8];
extern void *lbl_805621F4;
extern void *igInverseKinematicsHandleList_meta;
extern void *igInverseKinematicsHandle_meta;
void *igInverseKinematicsHandleList_getMeta();
void *igInverseKinematicsHandleList_vtableRead();
void igInverseKinematicsHandleList_registerNow();
void igInverseKinematicsHandleList_register();
void *igInverseKinematicsHandleList_getMetaCall();
}
struct UnknownGenObject801BCB94_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_801BCB1C(){
 if(!igInverseKinematicsHandleList_meta) igInverseKinematicsHandleList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igInverseKinematicsHandleList_meta;
}
void *igInverseKinematicsHandleList_getMeta(){
 if(!igInverseKinematicsHandleList_meta || !(reinterpret_cast<unsigned int *>(igInverseKinematicsHandleList_meta)[0x24/4]&4)) igInverseKinematicsHandleList_registerNow();
 return igInverseKinematicsHandleList_meta;
}
void *igInverseKinematicsHandleList_vtableRead(){
 UnknownGenObject801BCB94_0 object;
 fn_8006665C(&object);
 object.unknown00=igDataList_vtable;
 object.unknown00=lbl_80476E0C;
 object.unknown00=igObjectList_vtable;
 object.unknown00=lbl_804B7840;
 object.unknown00=igInverseKinematicsHandleList_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igInverseKinematicsHandleList_registerNow(){
 meta_registerNow((int)igInverseKinematicsHandleList_register);
}
void igInverseKinematicsHandleList_register(){
 fn_801AA6DC();
 meta_registerClass(0,(int)&igInverseKinematicsHandleList_meta,(int)igObjectList_register,(int)fn_80024180,(int)igInverseKinematicsHandleList_getMetaCall,(int)igInverseKinematicsHandleList_className,20,(int)igInverseKinematicsHandleList_vtableRead,0,0,(int)lbl_8056053C);
}
void *igInverseKinematicsHandleList_getMetaCall(){return igInverseKinematicsHandleList_getMeta();}
void *igInverseKinematicsHandle_getMeta(){
 if(!igInverseKinematicsHandle_meta || !(reinterpret_cast<unsigned int *>(igInverseKinematicsHandle_meta)[0x24/4]&4)) igInverseKinematicsHandle_registerNow();
 return igInverseKinematicsHandle_meta;
}
}
#pragma pop
