#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void __dl__FPv(void *);
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_800ABC8C();
void *fn_800AC294();
void *fn_800B3D08();
void *fn_800B6C60();
void igMorphData_register();
void igVector3MorphData_fieldInit();
void igVisualAttribute_register();
extern char igNormalizeNormalsStateAttr_className[];
extern char igMultiPassStateAttr_className[];
extern char igMorphedGeometryAttr_dependencies[];
extern char igMorphedGeometryAttr_className[];
extern char igVector3MorphData_dependencies[];
extern char igVector3MorphData_className[];
extern char igNormalizeNormalsStateAttr_vtable[];
extern char igMultiPassStateAttr_vtable[];
extern char igVector3MorphData_vtable[];
extern char igMorphedGeometryAttr_vtable[];
extern char lbl_8047D578[];
extern char lbl_8047E058[];
extern char lbl_8047E50C[];
extern char igNormalizeNormalsStateAttr_fieldTypes[4];
extern char igNormalizeNormalsStateAttr_fieldNames[4];
extern char igNormalizeNormalsStateAttr_fieldStorage[4];
extern char igNormalizeNormalsStateAttr_fieldOffsets[4];
extern char igMultiPassStateAttr_fieldTypes[4];
extern char igMultiPassStateAttr_fieldNames[4];
extern char igMultiPassStateAttr_fieldStorage[4];
extern char igMultiPassStateAttr_fieldOffsets[4];
extern char igMorphedGeometryAttr_fieldTypes[8];
extern char igMorphedGeometryAttr_fieldNames[8];
extern char igMorphedGeometryAttr_fieldStorage[8];
extern char igMorphedGeometryAttr_fieldOffsets[8];
extern void *lbl_805621F4;
extern void *igNormalizeNormalsStateAttr_meta;
extern void *igMultiPassStateAttr_meta;
extern void *igMorphedGeometryAttr_meta;
extern void *igVector3MorphData_meta;
extern void *igMorphData_meta;
void *igNormalizeNormalsStateAttr_getMeta();
void *igNormalizeNormalsStateAttr_vtableRead();
void igNormalizeNormalsStateAttr_arkRegister();
void igNormalizeNormalsStateAttr_register();
void *igNormalizeNormalsStateAttr_getMetaCall();
void igNormalizeNormalsStateAttr_fieldInit();
void *igMultiPassStateAttr_getMeta();
void *igMultiPassStateAttr_vtableRead();
void igMultiPassStateAttr_arkRegister();
void igMultiPassStateAttr_register();
void *igMultiPassStateAttr_getMetaCall();
void igMultiPassStateAttr_fieldInit();
void *igMorphedGeometryAttr_getMeta();
void *igMorphedGeometryAttr_vtableRead();
void igMorphedGeometryAttr_arkRegister();
void igMorphedGeometryAttr_register();
void *igMorphedGeometryAttr_getMetaCall();
void igMorphedGeometryAttr_fieldInit();
void *igVector3MorphData_getMeta();
void *igVector3MorphData_vtableRead();
void igVector3MorphData_arkRegister();
void igVector3MorphData_register();
void *igVector3MorphData_getMetaCall();
void *igVector3MorphData_parentMeta();
}
struct UnknownGenObject800B3104_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800B32B8_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot800B34A8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800B34A8(){igObject_construct(this);}
};
struct UnknownGenObject800B34A8 : UnknownGenRoot800B34A8 {
 char unknown04[8];
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 char unknown14[12];
 inline ~UnknownGenObject800B34A8(){unknown00=igMorphedGeometryAttr_vtable;}
};
struct UnknownGenRoot800B3798 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800B3798(){igObject_construct(this);}
};
struct UnknownGenObject800B3798 : UnknownGenRoot800B3798 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 char unknown10[8];
 UnknownGenRefMember unknown18;
 UnknownGenRefMember unknown1C;
 char unknown20[24];
 inline ~UnknownGenObject800B3798(){unknown00=igVector3MorphData_vtable;}
};
extern "C" {
void *igVector3MorphData_parentMeta(){return igMorphData_meta;}
}
#pragma pop
