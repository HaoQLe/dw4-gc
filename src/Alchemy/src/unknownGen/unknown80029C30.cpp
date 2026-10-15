#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
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
void *fn_80071694(void *,void *);
void igInfo_register();
void igObjectList_register();
void igObject_register();
extern char igNamedObjectInfo_className[];
extern char igNamedObjectList_className[];
extern char igNamedObject_className[];
extern char igNamedObjectInfo_vtable[];
extern char igInfo_vtable[];
extern char igDataList_vtable[];
extern char igNamedObjectList_vtable[];
extern char lbl_80476298[];
extern char igNamedObject_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igNamedObjectInfo_dependencies[8];
extern char igNamedObjectInfo_fieldTypes[4];
extern char igNamedObjectInfo_fieldNames[4];
extern char igNamedObjectInfo_fieldStorage[4];
extern char igNamedObjectInfo_fieldOffsets[4];
extern char igNamedObjectList_dependencies[8];
extern char igNamedObject_fieldTypes[4];
extern char igNamedObject_fieldNames[4];
extern char igNamedObject_fieldStorage[4];
extern char igNamedObject_fieldOffsets[4];
extern void *igNamedObjectInfo_meta;
extern void *igNamedObjectList_meta;
extern void *igNamedObject_meta;
extern void *lbl_805621F4;
void *igNamedObjectInfo_getMeta();
void *igNamedObjectInfo_vtableRead();
void igNamedObjectInfo_arkRegister();
void igNamedObjectInfo_register();
void *igNamedObjectInfo_getMetaCall();
void igNamedObjectInfo_fieldInit();
void *fn_80029A5C();
void *igNamedObjectList_getMeta();
void *igNamedObjectList_vtableRead();
void igNamedObjectList_arkRegister();
void igNamedObjectList_register();
void *igNamedObjectList_getMetaCall();
void *igNamedObject_getMeta();
void *igNamedObject_vtableRead();
void igNamedObject_arkRegister();
void igNamedObject_register();
void *igNamedObject_getMetaCall();
void igNamedObject_fieldInit();
}
struct UnknownGenRoot80029820 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80029820(){igObject_construct(this);}
};
struct UnknownGenObject80029820_0 : UnknownGenRoot80029820 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject80029820_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject80029820_1 : UnknownGenObject80029820_0 {
 inline ~UnknownGenObject80029820_1(){unknown00=igInfo_vtable;}
};
struct UnknownGenObject80029820 : UnknownGenObject80029820_1 {
 char unknown0C[8];
 UnknownGenRefMember unknown14;
 char unknown18[8];
 inline ~UnknownGenObject80029820(){unknown00=igNamedObjectInfo_vtable;}
};
struct UnknownGenObject80029AD4_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot80029CA8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80029CA8(){igObject_construct(this);}
};
struct UnknownGenObject80029CA8 : UnknownGenRoot80029CA8 {
 char unknown04[4];
 UnknownGenString unknown08;
 char unknown0C[4];
 inline ~UnknownGenObject80029CA8(){unknown00=igNamedObject_vtable;}
};
extern "C" {
void *fn_80029C30(){
 if(!igNamedObject_meta) igNamedObject_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igNamedObject_meta;
}
}
#pragma pop
