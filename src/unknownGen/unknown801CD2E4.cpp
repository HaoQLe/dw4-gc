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
void igAnimationTrack_fieldInit();
void igNamedObject_register();
void igObjectList_register();
extern char igDataList_vtable[];
extern char igNamedObject_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igAnimationTrackList_className[];
extern char igAnimationTrack_className[];
extern char igAnimationTrack_vtable[];
extern char igAnimationTrackList_vtable[];
extern char lbl_804B5A98[];
extern char igAnimationTrackList_dependencies[8];
extern char igAnimationTrack_dependencies[8];
extern void *lbl_805621F4;
extern void *igAnimationTrackList_meta;
extern void *igAnimationTrack_meta;
void *igAnimationTrackList_getMeta();
void *igAnimationTrackList_vtableRead();
void igAnimationTrackList_arkRegister();
void igAnimationTrackList_register();
void *igAnimationTrackList_getMetaCall();
void *igAnimationTrack_getMeta();
void *igAnimationTrack_vtableRead();
void igAnimationTrack_arkRegister();
void igAnimationTrack_register();
void *igAnimationTrack_getMetaCall();
}
struct UnknownGenObject801CD35C_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot801CD4F4 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801CD4F4(){igObject_construct(this);}
};
struct UnknownGenObject801CD4F4_0 : UnknownGenRoot801CD4F4 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject801CD4F4_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject801CD4F4 : UnknownGenObject801CD4F4_0 {
 UnknownGenRefMember unknown0C;
 char unknown10[32];
 inline ~UnknownGenObject801CD4F4(){unknown00=igAnimationTrack_vtable;}
};
extern "C" {
void *fn_801CD2E4(){
 if(!igAnimationTrackList_meta) igAnimationTrackList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igAnimationTrackList_meta;
}
}
#pragma pop
