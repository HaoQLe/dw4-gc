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
void fn_8012FC48();
void *fn_801308D0();
void *fn_801651CC();
void *fn_801652D4();
void igCachedInstanceLock_register();
void igCreateBoundingBoxes_fieldInit();
void igObjectList_register();
void igOptBase_register();
extern char igDataList_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igMetaEnumList_className[];
extern char igDataListList_className[];
extern char igDataPumpLock_className[];
extern char igCreateInfosFromRegistry_className[];
extern char igCreateBoundingBoxes_className[];
extern char lbl_804A4A04[];
extern char lbl_804A6460[];
extern char lbl_804A6564[];
extern char igDataPumpLock_vtable[];
extern char igCreateInfosFromRegistry_vtable[];
extern char igCreateBoundingBoxes_vtable[];
extern char lbl_804A8524[];
extern char igDataListList_vtable[];
extern char lbl_804A89A4[];
extern char igMetaEnumList_vtable[];
extern char lbl_804A8A6C[];
extern char lbl_804AA8E4[];
extern char lbl_804AAF48[];
extern char igMetaEnumList_dependencies[8];
extern char igDataListList_dependencies[8];
extern char igCreateInfosFromRegistry_fieldTypes[8];
extern char igCreateInfosFromRegistry_fieldNames[8];
extern char igCreateInfosFromRegistry_fieldStorage[8];
extern char igCreateInfosFromRegistry_fieldOffsets[8];
extern void *lbl_805621F4;
extern void *igMetaEnumList_meta;
extern void *igDataListList_meta;
extern void *igDataPumpLock_meta;
extern void *igCreateInfosFromRegistry_meta;
extern void *igCreateBoundingBoxes_meta;
extern void *igCachedInstanceLock_meta;
void *igMetaEnumList_getMeta();
void *igMetaEnumList_vtableRead();
void igMetaEnumList_arkRegister();
void igMetaEnumList_register();
void *igMetaEnumList_getMetaCall();
void *igDataListList_getMeta();
void *igDataListList_vtableRead();
void igDataListList_arkRegister();
void igDataListList_register();
void *igDataListList_getMetaCall();
void *igDataPumpLock_getMeta();
void *igDataPumpLock_vtableRead();
void igDataPumpLock_arkRegister();
void igDataPumpLock_register();
void *igDataPumpLock_getMetaCall();
void *igDataPumpLock_parentMeta();
void *igCreateInfosFromRegistry_getMeta();
void *igCreateInfosFromRegistry_vtableRead();
void igCreateInfosFromRegistry_arkRegister();
void igCreateInfosFromRegistry_register();
void *igCreateInfosFromRegistry_getMetaCall();
void igCreateInfosFromRegistry_fieldInit();
void *igCreateBoundingBoxes_getMeta();
void *igCreateBoundingBoxes_vtableRead();
void igCreateBoundingBoxes_arkRegister();
void igCreateBoundingBoxes_register();
void *igCreateBoundingBoxes_getMetaCall();
}
struct UnknownGenObject8014CE04_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject8014CFD8_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject8014D138_0 {
 void *unknown00;
 char unknown04[36];
};
struct UnknownGenRoot8014D29C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8014D29C(){igObject_construct(this);}
};
struct UnknownGenObject8014D29C_0 : UnknownGenRoot8014D29C {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject8014D29C_0(){unknown00=lbl_804A4A04;}
};
struct UnknownGenObject8014D29C : UnknownGenObject8014D29C_0 {
 UnknownGenString unknown28;
 char unknown2C[12];
 inline ~UnknownGenObject8014D29C(){unknown00=igCreateInfosFromRegistry_vtable;}
};
struct UnknownGenRoot8014D528 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8014D528(){igObject_construct(this);}
};
struct UnknownGenObject8014D528_0 : UnknownGenRoot8014D528 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject8014D528_0(){unknown00=lbl_804A4A04;}
};
struct UnknownGenObject8014D528 : UnknownGenObject8014D528_0 {
 char unknown28[4];
 UnknownGenString unknown2C;
 char unknown30[8];
 inline ~UnknownGenObject8014D528(){unknown00=igCreateBoundingBoxes_vtable;}
};
extern "C" {
void *igCreateBoundingBoxes_getMeta(){
 if(!igCreateBoundingBoxes_meta || !(reinterpret_cast<unsigned int *>(igCreateBoundingBoxes_meta)[0x24/4]&4)) igCreateBoundingBoxes_arkRegister();
 return igCreateBoundingBoxes_meta;
}
void *igCreateBoundingBoxes_vtableRead(){
 UnknownGenObject8014D528 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A4A04;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=igCreateBoundingBoxes_vtable;
 object.unknown2C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igCreateBoundingBoxes_arkRegister(){
 meta_registerNow((int)igCreateBoundingBoxes_register);
}
void igCreateBoundingBoxes_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igCreateBoundingBoxes_meta,(int)igOptBase_register,(int)fn_801308D0,(int)igCreateBoundingBoxes_getMetaCall,(int)igCreateBoundingBoxes_className,52,(int)igCreateBoundingBoxes_vtableRead,(int)igCreateBoundingBoxes_fieldInit,0,0);
}
void *igCreateBoundingBoxes_getMetaCall(){return igCreateBoundingBoxes_getMeta();}
}
#pragma pop
