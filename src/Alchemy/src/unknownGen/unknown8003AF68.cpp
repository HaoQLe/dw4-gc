#include <unknownGen.h>
#include <meta/igMetaObject.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void *igGamecubeThreadManager_getMetaCall();
void *igGamecubeThread_fieldInit();
void *igGamecubeThread_getMetaCall();
void *igThreadManager_getMetaCall();
void igThreadManager_register();
void igThread_register();
extern char igGamecubeThreadManager_className[];
extern char igGamecubeThread_className[];
extern char igGamecubeThreadManager_vtable[];
extern char igGamecubeThread_vtable[];
extern char lbl_80470C2C[];
extern char lbl_80470C94[];
extern char igNamedObject_vtable[];
extern char igGamecubeThread_dependencies[8];
extern void *igThreadManager_meta;
extern void *igThread_meta;
extern void *igGamecubeThreadManager_meta;
extern void *igGamecubeThread_meta;
void *igGamecubeThreadManager_vtableRead();
void igGamecubeThreadManager_arkRegister();
void igGamecubeThreadManager_register();
void *igGamecubeThreadManager_parentMeta();
void *fn_8003AF70();
void *igGamecubeThread_vtableRead();
void igGamecubeThread_arkRegister();
void igGamecubeThread_register();
void *igGamecubeThread_parentMeta();
}
struct UnknownGenObject8003AE84_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot8003AFC0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8003AFC0(){igObject_construct(this);}
};
struct UnknownGenObject8003AFC0_0 : UnknownGenRoot8003AFC0 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject8003AFC0_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject8003AFC0_1 : UnknownGenObject8003AFC0_0 {
 inline ~UnknownGenObject8003AFC0_1(){unknown00=lbl_80470C94;}
};
struct UnknownGenObject8003AFC0 : UnknownGenObject8003AFC0_1 {
 char unknown0C[884];
 UnknownGenRefMember unknown380;
 char unknown384[12];
 inline ~UnknownGenObject8003AFC0(){unknown00=igGamecubeThread_vtable;}
};
extern "C" {
void *igGamecubeThreadManager_parentMeta(){return igThreadManager_meta;}
void *fn_8003AF70(){
 void *value0=igGamecubeThreadManager_meta;
 reinterpret_cast<Meta::igMetaObject *>(value0)->_writeProxy=(void *)(void *)igThreadManager_getMetaCall;
 return value0;
}
}
#pragma pop
