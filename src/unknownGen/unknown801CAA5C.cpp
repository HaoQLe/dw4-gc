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
extern char igAnimationDatabase_dependencies[];
extern char igAnimationDatabase_className[];
extern char igAnimationDatabase_vtable[];
extern char igAnimationDatabaseList_vtable[];
extern char lbl_804B63E8[];
extern char igAnimationDatabaseList_dependencies[8];
extern void *lbl_805621F4;
extern void *igAnimationDatabaseList_meta;
extern void *igAnimationDatabase_meta;
void *igAnimationDatabaseList_getMeta();
void *igAnimationDatabaseList_vtableRead();
void igAnimationDatabaseList_arkRegister();
void igAnimationDatabaseList_register();
void *igAnimationDatabaseList_getMetaCall();
void *igAnimationDatabase_getMeta();
void *igAnimationDatabase_vtableRead();
void igAnimationDatabase_arkRegister();
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
}
#pragma pop
