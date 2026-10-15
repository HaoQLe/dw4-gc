#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_801AA6DC();
void *fn_801CBE9C();
void igAnimationCombiner_fieldInit();
void igAnimationSystem_register();
void igObjectList_register();
extern char igDataList_vtable[];
extern char igNamedObject_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igAnimationCombinerList_className[];
extern char igAnimationCombiner_dependencies[];
extern char igAnimationCombiner_className[];
extern char igAnimationCombiner_vtable[];
extern char lbl_804B5F8C[];
extern char igAnimationCombinerList_vtable[];
extern char lbl_804B606C[];
extern char igAnimationCombinerList_dependencies[8];
extern void *lbl_805621F4;
extern void *igAnimationSystem_meta;
extern void *igAnimationCombinerList_meta;
extern void *igAnimationCombiner_meta;
void *igAnimationCombinerList_getMeta();
void *igAnimationCombinerList_vtableRead();
void igAnimationCombinerList_arkRegister();
void igAnimationCombinerList_register();
void *igAnimationCombinerList_getMetaCall();
void *igAnimationCombiner_getMeta();
void *igAnimationCombiner_vtableRead();
void igAnimationCombiner_arkRegister();
void igAnimationCombiner_register();
void *igAnimationCombiner_getMetaCall();
void *igAnimationCombiner_parentMeta();
}
struct UnknownGenObject801CB8B8_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot801CBA50 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801CBA50(){igObject_construct(this);}
};
struct UnknownGenObject801CBA50_0 : UnknownGenRoot801CBA50 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject801CBA50_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject801CBA50_1 : UnknownGenObject801CBA50_0 {
 UnknownGenRefMember unknown0C;
 inline ~UnknownGenObject801CBA50_1(){unknown00=lbl_804B5F8C;}
};
struct UnknownGenObject801CBA50 : UnknownGenObject801CBA50_1 {
 char unknown10[32];
 UnknownGenRefMember unknown30;
 UnknownGenRefMember unknown34;
 UnknownGenRefMember unknown38;
 char unknown3C[36];
 inline ~UnknownGenObject801CBA50(){unknown00=igAnimationCombiner_vtable;}
};
extern "C" {
void *fn_801CB840(){
 if(!igAnimationCombinerList_meta) igAnimationCombinerList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igAnimationCombinerList_meta;
}
}
#pragma pop
