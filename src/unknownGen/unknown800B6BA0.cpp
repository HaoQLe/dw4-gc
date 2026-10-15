#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
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
void fn_800ABC8C();
void *fn_800AC294();
void *fn_800D06E0();
void *igGeometryAttr_fieldInit();
void igVisualAttribute_register();
extern char igGeometryAttr1_5_className[];
extern char igGeometryAttr_dependencies[];
extern char igGeometryAttr_className[];
extern char igGeometryAttr1_5_vtable[];
extern char lbl_8047C5AC[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern char igGeometryAttr1_5_dependencies[8];
extern char igGeometryAttr1_5_fieldTypes[4];
extern char igGeometryAttr1_5_fieldNames[4];
extern char igGeometryAttr1_5_fieldStorage[4];
extern char igGeometryAttr1_5_fieldOffsets[4];
extern void *lbl_805621F4;
extern void *igGeometryAttr1_5_meta;
extern void *igGeometryAttr_meta;
void *igGeometryAttr1_5_getMeta();
void *igGeometryAttr1_5_vtableRead();
void igGeometryAttr1_5_arkRegister();
void igGeometryAttr1_5_register();
void *igGeometryAttr1_5_getMetaCall();
void *igGeometryAttr1_5_parentMeta();
void igGeometryAttr1_5_fieldInit();
void *igGeometryAttr_getMeta();
void igGeometryAttr_arkRegister();
void igGeometryAttr_register();
void *igGeometryAttr_getMetaCall();
}
struct UnknownGenRoot800B690C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800B690C(){igObject_construct(this);}
};
struct UnknownGenObject800B690C_0 : UnknownGenRoot800B690C {
 char unknown04[8];
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 char unknown14[12];
 UnknownGenRefMember unknown20;
 char unknown24[4];
 UnknownGenRefMember unknown28;
 UnknownGenRefMember unknown2C;
 inline ~UnknownGenObject800B690C_0(){unknown00=lbl_8047C5AC;}
};
struct UnknownGenObject800B690C : UnknownGenObject800B690C_0 {
 UnknownGenRefMember unknown30;
 char unknown34[12];
 inline ~UnknownGenObject800B690C(){unknown00=igGeometryAttr1_5_vtable;}
};
extern "C" {
void *igGeometryAttr1_5_parentMeta(){return igGeometryAttr_meta;}
}
#pragma pop
