#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80023CF4();
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
void fn_8012FC48();
void *fn_80149C04();
void igFileInfo_fieldInit();
void igNamedObject_register();
void igObjectList_register();
void igObject_register();
extern char igDataList_vtable[];
extern char igNamedObject_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igMitchellFilterFun_className[];
extern char igLanczos3FilterFun_className[];
extern char igBSplineFilterFun_className[];
extern char igBellFilterFun_className[];
extern char igTriangleFilterFun_className[];
extern char igBoxFilterFun_className[];
extern char igStdFilterFun_className[];
extern char igSerialFilterFun_className[];
extern char igFilterFun_className[];
extern char igFileInfoList_className[];
extern char igFileInfo_dependencies[];
extern char igFileInfo_className[];
extern char lbl_804A6BF0[];
extern char igFileInfo_vtable[];
extern char igFileInfoList_vtable[];
extern char lbl_804A8C58[];
extern char igStdFilterFun_vtable[];
extern char igBoxFilterFun_vtable[];
extern char igTriangleFilterFun_vtable[];
extern char igBellFilterFun_vtable[];
extern char igBSplineFilterFun_vtable[];
extern char igLanczos3FilterFun_vtable[];
extern char igMitchellFilterFun_vtable[];
extern char lbl_804A8FDC[];
extern char igSerialFilterFun_fieldTypes[4];
extern char igSerialFilterFun_fieldNames[4];
extern char igSerialFilterFun_fieldStorage[4];
extern char igSerialFilterFun_fieldOffsets[4];
extern char igFileInfoList_dependencies[8];
extern void *lbl_805621F4;
extern void *igMitchellFilterFun_meta;
extern void *igLanczos3FilterFun_meta;
extern void *igBSplineFilterFun_meta;
extern void *igBellFilterFun_meta;
extern void *igTriangleFilterFun_meta;
extern void *igBoxFilterFun_meta;
extern void *igStdFilterFun_meta;
extern void *igSerialFilterFun_meta;
extern void *igFilterFun_meta;
extern void *igFileInfoList_meta;
extern void *igFileInfo_meta;
void *igMitchellFilterFun_getMeta();
void *igMitchellFilterFun_vtableRead();
void igMitchellFilterFun_arkRegister();
void igMitchellFilterFun_register();
void *igMitchellFilterFun_getMetaCall();
void *igLanczos3FilterFun_getMeta();
void *igLanczos3FilterFun_vtableRead();
void igLanczos3FilterFun_arkRegister();
void igLanczos3FilterFun_register();
void *igLanczos3FilterFun_getMetaCall();
void *igBSplineFilterFun_getMeta();
void *igBSplineFilterFun_vtableRead();
void igBSplineFilterFun_arkRegister();
void igBSplineFilterFun_register();
void *igBSplineFilterFun_getMetaCall();
void *igBellFilterFun_getMeta();
void *igBellFilterFun_vtableRead();
void igBellFilterFun_arkRegister();
void igBellFilterFun_register();
void *igBellFilterFun_getMetaCall();
void *igTriangleFilterFun_getMeta();
void *igTriangleFilterFun_vtableRead();
void igTriangleFilterFun_arkRegister();
void igTriangleFilterFun_register();
void *igTriangleFilterFun_getMetaCall();
void *igBoxFilterFun_getMeta();
void *igBoxFilterFun_vtableRead();
void igBoxFilterFun_arkRegister();
void igBoxFilterFun_register();
void *igBoxFilterFun_getMetaCall();
void *igStdFilterFun_getMeta();
void *igStdFilterFun_vtableRead();
void igStdFilterFun_arkRegister();
void igStdFilterFun_register();
void *igStdFilterFun_getMetaCall();
void *igSerialFilterFun_getMeta();
void igSerialFilterFun_arkRegister();
void igSerialFilterFun_register();
void *igSerialFilterFun_getMetaCall();
void *igSerialFilterFun_parentMeta();
void igSerialFilterFun_fieldInit();
void *igFilterFun_getMeta();
void igFilterFun_arkRegister();
void igFilterFun_register();
void *igFilterFun_getMetaCall();
void *igFileInfoList_getMeta();
void *igFileInfoList_vtableRead();
void igFileInfoList_arkRegister();
void igFileInfoList_register();
void *igFileInfoList_getMetaCall();
void *igFileInfo_getMeta();
void *igFileInfo_vtableRead();
void igFileInfo_arkRegister();
void igFileInfo_register();
void *igFileInfo_getMetaCall();
}
struct UnknownGenObject80149D1C_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject80149E98_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject8014A014_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject8014A190_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject8014A30C_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject8014A488_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject8014A5CC_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject8014A9D0_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot8014AB6C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8014AB6C(){igObject_construct(this);}
};
struct UnknownGenObject8014AB6C_0 : UnknownGenRoot8014AB6C {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject8014AB6C_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject8014AB6C : UnknownGenObject8014AB6C_0 {
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 UnknownGenRefMember unknown14;
 UnknownGenRefMember unknown18;
 char unknown1C[4];
 inline ~UnknownGenObject8014AB6C(){unknown00=igFileInfo_vtable;}
};
extern "C" {
void *igMitchellFilterFun_create(void *object){
 igMitchellFilterFun_arkRegister();
 return meta_createInstance(igMitchellFilterFun_meta,object);
}
void *igMitchellFilterFun_getMeta(){
 if(!igMitchellFilterFun_meta || !(reinterpret_cast<unsigned int *>(igMitchellFilterFun_meta)[0x24/4]&4)) igMitchellFilterFun_arkRegister();
 return igMitchellFilterFun_meta;
}
void *igMitchellFilterFun_vtableRead(){
 UnknownGenObject80149D1C_0 object;
 igObject_construct(&object);
 object.unknown00=lbl_804A8FDC;
 object.unknown00=lbl_804A6BF0;
 object.unknown00=igMitchellFilterFun_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igMitchellFilterFun_arkRegister(){
 meta_registerNow((int)igMitchellFilterFun_register);
}
void igMitchellFilterFun_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igMitchellFilterFun_meta,(int)igSerialFilterFun_register,(int)fn_80149C04,(int)igMitchellFilterFun_getMetaCall,(int)igMitchellFilterFun_className,16,(int)igMitchellFilterFun_vtableRead,0,0,0);
}
void *igMitchellFilterFun_getMetaCall(){return igMitchellFilterFun_getMeta();}
void *igLanczos3FilterFun_create(void *object){
 igLanczos3FilterFun_arkRegister();
 return meta_createInstance(igLanczos3FilterFun_meta,object);
}
void *igLanczos3FilterFun_getMeta(){
 if(!igLanczos3FilterFun_meta || !(reinterpret_cast<unsigned int *>(igLanczos3FilterFun_meta)[0x24/4]&4)) igLanczos3FilterFun_arkRegister();
 return igLanczos3FilterFun_meta;
}
void *igLanczos3FilterFun_vtableRead(){
 UnknownGenObject80149E98_0 object;
 igObject_construct(&object);
 object.unknown00=lbl_804A8FDC;
 object.unknown00=lbl_804A6BF0;
 object.unknown00=igLanczos3FilterFun_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igLanczos3FilterFun_arkRegister(){
 meta_registerNow((int)igLanczos3FilterFun_register);
}
void igLanczos3FilterFun_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igLanczos3FilterFun_meta,(int)igSerialFilterFun_register,(int)fn_80149C04,(int)igLanczos3FilterFun_getMetaCall,(int)igLanczos3FilterFun_className,16,(int)igLanczos3FilterFun_vtableRead,0,0,0);
}
void *igLanczos3FilterFun_getMetaCall(){return igLanczos3FilterFun_getMeta();}
void *igBSplineFilterFun_create(void *object){
 igBSplineFilterFun_arkRegister();
 return meta_createInstance(igBSplineFilterFun_meta,object);
}
void *igBSplineFilterFun_getMeta(){
 if(!igBSplineFilterFun_meta || !(reinterpret_cast<unsigned int *>(igBSplineFilterFun_meta)[0x24/4]&4)) igBSplineFilterFun_arkRegister();
 return igBSplineFilterFun_meta;
}
void *igBSplineFilterFun_vtableRead(){
 UnknownGenObject8014A014_0 object;
 igObject_construct(&object);
 object.unknown00=lbl_804A8FDC;
 object.unknown00=lbl_804A6BF0;
 object.unknown00=igBSplineFilterFun_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igBSplineFilterFun_arkRegister(){
 meta_registerNow((int)igBSplineFilterFun_register);
}
void igBSplineFilterFun_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igBSplineFilterFun_meta,(int)igSerialFilterFun_register,(int)fn_80149C04,(int)igBSplineFilterFun_getMetaCall,(int)igBSplineFilterFun_className,16,(int)igBSplineFilterFun_vtableRead,0,0,0);
}
void *igBSplineFilterFun_getMetaCall(){return igBSplineFilterFun_getMeta();}
void *igBellFilterFun_create(void *object){
 igBellFilterFun_arkRegister();
 return meta_createInstance(igBellFilterFun_meta,object);
}
void *igBellFilterFun_getMeta(){
 if(!igBellFilterFun_meta || !(reinterpret_cast<unsigned int *>(igBellFilterFun_meta)[0x24/4]&4)) igBellFilterFun_arkRegister();
 return igBellFilterFun_meta;
}
void *igBellFilterFun_vtableRead(){
 UnknownGenObject8014A190_0 object;
 igObject_construct(&object);
 object.unknown00=lbl_804A8FDC;
 object.unknown00=lbl_804A6BF0;
 object.unknown00=igBellFilterFun_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igBellFilterFun_arkRegister(){
 meta_registerNow((int)igBellFilterFun_register);
}
void igBellFilterFun_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igBellFilterFun_meta,(int)igSerialFilterFun_register,(int)fn_80149C04,(int)igBellFilterFun_getMetaCall,(int)igBellFilterFun_className,16,(int)igBellFilterFun_vtableRead,0,0,0);
}
void *igBellFilterFun_getMetaCall(){return igBellFilterFun_getMeta();}
void *igTriangleFilterFun_create(void *object){
 igTriangleFilterFun_arkRegister();
 return meta_createInstance(igTriangleFilterFun_meta,object);
}
void *igTriangleFilterFun_getMeta(){
 if(!igTriangleFilterFun_meta || !(reinterpret_cast<unsigned int *>(igTriangleFilterFun_meta)[0x24/4]&4)) igTriangleFilterFun_arkRegister();
 return igTriangleFilterFun_meta;
}
void *igTriangleFilterFun_vtableRead(){
 UnknownGenObject8014A30C_0 object;
 igObject_construct(&object);
 object.unknown00=lbl_804A8FDC;
 object.unknown00=lbl_804A6BF0;
 object.unknown00=igTriangleFilterFun_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igTriangleFilterFun_arkRegister(){
 meta_registerNow((int)igTriangleFilterFun_register);
}
void igTriangleFilterFun_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igTriangleFilterFun_meta,(int)igSerialFilterFun_register,(int)fn_80149C04,(int)igTriangleFilterFun_getMetaCall,(int)igTriangleFilterFun_className,16,(int)igTriangleFilterFun_vtableRead,0,0,0);
}
void *igTriangleFilterFun_getMetaCall(){return igTriangleFilterFun_getMeta();}
void *igBoxFilterFun_create(void *object){
 igBoxFilterFun_arkRegister();
 return meta_createInstance(igBoxFilterFun_meta,object);
}
void *igBoxFilterFun_getMeta(){
 if(!igBoxFilterFun_meta || !(reinterpret_cast<unsigned int *>(igBoxFilterFun_meta)[0x24/4]&4)) igBoxFilterFun_arkRegister();
 return igBoxFilterFun_meta;
}
void *igBoxFilterFun_vtableRead(){
 UnknownGenObject8014A488_0 object;
 igObject_construct(&object);
 object.unknown00=lbl_804A8FDC;
 object.unknown00=lbl_804A6BF0;
 object.unknown00=igBoxFilterFun_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igBoxFilterFun_arkRegister(){
 meta_registerNow((int)igBoxFilterFun_register);
}
void igBoxFilterFun_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igBoxFilterFun_meta,(int)igSerialFilterFun_register,(int)fn_80149C04,(int)igBoxFilterFun_getMetaCall,(int)igBoxFilterFun_className,16,(int)igBoxFilterFun_vtableRead,0,0,0);
}
void *igBoxFilterFun_getMetaCall(){return igBoxFilterFun_getMeta();}
void *igStdFilterFun_getMeta(){
 if(!igStdFilterFun_meta || !(reinterpret_cast<unsigned int *>(igStdFilterFun_meta)[0x24/4]&4)) igStdFilterFun_arkRegister();
 return igStdFilterFun_meta;
}
void *igStdFilterFun_vtableRead(){
 UnknownGenObject8014A5CC_0 object;
 igObject_construct(&object);
 object.unknown00=lbl_804A8FDC;
 object.unknown00=lbl_804A6BF0;
 object.unknown00=igStdFilterFun_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igStdFilterFun_arkRegister(){
 meta_registerNow((int)igStdFilterFun_register);
}
void igStdFilterFun_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igStdFilterFun_meta,(int)igSerialFilterFun_register,(int)fn_80149C04,(int)igStdFilterFun_getMetaCall,(int)igStdFilterFun_className,16,(int)igStdFilterFun_vtableRead,0,0,0);
}
void *igStdFilterFun_getMetaCall(){return igStdFilterFun_getMeta();}
void *igSerialFilterFun_getMeta(){
 if(!igSerialFilterFun_meta || !(reinterpret_cast<unsigned int *>(igSerialFilterFun_meta)[0x24/4]&4)) igSerialFilterFun_arkRegister();
 return igSerialFilterFun_meta;
}
void igSerialFilterFun_arkRegister(){
 meta_registerNow((int)igSerialFilterFun_register);
}
void igSerialFilterFun_register(){
 fn_8012FC48();
 meta_registerClass(1,(int)&igSerialFilterFun_meta,(int)igFilterFun_register,(int)igSerialFilterFun_parentMeta,(int)igSerialFilterFun_getMetaCall,(int)igSerialFilterFun_className,16,0,(int)igSerialFilterFun_fieldInit,0,0);
}
void *igSerialFilterFun_getMetaCall(){return igSerialFilterFun_getMeta();}
void *igSerialFilterFun_parentMeta(){return igFilterFun_meta;}
void igSerialFilterFun_fieldInit(){
 void *value0=igSerialFilterFun_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,igSerialFilterFun_fieldTypes,1);
 meta_setupFields(value0,igSerialFilterFun_fieldNames,igSerialFilterFun_fieldStorage,igSerialFilterFun_fieldOffsets,value1);
}
void *fn_8014A834(){
 if(!igFilterFun_meta) igFilterFun_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igFilterFun_meta;
}
void *igFilterFun_getMeta(){
 if(!igFilterFun_meta || !(reinterpret_cast<unsigned int *>(igFilterFun_meta)[0x24/4]&4)) igFilterFun_arkRegister();
 return igFilterFun_meta;
}
void igFilterFun_arkRegister(){
 meta_registerNow((int)igFilterFun_register);
}
void igFilterFun_register(){
 fn_8012FC48();
 meta_registerClass(1,(int)&igFilterFun_meta,(int)igObject_register,(int)fn_800237D0,(int)igFilterFun_getMetaCall,(int)igFilterFun_className,8,0,0,0,0);
}
void *igFilterFun_getMetaCall(){return igFilterFun_getMeta();}
void *fn_8014A958(){
 if(!igFileInfoList_meta) igFileInfoList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igFileInfoList_meta;
}
void *igFileInfoList_getMeta(){
 if(!igFileInfoList_meta || !(reinterpret_cast<unsigned int *>(igFileInfoList_meta)[0x24/4]&4)) igFileInfoList_arkRegister();
 return igFileInfoList_meta;
}
void *igFileInfoList_vtableRead(){
 UnknownGenObject8014A9D0_0 object;
 igObject_construct(&object);
 object.unknown00=igDataList_vtable;
 object.unknown00=lbl_80476E0C;
 object.unknown00=igObjectList_vtable;
 object.unknown00=lbl_804A8C58;
 object.unknown00=igFileInfoList_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igFileInfoList_arkRegister(){
 meta_registerNow((int)igFileInfoList_register);
}
void igFileInfoList_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igFileInfoList_meta,(int)igObjectList_register,(int)fn_80024180,(int)igFileInfoList_getMetaCall,(int)igFileInfoList_className,20,(int)igFileInfoList_vtableRead,0,0,(int)igFileInfoList_dependencies);
}
void *igFileInfoList_getMetaCall(){return igFileInfoList_getMeta();}
void *fn_8014AAF4(){
 if(!igFileInfo_meta) igFileInfo_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igFileInfo_meta;
}
void *igFileInfo_getMeta(){
 if(!igFileInfo_meta || !(reinterpret_cast<unsigned int *>(igFileInfo_meta)[0x24/4]&4)) igFileInfo_arkRegister();
 return igFileInfo_meta;
}
void *igFileInfo_vtableRead(){
 UnknownGenObject8014AB6C object;
 object.unknown00=igNamedObject_vtable;
 object.unknown08.value=0;
 object.unknown00=igFileInfo_vtable;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 object.unknown14.value=0;
 object.unknown18.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igFileInfo_arkRegister(){
 meta_registerNow((int)igFileInfo_register);
}
void igFileInfo_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igFileInfo_meta,(int)igNamedObject_register,(int)fn_80023CF4,(int)igFileInfo_getMetaCall,(int)igFileInfo_className,28,(int)igFileInfo_vtableRead,(int)igFileInfo_fieldInit,0,(int)igFileInfo_dependencies);
}
void *igFileInfo_getMetaCall(){return igFileInfo_getMeta();}
}
#pragma pop
