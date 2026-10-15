#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_801AA6DC();
void igInverseKinematicsHandle_arkRegister();
void igObjectList_register();
extern char igDataList_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igInverseKinematicsHandleList_className[];
extern char igInverseKinematicsHandleList_vtable[];
extern char lbl_804B7840[];
extern char igInverseKinematicsHandleList_dependencies[8];
extern void *lbl_805621F4;
extern void *igInverseKinematicsHandleList_meta;
extern void *igInverseKinematicsHandle_meta;
void *igInverseKinematicsHandleList_getMeta();
void *igInverseKinematicsHandleList_vtableRead();
void igInverseKinematicsHandleList_arkRegister();
void igInverseKinematicsHandleList_register();
void *igInverseKinematicsHandleList_getMetaCall();
}
struct UnknownGenObject801BCB94_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *igInverseKinematicsHandle_getMeta(){
 if(!igInverseKinematicsHandle_meta || !(reinterpret_cast<unsigned int *>(igInverseKinematicsHandle_meta)[0x24/4]&4)) igInverseKinematicsHandle_arkRegister();
 return igInverseKinematicsHandle_meta;
}
}
#pragma pop
