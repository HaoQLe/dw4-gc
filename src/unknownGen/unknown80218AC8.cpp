#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80024180();
void *fn_800284EC();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_80216620();
void igDataPump_fieldInit();
void igInfo_register();
void igObjectList_register();
void igObject_register();
extern char igInfo_vtable[];
extern char igDataList_vtable[];
extern char igNamedObject_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igDataPumpManager_className[];
extern char igDataPumpList_className[];
extern char igDataPumpInterface_className[];
extern char igDataPumpInfo_className[];
extern char igDataPump_dependencies[];
extern char igDataPump_className[];
extern char igDataPump_vtable[];
extern char igDataPumpInfo_vtable[];
extern char igDataPumpList_vtable[];
extern char lbl_804BBB00[];
extern char igDataPumpManager_vtable[];
extern char igDataPumpManager_dependencies[8];
extern char igDataPumpManager_fieldTypes[4];
extern char igDataPumpManager_fieldNames[4];
extern char igDataPumpManager_fieldStorage[4];
extern char igDataPumpManager_fieldOffsets[4];
extern char igDataPumpList_dependencies[8];
extern char igDataPumpInfo_dependencies[8];
extern char igDataPumpInfo_fieldTypes[4];
extern char igDataPumpInfo_fieldNames[4];
extern char igDataPumpInfo_fieldStorage[4];
extern char igDataPumpInfo_fieldOffsets[4];
extern void *lbl_805621F4;
extern void *igDataPumpManager_meta;
extern void *igDataPumpList_meta;
extern void *igDataPumpInterface_meta;
extern void *igDataPumpInfo_meta;
extern void *igDataPump_meta;
void *igDataPumpManager_getMeta();
void *igDataPumpManager_vtableRead();
void igDataPumpManager_arkRegister();
void igDataPumpManager_register();
void *igDataPumpManager_getMetaCall();
void igDataPumpManager_fieldInit();
void *fn_80218D14();
void *igDataPumpList_getMeta();
void *igDataPumpList_vtableRead();
void igDataPumpList_arkRegister();
void igDataPumpList_register();
void *igDataPumpList_getMetaCall();
void *igDataPumpInterface_getMeta();
void igDataPumpInterface_arkRegister();
void igDataPumpInterface_register();
void *igDataPumpInterface_getMetaCall();
void *igDataPumpInfo_getMeta();
void *igDataPumpInfo_vtableRead();
void igDataPumpInfo_arkRegister();
void igDataPumpInfo_register();
void *igDataPumpInfo_getMetaCall();
void igDataPumpInfo_fieldInit();
void *igDataPump_getMeta();
void *igDataPump_vtableRead();
void igDataPump_arkRegister();
void igDataPump_register();
void *igDataPump_getMetaCall();
}
struct UnknownGenRoot80218B40 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80218B40(){igObject_construct(this);}
};
struct UnknownGenObject80218B40 : UnknownGenRoot80218B40 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 char unknown0C[4];
 inline ~UnknownGenObject80218B40(){unknown00=igDataPumpManager_vtable;}
};
struct UnknownGenObject80218D8C_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot80219084 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80219084(){igObject_construct(this);}
};
struct UnknownGenObject80219084_0 : UnknownGenRoot80219084 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject80219084_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject80219084_1 : UnknownGenObject80219084_0 {
 inline ~UnknownGenObject80219084_1(){unknown00=igInfo_vtable;}
};
struct UnknownGenObject80219084 : UnknownGenObject80219084_1 {
 char unknown0C[8];
 UnknownGenRefMember unknown14;
 char unknown18[8];
 inline ~UnknownGenObject80219084(){unknown00=igDataPumpInfo_vtable;}
};
struct UnknownGenRoot80219334 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80219334(){igObject_construct(this);}
};
struct UnknownGenObject80219334 : UnknownGenRoot80219334 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 UnknownGenString unknown10;
 UnknownGenString unknown14;
 UnknownGenRefMember unknown18;
 char unknown1C[4];
 inline ~UnknownGenObject80219334(){unknown00=igDataPump_vtable;}
};
extern "C" {
void *fn_80218AC8(){
 if(!igDataPumpManager_meta) igDataPumpManager_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igDataPumpManager_meta;
}
}
#pragma pop
