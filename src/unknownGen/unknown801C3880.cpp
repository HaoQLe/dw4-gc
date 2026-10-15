#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80024180();
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
void *fn_800BA194();
void *fn_800BB7B8();
void fn_801AA6DC();
void fn_801C3D40(void *,short);
void fn_801C3EF4(void *);
void igCompileTraversal_arkRegister();
void igObjectList_register();
void igObject_register();
extern char igDataList_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igBlendListRecordList_className[];
extern char igBlendListRecord_dependencies[];
extern char igBlendListRecord_className[];
extern char igBlendListRecord_vtable[];
extern char igBlendListRecordList_vtable[];
extern char lbl_804B7184[];
extern char igBlendListRecordList_dependencies[8];
extern char igBlendListRecord_fieldTypes[8];
extern char igBlendListRecord_fieldNames[8];
extern char igBlendListRecord_fieldStorage[8];
extern char igBlendListRecord_fieldOffsets[8];
extern void *lbl_805621F4;
extern void *igBlendListRecordList_meta;
extern void *igBlendListRecord_meta;
extern void *igCompileTraversal_meta;
void *igBlendListRecordList_getMeta();
void *igBlendListRecordList_vtableRead();
void igBlendListRecordList_arkRegister();
void igBlendListRecordList_register();
void *igBlendListRecordList_getMetaCall();
void *igBlendListRecord_getMeta();
void *igBlendListRecord_vtableRead();
void igBlendListRecord_arkRegister();
void igBlendListRecord_register();
void *igBlendListRecord_getMetaCall();
void igBlendListRecord_fieldInit();
}
struct UnknownGenObject801C38F8_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot801C3A90 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801C3A90(){igObject_construct(this);}
};
struct UnknownGenObject801C3A90 : UnknownGenRoot801C3A90 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 char unknown0C[4];
 inline ~UnknownGenObject801C3A90(){unknown00=igBlendListRecord_vtable;}
};
struct UnknownGenObject801C3CF8 {
 void *unknown00;
 char unknown04[524];
};
extern "C" {
void *fn_801C3880(){
 if(!igBlendListRecordList_meta) igBlendListRecordList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igBlendListRecordList_meta;
}
}
#pragma pop
