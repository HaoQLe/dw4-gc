#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80024180();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_801AA6DC();
void *fn_801AF130();
void igAnimationCombinerBoneInfo_fieldInit();
void igObjectList_register();
void igObjectPool_register();
void igObject_register();
extern char igDataList_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igAnimationCombinerBoneInfoPool_className[];
extern char igAnimationCombinerBoneInfoListList_className[];
extern char igAnimationCombinerBoneInfoList_className[];
extern char igAnimationCombinerBoneInfo_dependencies[];
extern char igAnimationCombinerBoneInfo_className[];
extern char igAnimationCombinerBoneInfo_vtable[];
extern char igAnimationCombinerBoneInfoList_vtable[];
extern char lbl_804B6190[];
extern char igAnimationCombinerBoneInfoListList_vtable[];
extern char lbl_804B6258[];
extern char igAnimationCombinerBoneInfoPool_vtable[];
extern char lbl_804B6320[];
extern char igObjectPool_vtable[];
extern char igAnimationCombinerBoneInfoPool_dependencies[8];
extern char igAnimationCombinerBoneInfoListList_dependencies[8];
extern char igAnimationCombinerBoneInfoList_dependencies[8];
extern void *lbl_805621F4;
extern void *igAnimationCombinerBoneInfoPool_meta;
extern void *igAnimationCombinerBoneInfoListList_meta;
extern void *igAnimationCombinerBoneInfoList_meta;
extern void *igAnimationCombinerBoneInfo_meta;
void *igAnimationCombinerBoneInfoPool_getMeta();
void *igAnimationCombinerBoneInfoPool_vtableRead();
void igAnimationCombinerBoneInfoPool_arkRegister();
void igAnimationCombinerBoneInfoPool_register();
void *igAnimationCombinerBoneInfoPool_getMetaCall();
void *igAnimationCombinerBoneInfoListList_getMeta();
void *igAnimationCombinerBoneInfoListList_vtableRead();
void igAnimationCombinerBoneInfoListList_arkRegister();
void igAnimationCombinerBoneInfoListList_register();
void *igAnimationCombinerBoneInfoListList_getMetaCall();
void *igAnimationCombinerBoneInfoList_getMeta();
void *igAnimationCombinerBoneInfoList_vtableRead();
void igAnimationCombinerBoneInfoList_arkRegister();
void igAnimationCombinerBoneInfoList_register();
void *igAnimationCombinerBoneInfoList_getMetaCall();
void *igAnimationCombinerBoneInfo_getMeta();
void *igAnimationCombinerBoneInfo_vtableRead();
void igAnimationCombinerBoneInfo_arkRegister();
void igAnimationCombinerBoneInfo_register();
void *igAnimationCombinerBoneInfo_getMetaCall();
}
struct UnknownGenObject801CB0C4_0 {
 void *unknown00;
 char unknown04[36];
};
struct UnknownGenObject801CB26C_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject801CB404_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot801CB59C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801CB59C(){igObject_construct(this);}
};
struct UnknownGenObject801CB59C : UnknownGenRoot801CB59C {
 char unknown04[8];
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 char unknown14[44];
 inline ~UnknownGenObject801CB59C(){unknown00=igAnimationCombinerBoneInfo_vtable;}
};
extern "C" {
void *fn_801CB1F4(){
 if(!igAnimationCombinerBoneInfoListList_meta) igAnimationCombinerBoneInfoListList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igAnimationCombinerBoneInfoListList_meta;
}
}
#pragma pop
