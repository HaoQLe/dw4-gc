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
void igActorInfo_fieldInit();
void igInfo_register();
void igObjectList_register();
extern char igInfo_vtable[];
extern char igDataList_vtable[];
extern char igNamedObject_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igActorInfoList_className[];
extern char igActorInfo_dependencies[];
extern char igActorInfo_className[];
extern char igActorInfo_vtable[];
extern char igActorInfoList_vtable[];
extern char lbl_804B5974[];
extern char igActorInfoList_dependencies[8];
extern void *lbl_805621F4;
extern void *igActorInfoList_meta;
extern void *igActorInfo_meta;
void *igActorInfoList_getMeta();
void *igActorInfoList_vtableRead();
void igActorInfoList_arkRegister();
void igActorInfoList_register();
void *igActorInfoList_getMetaCall();
void *igActorInfo_getMeta();
void *igActorInfo_vtableRead();
void igActorInfo_arkRegister();
void igActorInfo_register();
void *igActorInfo_getMetaCall();
}
struct UnknownGenObject801CD790_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot801CD928 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801CD928(){igObject_construct(this);}
};
struct UnknownGenObject801CD928_0 : UnknownGenRoot801CD928 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject801CD928_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject801CD928_1 : UnknownGenObject801CD928_0 {
 inline ~UnknownGenObject801CD928_1(){unknown00=igInfo_vtable;}
};
struct UnknownGenObject801CD928 : UnknownGenObject801CD928_1 {
 char unknown0C[8];
 UnknownGenRefMember unknown14;
 UnknownGenRefMember unknown18;
 UnknownGenRefMember unknown1C;
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 char unknown28[8];
 inline ~UnknownGenObject801CD928(){unknown00=igActorInfo_vtable;}
};
extern "C" {
void *fn_801CD718(){
 if(!igActorInfoList_meta) igActorInfoList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igActorInfoList_meta;
}
}
#pragma pop
