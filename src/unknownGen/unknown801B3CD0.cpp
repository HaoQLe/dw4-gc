#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800284EC();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void *fn_8011148C();
void fn_801AA6DC();
void igGroup_register();
void igInfo_register();
void igSceneInfo_fieldInit();
extern char igInfo_vtable[];
extern char igNamedObject_vtable[];
extern char igSegment_className[];
extern char igSceneInfo_dependencies[];
extern char igSceneInfo_className[];
extern char igSceneInfo_vtable[];
extern char igNode_vtable[];
extern char igGroup_vtable[];
extern char igSegment_vtable[];
extern void *lbl_805621F4;
extern void *igSegment_meta;
extern void *igSceneInfo_meta;
void *igSegment_getMeta();
void *igSegment_vtableRead();
void igSegment_arkRegister();
void igSegment_register();
void *igSegment_getMetaCall();
void *igSceneInfo_getMeta();
void *igSceneInfo_vtableRead();
void igSceneInfo_arkRegister();
void igSceneInfo_register();
void *igSceneInfo_getMetaCall();
}
struct UnknownGenRoot801B3D48 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801B3D48(){igObject_construct(this);}
};
struct UnknownGenObject801B3D48_0 : UnknownGenRoot801B3D48 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject801B3D48_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject801B3D48_1 : UnknownGenObject801B3D48_0 {
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 inline ~UnknownGenObject801B3D48_1(){unknown00=igNode_vtable;}
};
struct UnknownGenObject801B3D48_2 : UnknownGenObject801B3D48_1 {
 char unknown14[8];
 UnknownGenRefMember unknown1C;
 inline ~UnknownGenObject801B3D48_2(){unknown00=igGroup_vtable;}
};
struct UnknownGenObject801B3D48 : UnknownGenObject801B3D48_2 {
 char unknown20[8];
 inline ~UnknownGenObject801B3D48(){unknown00=igSegment_vtable;}
};
struct UnknownGenRoot801B4020 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801B4020(){igObject_construct(this);}
};
struct UnknownGenObject801B4020_0 : UnknownGenRoot801B4020 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject801B4020_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject801B4020_1 : UnknownGenObject801B4020_0 {
 inline ~UnknownGenObject801B4020_1(){unknown00=igInfo_vtable;}
};
struct UnknownGenObject801B4020 : UnknownGenObject801B4020_1 {
 char unknown0C[8];
 UnknownGenRefMember unknown14;
 UnknownGenRefMember unknown18;
 UnknownGenRefMember unknown1C;
 char unknown20[28];
 UnknownGenRefMember unknown3C;
 inline ~UnknownGenObject801B4020(){unknown00=igSceneInfo_vtable;}
};
extern "C" {
void *fn_801B3CD0(){
 if(!igSegment_meta) igSegment_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igSegment_meta;
}
}
#pragma pop
