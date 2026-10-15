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
void igTransformRecorder_arkRegister(){
 meta_registerNow((int)igTransformRecorder_register);
}
void igTransformRecorder_register(){
 fn_801AA6DC();
 meta_registerClass(0,(int)&igTransformRecorder_meta,(int)igGroup_register,(int)fn_8011148C,(int)igTransformRecorder_getMetaCall,(int)igTransformRecorder_className,160,(int)igTransformRecorder_vtableRead,(int)igTransformRecorder_fieldInit,0,0);
}
void *igTransformRecorder_getMetaCall(){return igTransformRecorder_getMeta();}
void igTransformRecorder_fieldInit(){
 void *value0=igTransformRecorder_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,igTransformRecorder_fieldTypes,2);
 meta_setupFields(value0,igTransformRecorder_fieldNames,igTransformRecorder_fieldStorage,igTransformRecorder_fieldOffsets,value1);
}
void *fn_801ABFD8(){
 if(!igNonRefCountedTransformList_meta) igNonRefCountedTransformList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igNonRefCountedTransformList_meta;
}
void *igNonRefCountedTransformList_getMeta(){
 if(!igNonRefCountedTransformList_meta || !(reinterpret_cast<unsigned int *>(igNonRefCountedTransformList_meta)[0x24/4]&4)) igNonRefCountedTransformList_arkRegister();
 return igNonRefCountedTransformList_meta;
}
void *igNonRefCountedTransformList_vtableRead(){
 UnknownGenObject801AC050_0 object;
 igObject_construct(&object);
 object.unknown00=igDataList_vtable;
 object.unknown00=lbl_80476E0C;
 object.unknown00=igNonRefCountedObjectList_vtable;
 object.unknown00=lbl_804B9F30;
 object.unknown00=igNonRefCountedTransformList_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igNonRefCountedTransformList_arkRegister(){
 meta_registerNow((int)igNonRefCountedTransformList_register);
}
void igNonRefCountedTransformList_register(){
 fn_801AA6DC();
 meta_registerClass(0,(int)&igNonRefCountedTransformList_meta,(int)igNonRefCountedObjectList_register,(int)fn_80023FDC,(int)igNonRefCountedTransformList_getMetaCall,(int)igNonRefCountedTransformList_className,20,(int)igNonRefCountedTransformList_vtableRead,0,0,(int)igNonRefCountedTransformList_dependencies);
}
void *igNonRefCountedTransformList_getMetaCall(){return igNonRefCountedTransformList_getMeta();}
void *igTransformListList_getMeta(){
 if(!igTransformListList_meta || !(reinterpret_cast<unsigned int *>(igTransformListList_meta)[0x24/4]&4)) igTransformListList_arkRegister();
 return igTransformListList_meta;
}
void *igTransformListList_vtableRead(){
 UnknownGenObject801AC1B0_0 object;
 igObject_construct(&object);
 object.unknown00=igDataList_vtable;
 object.unknown00=lbl_80476E0C;
 object.unknown00=igObjectList_vtable;
 object.unknown00=lbl_804B9E04;
 object.unknown00=igTransformListList_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igTransformListList_arkRegister(){
 meta_registerNow((int)igTransformListList_register);
}
void igTransformListList_register(){
 fn_801AA6DC();
 meta_registerClass(0,(int)&igTransformListList_meta,(int)igObjectList_register,(int)fn_80024180,(int)igTransformListList_getMetaCall,(int)igTransformListList_className,20,(int)igTransformListList_vtableRead,0,0,(int)igTransformListList_dependencies);
}
void *igTransformListList_getMetaCall(){return igTransformListList_getMeta();}
void *fn_801AC2D4(){
 if(!igTransformList_meta) igTransformList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igTransformList_meta;
}
void *igTransformList_getMeta(){
 if(!igTransformList_meta || !(reinterpret_cast<unsigned int *>(igTransformList_meta)[0x24/4]&4)) igTransformList_arkRegister();
 return igTransformList_meta;
}
void *igTransformList_vtableRead(){
 UnknownGenObject801AC34C_0 object;
 igObject_construct(&object);
 object.unknown00=igDataList_vtable;
 object.unknown00=lbl_80476E0C;
 object.unknown00=igObjectList_vtable;
 object.unknown00=lbl_804B9D3C;
 object.unknown00=igTransformList_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igTransformList_arkRegister(){
 meta_registerNow((int)igTransformList_register);
}
void igTransformList_register(){
 fn_801AA6DC();
 meta_registerClass(0,(int)&igTransformList_meta,(int)igObjectList_register,(int)fn_80024180,(int)igTransformList_getMetaCall,(int)igTransformList_className,20,(int)igTransformList_vtableRead,0,0,(int)igTransformList_dependencies);
}
void *igTransformList_getMetaCall(){return igTransformList_getMeta();}
void *fn_801AC470(){
 if(!igTransformStack_meta) igTransformStack_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igTransformStack_meta;
}
void *igTransformStack_getMeta(){
 if(!igTransformStack_meta || !(reinterpret_cast<unsigned int *>(igTransformStack_meta)[0x24/4]&4)) igTransformStack_arkRegister();
 return igTransformStack_meta;
}
void *igTransformStack_vtableRead(){
 UnknownGenObject801AC4E8_0 object;
 igObject_construct(&object);
 object.unknown00=igDataList_vtable;
 object.unknown00=lbl_80480B58;
 object.unknown00=igNonRefCountedObjectStack_vtable;
 object.unknown00=lbl_804B9BB8;
 object.unknown00=igTransformStack_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igTransformStack_arkRegister(){
 meta_registerNow((int)igTransformStack_register);
}
void igTransformStack_register(){
 fn_801AA6DC();
 meta_registerClass(0,(int)&igTransformStack_meta,(int)igNonRefCountedObjectStack_register,(int)fn_800CB530,(int)igTransformStack_getMetaCall,(int)igTransformStack_className,20,(int)igTransformStack_vtableRead,0,0,(int)igTransformStack_dependencies);
}
void *igTransformStack_getMetaCall(){return igTransformStack_getMeta();}
void *igTransform_create(void *object){
 igTransform_arkRegister();
 return meta_createInstance(igTransform_meta,object);
}
void *fn_801AC644(){
 if(!igTransform_meta) igTransform_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igTransform_meta;
}
void *igTransform_getMeta(){
 if(!igTransform_meta || !(reinterpret_cast<unsigned int *>(igTransform_meta)[0x24/4]&4)) igTransform_arkRegister();
 return igTransform_meta;
}
}
#pragma pop
