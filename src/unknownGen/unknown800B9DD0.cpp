#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_800ABC8C();
void *fn_800AC294();
void igBlendMatrixPaletteAttr_fieldInit();
void igObjectList_register();
void igVisualAttribute_register();
extern char igDataList_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igBlendingCorrectionStateAttr_className[];
extern char igBlendingControlStateAttr_className[];
extern char igBlendStateAttr_className[];
extern char igBlendMatrixPaletteAttrList_className[];
extern char igBlendMatrixPaletteAttr_className[];
extern char igBlendingCorrectionStateAttr_vtable[];
extern char igBlendingControlStateAttr_vtable[];
extern char igBlendStateAttr_vtable[];
extern char igBlendMatrixPaletteAttr_vtable[];
extern char lbl_8047D578[];
extern char igBlendMatrixPaletteAttrList_vtable[];
extern char lbl_8047DBB4[];
extern char lbl_8047E50C[];
extern char igBlendingCorrectionStateAttr_fieldTypes[4];
extern char igBlendingCorrectionStateAttr_fieldNames[4];
extern char igBlendingCorrectionStateAttr_fieldStorage[4];
extern char igBlendingCorrectionStateAttr_fieldOffsets[4];
extern char igBlendingControlStateAttr_fieldTypes[4];
extern char igBlendingControlStateAttr_fieldNames[4];
extern char igBlendingControlStateAttr_fieldStorage[4];
extern char igBlendingControlStateAttr_fieldOffsets[4];
extern char igBlendStateAttr_fieldTypes[4];
extern char igBlendStateAttr_fieldNames[4];
extern char igBlendStateAttr_fieldStorage[4];
extern char igBlendStateAttr_fieldOffsets[4];
extern char igBlendMatrixPaletteAttrList_dependencies[8];
extern void *lbl_805621F4;
extern void *igBlendingCorrectionStateAttr_meta;
extern void *igBlendingControlStateAttr_meta;
extern void *igBlendStateAttr_meta;
extern void *igBlendMatrixPaletteAttrList_meta;
extern void *igBlendMatrixPaletteAttr_meta;
void *igBlendingCorrectionStateAttr_getMeta();
void *igBlendingCorrectionStateAttr_vtableRead();
void igBlendingCorrectionStateAttr_arkRegister();
void igBlendingCorrectionStateAttr_register();
void *igBlendingCorrectionStateAttr_getMetaCall();
void igBlendingCorrectionStateAttr_fieldInit();
void *igBlendingControlStateAttr_getMeta();
void *igBlendingControlStateAttr_vtableRead();
void igBlendingControlStateAttr_arkRegister();
void igBlendingControlStateAttr_register();
void *igBlendingControlStateAttr_getMetaCall();
void igBlendingControlStateAttr_fieldInit();
void *igBlendStateAttr_getMeta();
void *igBlendStateAttr_vtableRead();
void igBlendStateAttr_arkRegister();
void igBlendStateAttr_register();
void *igBlendStateAttr_getMetaCall();
void igBlendStateAttr_fieldInit();
void *igBlendMatrixPaletteAttrList_getMeta();
void *igBlendMatrixPaletteAttrList_vtableRead();
void igBlendMatrixPaletteAttrList_arkRegister();
void igBlendMatrixPaletteAttrList_register();
void *igBlendMatrixPaletteAttrList_getMetaCall();
void *igBlendMatrixPaletteAttr_getMeta();
void *igBlendMatrixPaletteAttr_vtableRead();
void igBlendMatrixPaletteAttr_arkRegister();
void igBlendMatrixPaletteAttr_register();
void *igBlendMatrixPaletteAttr_getMetaCall();
}
struct UnknownGenObject800B9A6C_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800B9C20_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800B9E48_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800BA038_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800BA20C_0 {
 void *unknown00;
 char unknown04[36];
};
extern "C" {
void *fn_800B9DD0(){
 if(!igBlendStateAttr_meta) igBlendStateAttr_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igBlendStateAttr_meta;
}
}
#pragma pop
