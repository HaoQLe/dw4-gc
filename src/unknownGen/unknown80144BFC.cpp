#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_80029F84();
void *fn_800343B8();
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void *fn_800BB61C();
void fn_8012FC48();
void *fn_8013B2B0();
void *fn_8013B680();
void *fn_80143FCC();
void igInterface_register();
void igItemInterface_fieldInit();
void igIterateGraph_register();
void igIterator_register();
void igManager_register();
extern char igIterateField_className[];
extern char igIterateDerived_className[];
extern char igIterateAttr_dependencies[];
extern char igIterateAttr_className[];
extern char igItemManager_className[];
extern char igItemInterface_dependencies[];
extern char igItemInterface_className[];
extern char igItemInterface_vtable[];
extern char lbl_804A6460[];
extern char igItemManager_vtable[];
extern char igIterateAttr_vtable[];
extern char igIterateDerived_vtable[];
extern char igIterateField_vtable[];
extern char igIterateGraph_vtable[];
extern char lbl_804A9C44[];
extern char igInterface_vtable[];
extern char igManager_vtable[];
extern char igIterateField_dependencies[8];
extern char igIterateField_fieldTypes[8];
extern char igIterateField_fieldNames[8];
extern char igIterateField_fieldStorage[8];
extern char igIterateField_fieldOffsets[8];
extern char igIterateDerived_dependencies[8];
extern char igIterateDerived_fieldTypes[8];
extern char igIterateDerived_fieldNames[8];
extern char igIterateDerived_fieldStorage[8];
extern char igIterateDerived_fieldOffsets[8];
extern char igIterateAttr_fieldTypes[8];
extern char igIterateAttr_fieldNames[8];
extern char igIterateAttr_fieldStorage[8];
extern char igIterateAttr_fieldOffsets[8];
extern void *lbl_805621F4;
extern void *igIterateGraph_meta;
extern void *igIterateField_meta;
extern void *igIterateDerived_meta;
extern void *igIterateAttr_meta;
extern void *igItemManager_meta;
extern void *igItemInterface_meta;
void *igIterateField_getMeta();
void *igIterateField_vtableRead();
void igIterateField_arkRegister();
void igIterateField_register();
void *igIterateField_getMetaCall();
void igIterateField_fieldInit();
void *igIterateDerived_getMeta();
void *igIterateDerived_vtableRead();
void igIterateDerived_arkRegister();
void igIterateDerived_register();
void *igIterateDerived_getMetaCall();
void igIterateDerived_fieldInit();
void *igIterateAttr_getMeta();
void *igIterateAttr_vtableRead();
void igIterateAttr_arkRegister();
void igIterateAttr_register();
void *igIterateAttr_getMetaCall();
void *igIterateAttr_parentMeta();
void igIterateAttr_fieldInit();
void *igItemManager_getMeta();
void *igItemManager_vtableRead();
void igItemManager_arkRegister();
void igItemManager_register();
void *igItemManager_getMetaCall();
void *igItemInterface_getMeta();
void *igItemInterface_vtableRead();
void igItemInterface_arkRegister();
void igItemInterface_register();
void *igItemInterface_getMetaCall();
}
struct UnknownGenRoot801444A8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801444A8(){igObject_construct(this);}
};
struct UnknownGenObject801444A8 : UnknownGenRoot801444A8 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 char unknown0C[4];
 inline ~UnknownGenObject801444A8(){unknown00=igIterateField_vtable;}
};
struct UnknownGenRoot801446EC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801446EC(){igObject_construct(this);}
};
struct UnknownGenObject801446EC : UnknownGenRoot801446EC {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 char unknown0C[4];
 inline ~UnknownGenObject801446EC(){unknown00=igIterateDerived_vtable;}
};
struct UnknownGenRoot80144930 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80144930(){igObject_construct(this);}
};
struct UnknownGenObject80144930_0 : UnknownGenRoot80144930 {
 char unknown04[8];
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 inline ~UnknownGenObject80144930_0(){unknown00=igIterateGraph_vtable;}
};
struct UnknownGenObject80144930 : UnknownGenObject80144930_0 {
 UnknownGenRefMember unknown14;
 UnknownGenRefMember unknown18;
 char unknown1C[12];
 inline ~UnknownGenObject80144930(){unknown00=igIterateAttr_vtable;}
};
struct UnknownGenObject80144C74_0 {
 void *unknown00;
 char unknown04[36];
};
struct UnknownGenRoot80144DF4 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80144DF4(){igObject_construct(this);}
};
struct UnknownGenObject80144DF4 : UnknownGenRoot80144DF4 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 UnknownGenRefMember unknown28;
 UnknownGenRefMember unknown2C;
 char unknown30[8];
 inline ~UnknownGenObject80144DF4(){unknown00=igItemInterface_vtable;}
};
extern "C" {
void *fn_80144BFC(){
 if(!igItemManager_meta) igItemManager_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igItemManager_meta;
}
}
#pragma pop
