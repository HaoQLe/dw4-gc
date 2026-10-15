#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
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
void fn_800ABC8C();
void *fn_800AC294();
void igTextureMatrixAttr_arkRegister();
void *fn_800AF4A4();
void *fn_800C4880(int);
void *fn_800C49B4(int);
void *fn_800C4B28(int);
void igObjectList_register();
void igVisualAttribute_register();
extern char igDataList_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igTextureUnloadAttr_className[];
extern char igTextureStateAttr_className[];
extern char igTextureMatrixStateAttr_className[];
extern char igTextureMatrixAttrList_className[];
extern char igTextureUnloadAttr_vtable[];
extern char igTextureStateAttr_vtable[];
extern char igTextureMatrixStateAttr_vtable[];
extern char lbl_8047D578[];
extern char igTextureMatrixAttrList_vtable[];
extern char lbl_8047E31C[];
extern char lbl_8047E50C[];
extern char igTextureUnloadAttr_dependencies[8];
extern char igTextureUnloadAttr_fieldTypes[8];
extern char igTextureUnloadAttr_fieldNames[8];
extern char igTextureUnloadAttr_fieldStorage[8];
extern char igTextureUnloadAttr_fieldOffsets[8];
extern char igTextureStateAttr_fieldTypes[8];
extern char igTextureStateAttr_fieldNames[8];
extern char igTextureStateAttr_fieldStorage[8];
extern char igTextureStateAttr_fieldOffsets[8];
extern char igTextureMatrixStateAttr_fieldTypes[8];
extern char igTextureMatrixStateAttr_fieldNames[8];
extern char igTextureMatrixStateAttr_fieldStorage[8];
extern char igTextureMatrixStateAttr_fieldOffsets[8];
extern char igTextureMatrixAttrList_dependencies[8];
extern void *lbl_805621F4;
extern void *igTextureUnloadAttr_meta;
extern void *igTextureStateAttr_meta;
extern void *igTextureMatrixStateAttr_meta;
extern void *igTextureMatrixAttrList_meta;
extern void *igTextureMatrixAttr_meta;
void *igTextureUnloadAttr_getMeta();
void *igTextureUnloadAttr_vtableRead();
void igTextureUnloadAttr_arkRegister();
void igTextureUnloadAttr_register();
void *igTextureUnloadAttr_getMetaCall();
void igTextureUnloadAttr_fieldInit();
void *igTextureStateAttr_getMeta();
void *igTextureStateAttr_vtableRead();
void igTextureStateAttr_arkRegister();
void igTextureStateAttr_register();
void *igTextureStateAttr_getMetaCall();
void igTextureStateAttr_fieldInit();
void *igTextureMatrixStateAttr_getMeta();
void *igTextureMatrixStateAttr_vtableRead();
void igTextureMatrixStateAttr_arkRegister();
void igTextureMatrixStateAttr_register();
void *igTextureMatrixStateAttr_getMetaCall();
void igTextureMatrixStateAttr_fieldInit();
void *igTextureMatrixAttrList_getMeta();
void *igTextureMatrixAttrList_vtableRead();
void igTextureMatrixAttrList_arkRegister();
void igTextureMatrixAttrList_register();
void *igTextureMatrixAttrList_getMetaCall();
}
struct UnknownGenObject800ADA48_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800ADCAC_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800ADEB0_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800AE07C_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_800AD9D0(){
 if(!igTextureUnloadAttr_meta) igTextureUnloadAttr_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igTextureUnloadAttr_meta;
}
}
#pragma pop
