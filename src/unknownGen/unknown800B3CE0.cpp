#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80024180();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_800ABC8C();
void igModelViewMatrixAttr_arkRegister();
void *fn_800C192C();
void igObjectList_register();
void igObject_register();
void igVec3fList_register();
extern char igDataList_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igVec3fAlignedList_className[];
extern char igMorphDataList_className[];
extern char igMorphData_className[];
extern char igModelViewMatrixAttrList_className[];
extern char igModelViewMatrixAttrList_vtable[];
extern char lbl_8047DE0C[];
extern char igMorphDataList_vtable[];
extern char lbl_8047DED4[];
extern char igVec3fAlignedList_vtable[];
extern char igVec3fList_vtable[];
extern char lbl_8047DFF8[];
extern char igMorphDataList_dependencies[8];
extern char igModelViewMatrixAttrList_dependencies[8];
extern void *lbl_805621F4;
extern void *igVec3fAlignedList_meta;
extern void *igMorphDataList_meta;
extern void *igMorphData_meta;
extern void *igModelViewMatrixAttrList_meta;
extern void *igModelViewMatrixAttr_meta;
extern void *igVec3fList_meta;
void *igVec3fAlignedList_getMeta();
void *igVec3fAlignedList_vtableRead();
void igVec3fAlignedList_arkRegister();
void igVec3fAlignedList_register();
void *igVec3fAlignedList_getMetaCall();
void *igVec3fAlignedList_parentMeta();
void *fn_800B3CE8();
void *igMorphDataList_getMeta();
void *igMorphDataList_vtableRead();
void igMorphDataList_arkRegister();
void igMorphDataList_register();
void *igMorphDataList_getMetaCall();
void *igMorphData_getMeta();
void igMorphData_arkRegister();
void igMorphData_register();
void *igMorphData_getMetaCall();
void *igModelViewMatrixAttrList_getMeta();
void *igModelViewMatrixAttrList_vtableRead();
void igModelViewMatrixAttrList_arkRegister();
void igModelViewMatrixAttrList_register();
void *igModelViewMatrixAttrList_getMetaCall();
}
struct UnknownGenObject800B3BC4_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800B3D80_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800B4004_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *igVec3fAlignedList_parentMeta(){return igVec3fList_meta;}
void *fn_800B3CE8(){return fn_800C192C();}
void *fn_800B3D08(){
 if(!igMorphDataList_meta) igMorphDataList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igMorphDataList_meta;
}
}
#pragma pop
