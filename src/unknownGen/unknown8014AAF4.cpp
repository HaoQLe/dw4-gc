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
