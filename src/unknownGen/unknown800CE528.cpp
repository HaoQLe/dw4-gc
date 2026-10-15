#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80023FDC();
void *meta_newMetaObject(void *);
void *fn_80037594();
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_800CE2F8();
void igCapabilityManager_register();
void igContext_register();
void igNonRefCountedObjectList_register();
void igVisualContext_fieldInit();
extern char igDataList_vtable[];
extern char igNonRefCountedObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igVisualContextCapabilityManager_className[];
extern char igVisualContextList_className[];
extern char igVisualContext_dependencies[];
extern char igVisualContext_className[];
extern char igVisualContextCapabilityManager_vtable[];
extern char lbl_80492AD0[];
extern char igVisualContextList_vtable[];
extern char lbl_804943FC[];
extern char igVisualContextCapabilityManager_dependencies[8];
extern char igVisualContextCapabilityManager_fieldTypes[4];
extern char igVisualContextCapabilityManager_fieldNames[4];
extern char igVisualContextCapabilityManager_fieldStorage[4];
extern char igVisualContextCapabilityManager_fieldOffsets[4];
extern char igVisualContextList_dependencies[8];
extern void *lbl_805621F4;
extern void *igVisualContextCapabilityManager_meta;
extern void *igVisualContextList_meta;
extern void *igVisualContext_meta;
extern void *igCapabilityManager_meta;
void *igVisualContextCapabilityManager_getMeta();
void *igVisualContextCapabilityManager_vtableRead();
void igVisualContextCapabilityManager_arkRegister();
void igVisualContextCapabilityManager_register();
void *igVisualContextCapabilityManager_getMetaCall();
void *fn_800CE528();
void igVisualContextCapabilityManager_fieldInit();
void *igVisualContextList_getMeta();
void *igVisualContextList_vtableRead();
void igVisualContextList_arkRegister();
void igVisualContextList_register();
void *igVisualContextList_getMetaCall();
void *fn_800CE788();
void *igVisualContext_getMeta();
void igVisualContext_arkRegister();
void igVisualContext_register();
void *igVisualContext_getMetaCall();
}
struct UnknownGenRoot800CE3D8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800CE3D8(){igObject_construct(this);}
};
struct UnknownGenObject800CE3D8 : UnknownGenRoot800CE3D8 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 char unknown0C[4];
 inline ~UnknownGenObject800CE3D8(){unknown00=igVisualContextCapabilityManager_vtable;}
};
struct UnknownGenObject800CE62C_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_800CE528(){return igCapabilityManager_meta;}
}
#pragma pop
