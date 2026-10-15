#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80023CF4();
void *fn_80024180();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void *fn_80122790();
void fn_801AA6DC();
void *fn_801B74F0();
void igAnimationHierarchy_register();
void igNamedObject_register();
void igObjectList_register();
void igSkeleton_fieldInit();
extern char igDataList_vtable[];
extern char igNamedObject_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igSkinList_className[];
extern char igSkin_dependencies[];
extern char igSkeletonList_className[];
extern char igSkeleton_className[];
extern char igSkeleton_vtable[];
extern char lbl_804B9324[];
extern char igSkeletonList_vtable[];
extern char lbl_804B9408[];
extern char igSkin_vtable[];
extern char igSkinList_vtable[];
extern char lbl_804B952C[];
extern char igSkinList_dependencies[8];
extern char lbl_8056021C[7];
extern char igSkin_fieldTypes[8];
extern char igSkin_fieldNames[8];
extern char igSkin_fieldStorage[8];
extern char igSkin_fieldOffsets[8];
extern char igSkeletonList_dependencies[8];
extern char igSkeleton_dependencies[8];
extern void *lbl_805621F4;
extern void *igSkinList_meta;
extern void *igSkin_meta;
extern void *igSkeletonList_meta;
extern void *igSkeleton_meta;
extern void *igAnimationHierarchy_meta;
void *igSkinList_getMeta();
void *igSkinList_vtableRead();
void igSkinList_arkRegister();
void igSkinList_register();
void *igSkinList_getMetaCall();
void *igSkin_getMeta();
void *igSkin_vtableRead();
void igSkin_arkRegister();
void igSkin_register();
void *igSkin_getMetaCall();
void igSkin_fieldInit();
void *igSkeletonList_getMeta();
void *igSkeletonList_vtableRead();
void igSkeletonList_arkRegister();
void igSkeletonList_register();
void *igSkeletonList_getMetaCall();
void *igSkeleton_getMeta();
void *igSkeleton_vtableRead();
void igSkeleton_arkRegister();
void igSkeleton_register();
void *igSkeleton_getMetaCall();
void *igSkeleton_parentMeta();
}
struct UnknownGenObject801AF510_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot801AF6AC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801AF6AC(){igObject_construct(this);}
};
struct UnknownGenObject801AF6AC_0 : UnknownGenRoot801AF6AC {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject801AF6AC_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject801AF6AC : UnknownGenObject801AF6AC_0 {
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 char unknown14[4];
 inline ~UnknownGenObject801AF6AC(){unknown00=igSkin_vtable;}
};
struct UnknownGenObject801AF990_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot801AFAF0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801AFAF0(){igObject_construct(this);}
};
struct UnknownGenObject801AFAF0_0 : UnknownGenRoot801AFAF0 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject801AFAF0_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject801AFAF0_1 : UnknownGenObject801AFAF0_0 {
 inline ~UnknownGenObject801AFAF0_1(){unknown00=lbl_804B9324;}
};
struct UnknownGenObject801AFAF0 : UnknownGenObject801AFAF0_1 {
 char unknown0C[4];
 UnknownGenRefMember unknown10;
 char unknown14[12];
 inline ~UnknownGenObject801AFAF0(){unknown00=igSkeleton_vtable;}
};
extern "C" {
void *fn_801AF634(){
 if(!igSkin_meta) igSkin_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igSkin_meta;
}
}
#pragma pop
