#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80023FDC();
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
void *fn_800CB530();
void *fn_8011148C();
void fn_801AA6DC();
void igTransform_arkRegister();
void igGroup_register();
void igNonRefCountedObjectList_register();
void igNonRefCountedObjectStack_register();
void igObjectList_register();
void *igTransformRecorder_getMeta();
void igTransformRecorder_vtableRead();
extern char igDataList_vtable[];
extern char igObjectList_vtable[];
extern char igNonRefCountedObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igNonRefCountedObjectStack_vtable[];
extern char lbl_80480B58[];
extern char igTransformRecorder_className[];
extern char igNonRefCountedTransformList_className[];
extern char igTransformListList_className[];
extern char igTransformList_className[];
extern char igTransformStack_className[];
extern char igTransformStack_vtable[];
extern char lbl_804B9BB8[];
extern char igTransformList_vtable[];
extern char lbl_804B9D3C[];
extern char igTransformListList_vtable[];
extern char lbl_804B9E04[];
extern char igNonRefCountedTransformList_vtable[];
extern char lbl_804B9F30[];
extern char igTransformRecorder_fieldTypes[8];
extern char igTransformRecorder_fieldNames[8];
extern char igTransformRecorder_fieldStorage[8];
extern char igTransformRecorder_fieldOffsets[8];
extern char igNonRefCountedTransformList_dependencies[8];
extern char igTransformListList_dependencies[8];
extern char igTransformList_dependencies[8];
extern char igTransformStack_dependencies[8];
extern void *lbl_805621F4;
extern void *igTransformRecorder_meta;
extern void *igNonRefCountedTransformList_meta;
extern void *igTransformListList_meta;
extern void *igTransformList_meta;
extern void *igTransformStack_meta;
extern void *igTransform_meta;
void igTransformRecorder_register();
void *igTransformRecorder_getMetaCall();
void igTransformRecorder_fieldInit();
void *igNonRefCountedTransformList_getMeta();
void *igNonRefCountedTransformList_vtableRead();
void igNonRefCountedTransformList_arkRegister();
void igNonRefCountedTransformList_register();
void *igNonRefCountedTransformList_getMetaCall();
void *igTransformListList_getMeta();
void *igTransformListList_vtableRead();
void igTransformListList_arkRegister();
void igTransformListList_register();
void *igTransformListList_getMetaCall();
void *igTransformList_getMeta();
void *igTransformList_vtableRead();
void igTransformList_arkRegister();
void igTransformList_register();
void *igTransformList_getMetaCall();
void *igTransformStack_getMeta();
void *igTransformStack_vtableRead();
void igTransformStack_arkRegister();
void igTransformStack_register();
void *igTransformStack_getMetaCall();
}
struct UnknownGenObject801AC050_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject801AC1B0_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject801AC34C_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject801AC4E8_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_801AC644(){
 if(!igTransform_meta) igTransform_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igTransform_meta;
}
}
#pragma pop
