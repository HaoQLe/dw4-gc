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
void igAnimation_fieldInit();
void igNamedObject_register();
void igObjectList_register();
extern char igDataList_vtable[];
extern char igNamedObject_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igAnimationList_className[];
extern char igAnimation_dependencies[];
extern char igAnimation_className[];
extern char igAnimationList_vtable[];
extern char lbl_804B5E04[];
extern char igAnimation_vtable[];
extern char igAnimationList_dependencies[8];
extern void *lbl_805621F4;
extern void *igAnimationList_meta;
extern void *igAnimation_meta;
void *igAnimationList_getMeta();
void *igAnimationList_vtableRead();
void igAnimationList_arkRegister();
void igAnimationList_register();
void *igAnimationList_getMetaCall();
void *igAnimation_getMeta();
void *igAnimation_vtableRead();
void igAnimation_arkRegister();
void igAnimation_register();
void *igAnimation_getMetaCall();
}
struct UnknownGenObject801CC43C_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot801CC610 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801CC610(){igObject_construct(this);}
};
struct UnknownGenObject801CC610_0 : UnknownGenRoot801CC610 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject801CC610_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject801CC610 : UnknownGenObject801CC610_0 {
 char unknown0C[4];
 UnknownGenRefMember unknown10;
 UnknownGenRefMember unknown14;
 UnknownGenRefMember unknown18;
 char unknown1C[28];
 UnknownGenRefMember unknown38;
 char unknown3C[4];
 inline ~UnknownGenObject801CC610(){unknown00=igAnimation_vtable;}
};
extern "C" {
void *fn_801CC3C4(){
 if(!igAnimationList_meta) igAnimationList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igAnimationList_meta;
}
}
#pragma pop
