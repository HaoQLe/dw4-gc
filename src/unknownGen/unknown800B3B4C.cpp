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
void fn_8006665C(void *);
void fn_800ABC8C();
void igModelViewMatrixAttr_registerNow();
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
extern char lbl_8055E340[8];
extern char lbl_8055E348[8];
extern void *lbl_805621F4;
extern void *igVec3fAlignedList_meta;
extern void *igMorphDataList_meta;
extern void *igMorphData_meta;
extern void *igModelViewMatrixAttrList_meta;
extern void *igModelViewMatrixAttr_meta;
extern void *igVec3fList_meta;
void *igVec3fAlignedList_getMeta();
void *igVec3fAlignedList_vtableRead();
void igVec3fAlignedList_registerNow();
void igVec3fAlignedList_register();
void *igVec3fAlignedList_getMetaCall();
void *igVec3fAlignedList_parentMeta();
void *fn_800B3CE8();
void *igMorphDataList_getMeta();
void *igMorphDataList_vtableRead();
void igMorphDataList_registerNow();
void igMorphDataList_register();
void *igMorphDataList_getMetaCall();
void *igMorphData_getMeta();
void igMorphData_registerNow();
void igMorphData_register();
void *igMorphData_getMetaCall();
void *igModelViewMatrixAttrList_getMeta();
void *igModelViewMatrixAttrList_vtableRead();
void igModelViewMatrixAttrList_registerNow();
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
void *fn_800B3B4C(){
 if(!igVec3fAlignedList_meta) igVec3fAlignedList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igVec3fAlignedList_meta;
}
void *igVec3fAlignedList_getMeta(){
 if(!igVec3fAlignedList_meta || !(reinterpret_cast<unsigned int *>(igVec3fAlignedList_meta)[0x24/4]&4)) igVec3fAlignedList_registerNow();
 return igVec3fAlignedList_meta;
}
void *igVec3fAlignedList_vtableRead(){
 UnknownGenObject800B3BC4_0 object;
 fn_8006665C(&object);
 object.unknown00=igDataList_vtable;
 object.unknown00=lbl_8047DFF8;
 object.unknown00=igVec3fList_vtable;
 object.unknown00=igVec3fAlignedList_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igVec3fAlignedList_registerNow(){
 meta_registerNow((int)igVec3fAlignedList_register);
}
void igVec3fAlignedList_register(){
 fn_800ABC8C();
 meta_registerClass(0,(int)&igVec3fAlignedList_meta,(int)igVec3fList_register,(int)igVec3fAlignedList_parentMeta,(int)igVec3fAlignedList_getMetaCall,(int)igVec3fAlignedList_className,20,(int)igVec3fAlignedList_vtableRead,0,(int)fn_800B3CE8,0);
}
void *igVec3fAlignedList_getMetaCall(){return igVec3fAlignedList_getMeta();}
void *igVec3fAlignedList_parentMeta(){return igVec3fList_meta;}
void *fn_800B3CE8(){return fn_800C192C();}
void *fn_800B3D08(){
 if(!igMorphDataList_meta) igMorphDataList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igMorphDataList_meta;
}
void *igMorphDataList_getMeta(){
 if(!igMorphDataList_meta || !(reinterpret_cast<unsigned int *>(igMorphDataList_meta)[0x24/4]&4)) igMorphDataList_registerNow();
 return igMorphDataList_meta;
}
void *igMorphDataList_vtableRead(){
 UnknownGenObject800B3D80_0 object;
 fn_8006665C(&object);
 object.unknown00=igDataList_vtable;
 object.unknown00=lbl_80476E0C;
 object.unknown00=igObjectList_vtable;
 object.unknown00=lbl_8047DED4;
 object.unknown00=igMorphDataList_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igMorphDataList_registerNow(){
 meta_registerNow((int)igMorphDataList_register);
}
void igMorphDataList_register(){
 fn_800ABC8C();
 meta_registerClass(0,(int)&igMorphDataList_meta,(int)igObjectList_register,(int)fn_80024180,(int)igMorphDataList_getMetaCall,(int)igMorphDataList_className,20,(int)igMorphDataList_vtableRead,0,0,(int)lbl_8055E340);
}
void *igMorphDataList_getMetaCall(){return igMorphDataList_getMeta();}
void *igMorphData_getMeta(){
 if(!igMorphData_meta || !(reinterpret_cast<unsigned int *>(igMorphData_meta)[0x24/4]&4)) igMorphData_registerNow();
 return igMorphData_meta;
}
void igMorphData_registerNow(){
 meta_registerNow((int)igMorphData_register);
}
void igMorphData_register(){
 fn_800ABC8C();
 meta_registerClass(1,(int)&igMorphData_meta,(int)igObject_register,(int)fn_800237D0,(int)igMorphData_getMetaCall,(int)igMorphData_className,8,0,0,0,0);
}
void *igMorphData_getMetaCall(){return igMorphData_getMeta();}
void *fn_800B3F8C(){
 if(!igModelViewMatrixAttrList_meta) igModelViewMatrixAttrList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igModelViewMatrixAttrList_meta;
}
void *igModelViewMatrixAttrList_getMeta(){
 if(!igModelViewMatrixAttrList_meta || !(reinterpret_cast<unsigned int *>(igModelViewMatrixAttrList_meta)[0x24/4]&4)) igModelViewMatrixAttrList_registerNow();
 return igModelViewMatrixAttrList_meta;
}
void *igModelViewMatrixAttrList_vtableRead(){
 UnknownGenObject800B4004_0 object;
 fn_8006665C(&object);
 object.unknown00=igDataList_vtable;
 object.unknown00=lbl_80476E0C;
 object.unknown00=igObjectList_vtable;
 object.unknown00=lbl_8047DE0C;
 object.unknown00=igModelViewMatrixAttrList_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igModelViewMatrixAttrList_registerNow(){
 meta_registerNow((int)igModelViewMatrixAttrList_register);
}
void igModelViewMatrixAttrList_register(){
 fn_800ABC8C();
 meta_registerClass(0,(int)&igModelViewMatrixAttrList_meta,(int)igObjectList_register,(int)fn_80024180,(int)igModelViewMatrixAttrList_getMetaCall,(int)igModelViewMatrixAttrList_className,20,(int)igModelViewMatrixAttrList_vtableRead,0,0,(int)lbl_8055E348);
}
void *igModelViewMatrixAttrList_getMetaCall(){return igModelViewMatrixAttrList_getMeta();}
void *igModelViewMatrixAttr_create(void *object){
 igModelViewMatrixAttr_registerNow();
 return meta_createInstance(igModelViewMatrixAttr_meta,object);
}
void *fn_800B4160(){
 if(!igModelViewMatrixAttr_meta) igModelViewMatrixAttr_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igModelViewMatrixAttr_meta;
}
void *igModelViewMatrixAttr_getMeta(){
 if(!igModelViewMatrixAttr_meta || !(reinterpret_cast<unsigned int *>(igModelViewMatrixAttr_meta)[0x24/4]&4)) igModelViewMatrixAttr_registerNow();
 return igModelViewMatrixAttr_meta;
}
}
#pragma pop
