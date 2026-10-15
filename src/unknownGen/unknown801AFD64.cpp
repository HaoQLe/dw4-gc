#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80023CF4();
void *fn_80024180();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_801AA6DC();
void igNamedObject_register();
void igObjectList_register();
void igSkeletonBoneInfo_fieldInit();
extern char igDataList_vtable[];
extern char igNamedObject_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igSkeletonBoneInfoList_className[];
extern char igSkeletonBoneInfo_className[];
extern char igSkeletonBoneInfo_vtable[];
extern char igSkeletonBoneInfoList_vtable[];
extern char lbl_804B92C0[];
extern char igSkeletonBoneInfoList_dependencies[8];
extern void *lbl_805621F4;
extern void *igSkeletonBoneInfoList_meta;
extern void *igSkeletonBoneInfo_meta;
void *igSkeletonBoneInfoList_getMeta();
void *igSkeletonBoneInfoList_vtableRead();
void igSkeletonBoneInfoList_arkRegister();
void igSkeletonBoneInfoList_register();
void *igSkeletonBoneInfoList_getMetaCall();
void *igSkeletonBoneInfo_getMeta();
void *igSkeletonBoneInfo_vtableRead();
void igSkeletonBoneInfo_arkRegister();
void igSkeletonBoneInfo_register();
void *igSkeletonBoneInfo_getMetaCall();
}
struct UnknownGenObject801AFDDC_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot801AFF74 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801AFF74(){igObject_construct(this);}
};
struct UnknownGenObject801AFF74_0 : UnknownGenRoot801AFF74 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject801AFF74_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject801AFF74 : UnknownGenObject801AFF74_0 {
 char unknown0C[20];
 inline ~UnknownGenObject801AFF74(){unknown00=igSkeletonBoneInfo_vtable;}
};
extern "C" {
void *fn_801AFD64(){
 if(!igSkeletonBoneInfoList_meta) igSkeletonBoneInfoList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igSkeletonBoneInfoList_meta;
}
}
#pragma pop
