#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80024180();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_801AA6DC();
void igAnimationTransitionDefinition_fieldInit();
void igObjectList_register();
void igObject_register();
extern char igDataList_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igAnimationTransitionDefinitionList_className[];
extern char igAnimationTransitionDefinition_dependencies[];
extern char igAnimationTransitionDefinition_className[];
extern char igAnimationTransitionDefinition_vtable[];
extern char igAnimationTransitionDefinitionList_vtable[];
extern char lbl_804B5D3C[];
extern char igAnimationTransitionDefinitionList_dependencies[8];
extern void *lbl_805621F4;
extern void *igAnimationTransitionDefinitionList_meta;
extern void *igAnimationTransitionDefinition_meta;
void *igAnimationTransitionDefinitionList_getMeta();
void *igAnimationTransitionDefinitionList_vtableRead();
void igAnimationTransitionDefinitionList_arkRegister();
void igAnimationTransitionDefinitionList_register();
void *igAnimationTransitionDefinitionList_getMetaCall();
void *igAnimationTransitionDefinition_getMeta();
void *igAnimationTransitionDefinition_vtableRead();
void igAnimationTransitionDefinition_arkRegister();
void igAnimationTransitionDefinition_register();
void *igAnimationTransitionDefinition_getMetaCall();
}
struct UnknownGenObject801CC9B8_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot801CCB18 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801CCB18(){igObject_construct(this);}
};
struct UnknownGenObject801CCB18 : UnknownGenRoot801CCB18 {
 char unknown04[8];
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 char unknown14[12];
 inline ~UnknownGenObject801CCB18(){unknown00=igAnimationTransitionDefinition_vtable;}
};
extern "C" {
void *fn_801CC940(){
 if(!igAnimationTransitionDefinitionList_meta) igAnimationTransitionDefinitionList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igAnimationTransitionDefinitionList_meta;
}
}
#pragma pop
