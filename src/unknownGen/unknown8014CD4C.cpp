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
extern char lbl_8055FBB0[8];
extern char lbl_8055FBB8[8];
extern char lbl_8055FBC0[8];
extern char lbl_8055FBC8[8];
extern char lbl_8055FBD0[8];
extern char lbl_8055FBD8[8];
extern void *lbl_805621F4;
extern void *igMetaEnumList_meta;
extern void *igDataListList_meta;
extern void *igDataPumpLock_meta;
extern void *igCreateInfosFromRegistry_meta;
extern void *igCreateBoundingBoxes_meta;
extern void *igCachedInstanceLock_meta;
void *igMetaEnumList_getMeta();
void *igMetaEnumList_vtableRead();
void igMetaEnumList_registerNow();
void igMetaEnumList_register();
void *igMetaEnumList_getMetaCall();
void *igDataListList_getMeta();
void *igDataListList_vtableRead();
void igDataListList_registerNow();
void igDataListList_register();
void *igDataListList_getMetaCall();
void *igDataPumpLock_getMeta();
void *igDataPumpLock_vtableRead();
void igDataPumpLock_registerNow();
void igDataPumpLock_register();
void *igDataPumpLock_getMetaCall();
void *igDataPumpLock_parentMeta();
void *igCreateInfosFromRegistry_getMeta();
void *igCreateInfosFromRegistry_vtableRead();
void igCreateInfosFromRegistry_registerNow();
void igCreateInfosFromRegistry_register();
void *igCreateInfosFromRegistry_getMetaCall();
void igCreateInfosFromRegistry_fieldInit();
void *igCreateBoundingBoxes_getMeta();
void *igCreateBoundingBoxes_vtableRead();
void igCreateBoundingBoxes_registerNow();
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
void *fn_8014CD4C(){return fn_801651CC();}
void *fn_8014CD6C(){return fn_801652D4();}
void *fn_8014CD8C(){
 if(!igMetaEnumList_meta) igMetaEnumList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igMetaEnumList_meta;
}
void *igMetaEnumList_getMeta(){
 if(!igMetaEnumList_meta || !(reinterpret_cast<unsigned int *>(igMetaEnumList_meta)[0x24/4]&4)) igMetaEnumList_registerNow();
 return igMetaEnumList_meta;
}
void *igMetaEnumList_vtableRead(){
 UnknownGenObject8014CE04_0 object;
 igObject_construct(&object);
 object.unknown00=igDataList_vtable;
 object.unknown00=lbl_80476E0C;
 object.unknown00=igObjectList_vtable;
 object.unknown00=lbl_804A8A6C;
 object.unknown00=igMetaEnumList_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igMetaEnumList_registerNow(){
 meta_registerNow((int)igMetaEnumList_register);
}
void igMetaEnumList_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igMetaEnumList_meta,(int)igObjectList_register,(int)fn_80024180,(int)igMetaEnumList_getMetaCall,(int)igMetaEnumList_className,20,(int)igMetaEnumList_vtableRead,0,0,(int)lbl_8055FBB0);
}
void *igMetaEnumList_getMetaCall(){return igMetaEnumList_getMeta();}
void *igDataListList_create(void *object){
 igDataListList_registerNow();
 return meta_createInstance(igDataListList_meta,object);
}
void *fn_8014CF60(){
 if(!igDataListList_meta) igDataListList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igDataListList_meta;
}
void *igDataListList_getMeta(){
 if(!igDataListList_meta || !(reinterpret_cast<unsigned int *>(igDataListList_meta)[0x24/4]&4)) igDataListList_registerNow();
 return igDataListList_meta;
}
void *igDataListList_vtableRead(){
 UnknownGenObject8014CFD8_0 object;
 igObject_construct(&object);
 object.unknown00=igDataList_vtable;
 object.unknown00=lbl_80476E0C;
 object.unknown00=igObjectList_vtable;
 object.unknown00=lbl_804A89A4;
 object.unknown00=igDataListList_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igDataListList_registerNow(){
 meta_registerNow((int)igDataListList_register);
}
void igDataListList_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igDataListList_meta,(int)igObjectList_register,(int)fn_80024180,(int)igDataListList_getMetaCall,(int)igDataListList_className,20,(int)igDataListList_vtableRead,0,0,(int)lbl_8055FBB8);
}
void *igDataListList_getMetaCall(){return igDataListList_getMeta();}
void *igDataPumpLock_getMeta(){
 if(!igDataPumpLock_meta || !(reinterpret_cast<unsigned int *>(igDataPumpLock_meta)[0x24/4]&4)) igDataPumpLock_registerNow();
 return igDataPumpLock_meta;
}
void *igDataPumpLock_vtableRead(){
 UnknownGenObject8014D138_0 object;
 igObject_construct(&object);
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AA8E4;
 object.unknown00=lbl_804A6564;
 object.unknown00=lbl_804A8524;
 object.unknown00=igDataPumpLock_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igDataPumpLock_registerNow(){
 meta_registerNow((int)igDataPumpLock_register);
}
void igDataPumpLock_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igDataPumpLock_meta,(int)igCachedInstanceLock_register,(int)igDataPumpLock_parentMeta,(int)igDataPumpLock_getMetaCall,(int)igDataPumpLock_className,32,(int)igDataPumpLock_vtableRead,0,0,0);
}
void *igDataPumpLock_getMetaCall(){return igDataPumpLock_getMeta();}
void *igDataPumpLock_parentMeta(){return igCachedInstanceLock_meta;}
void *igCreateInfosFromRegistry_getMeta(){
 if(!igCreateInfosFromRegistry_meta || !(reinterpret_cast<unsigned int *>(igCreateInfosFromRegistry_meta)[0x24/4]&4)) igCreateInfosFromRegistry_registerNow();
 return igCreateInfosFromRegistry_meta;
}
void *igCreateInfosFromRegistry_vtableRead(){
 UnknownGenObject8014D29C object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A4A04;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=igCreateInfosFromRegistry_vtable;
 object.unknown28.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igCreateInfosFromRegistry_registerNow(){
 meta_registerNow((int)igCreateInfosFromRegistry_register);
}
void igCreateInfosFromRegistry_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igCreateInfosFromRegistry_meta,(int)igOptBase_register,(int)fn_801308D0,(int)igCreateInfosFromRegistry_getMetaCall,(int)igCreateInfosFromRegistry_className,48,(int)igCreateInfosFromRegistry_vtableRead,(int)igCreateInfosFromRegistry_fieldInit,0,0);
}
void *igCreateInfosFromRegistry_getMetaCall(){return igCreateInfosFromRegistry_getMeta();}
void igCreateInfosFromRegistry_fieldInit(){
 void *value0=igCreateInfosFromRegistry_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,lbl_8055FBC0,2);
 meta_setupFields(value0,lbl_8055FBC8,lbl_8055FBD0,lbl_8055FBD8,value1);
}
void *igCreateBoundingBoxes_getMeta(){
 if(!igCreateBoundingBoxes_meta || !(reinterpret_cast<unsigned int *>(igCreateBoundingBoxes_meta)[0x24/4]&4)) igCreateBoundingBoxes_registerNow();
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
void igCreateBoundingBoxes_registerNow(){
 meta_registerNow((int)igCreateBoundingBoxes_register);
}
void igCreateBoundingBoxes_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igCreateBoundingBoxes_meta,(int)igOptBase_register,(int)fn_801308D0,(int)igCreateBoundingBoxes_getMetaCall,(int)igCreateBoundingBoxes_className,52,(int)igCreateBoundingBoxes_vtableRead,(int)igCreateBoundingBoxes_fieldInit,0,0);
}
void *igCreateBoundingBoxes_getMetaCall(){return igCreateBoundingBoxes_getMeta();}
}
#pragma pop
