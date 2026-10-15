#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void *fn_800284EC();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_801AA6DC();
void igAnimationDatabase_fieldInit();
void igInfo_register();
void igObjectList_register();
extern char igInfo_vtable[];
extern char igDataList_vtable[];
extern char igNamedObject_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igAnimationDatabaseList_className[];
extern char lbl_804B20DC[];
extern char igAnimationDatabase_className[];
extern char igAnimationDatabase_vtable[];
extern char igAnimationDatabaseList_vtable[];
extern char lbl_804B63E8[];
extern char lbl_805609A8[8];
extern void *lbl_805621F4;
extern void *igAnimationDatabaseList_meta;
extern void *igAnimationDatabase_meta;
void *igAnimationDatabaseList_getMeta();
void *igAnimationDatabaseList_vtableRead();
void igAnimationDatabaseList_registerNow();
void igAnimationDatabaseList_register();
void *igAnimationDatabaseList_getMetaCall();
void *igAnimationDatabase_getMeta();
void *igAnimationDatabase_vtableRead();
void igAnimationDatabase_registerNow();
void igAnimationDatabase_register();
void *igAnimationDatabase_getMetaCall();
}
struct UnknownGenObject801CAAD4_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot801CACA8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801CACA8(){igObject_construct(this);}
};
struct UnknownGenObject801CACA8_0 : UnknownGenRoot801CACA8 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject801CACA8_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject801CACA8_1 : UnknownGenObject801CACA8_0 {
 inline ~UnknownGenObject801CACA8_1(){unknown00=igInfo_vtable;}
};
struct UnknownGenObject801CACA8 : UnknownGenObject801CACA8_1 {
 char unknown0C[8];
 UnknownGenRefMember unknown14;
 UnknownGenRefMember unknown18;
 UnknownGenRefMember unknown1C;
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 char unknown28[8];
 inline ~UnknownGenObject801CACA8(){unknown00=igAnimationDatabase_vtable;}
};
extern "C" {
void *fn_801CAA5C(){
 if(!igAnimationDatabaseList_meta) igAnimationDatabaseList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igAnimationDatabaseList_meta;
}
void *igAnimationDatabaseList_getMeta(){
 if(!igAnimationDatabaseList_meta || !(reinterpret_cast<unsigned int *>(igAnimationDatabaseList_meta)[0x24/4]&4)) igAnimationDatabaseList_registerNow();
 return igAnimationDatabaseList_meta;
}
void *igAnimationDatabaseList_vtableRead(){
 UnknownGenObject801CAAD4_0 object;
 igObject_construct(&object);
 object.unknown00=igDataList_vtable;
 object.unknown00=lbl_80476E0C;
 object.unknown00=igObjectList_vtable;
 object.unknown00=lbl_804B63E8;
 object.unknown00=igAnimationDatabaseList_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igAnimationDatabaseList_registerNow(){
 meta_registerNow((int)igAnimationDatabaseList_register);
}
void igAnimationDatabaseList_register(){
 fn_801AA6DC();
 meta_registerClass(0,(int)&igAnimationDatabaseList_meta,(int)igObjectList_register,(int)fn_80024180,(int)igAnimationDatabaseList_getMetaCall,(int)igAnimationDatabaseList_className,20,(int)igAnimationDatabaseList_vtableRead,0,0,(int)lbl_805609A8);
}
void *igAnimationDatabaseList_getMetaCall(){return igAnimationDatabaseList_getMeta();}
void *igAnimationDatabase_create(void *object){
 igAnimationDatabase_registerNow();
 return meta_createInstance(igAnimationDatabase_meta,object);
}
void *fn_801CAC30(){
 if(!igAnimationDatabase_meta) igAnimationDatabase_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igAnimationDatabase_meta;
}
void *igAnimationDatabase_getMeta(){
 if(!igAnimationDatabase_meta || !(reinterpret_cast<unsigned int *>(igAnimationDatabase_meta)[0x24/4]&4)) igAnimationDatabase_registerNow();
 return igAnimationDatabase_meta;
}
void *igAnimationDatabase_vtableRead(){
 UnknownGenObject801CACA8 object;
 object.unknown00=igNamedObject_vtable;
 object.unknown08.value=0;
 object.unknown00=igInfo_vtable;
 object.unknown00=igAnimationDatabase_vtable;
 object.unknown14.value=0;
 object.unknown18.value=0;
 object.unknown1C.value=0;
 object.unknown20.value=0;
 object.unknown24.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igAnimationDatabase_registerNow(){
 meta_registerNow((int)igAnimationDatabase_register);
}
void igAnimationDatabase_register(){
 fn_801AA6DC();
 meta_registerClass(0,(int)&igAnimationDatabase_meta,(int)igInfo_register,(int)fn_800284EC,(int)igAnimationDatabase_getMetaCall,(int)igAnimationDatabase_className,40,(int)igAnimationDatabase_vtableRead,(int)igAnimationDatabase_fieldInit,0,(int)lbl_804B20DC);
}
void *igAnimationDatabase_getMetaCall(){return igAnimationDatabase_getMeta();}
}
#pragma pop
