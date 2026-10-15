#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80023CF4();
void *fn_80024180();
void *fn_800284EC();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *fn_800635C8(void *,void *,void *,int);
void *meta_createInstance(void *,void *);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void *fn_80071694(void *,void *);
void *fn_8011EDB4();
void fn_801AA6DC();
void *fn_801AB2B4();
void *fn_801ABB34();
void igAnimationModifier_fieldInit();
void igInfo_register();
void igNamedObject_register();
void igObjectList_register();
void igObject_register();
void igTransformSource_register();
extern char igInfo_vtable[];
extern char igDataList_vtable[];
extern char igNamedObject_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char lbl_804AAFB8[];
extern char igAnimationSequence_className[];
extern char igAnimationInfo_className[];
extern char igAnimationTokenList_className[];
extern char igAnimationToken_className[];
extern char igAnimationHierarchy_className[];
extern char igAnimationModifierList_className[];
extern char igAnimationModifier_className[];
extern char igAnimationInfo_vtable[];
extern char igAnimationModifier_vtable[];
extern char igAnimationModifierList_vtable[];
extern char lbl_804B650C[];
extern char igAnimationToken_vtable[];
extern char igAnimationTokenList_vtable[];
extern char lbl_804B6630[];
extern char igAnimationInfo_dependencies[8];
extern char igAnimationInfo_fieldTypes[4];
extern char igAnimationInfo_fieldNames[4];
extern char igAnimationInfo_fieldStorage[4];
extern char igAnimationInfo_fieldOffsets[4];
extern char igAnimationTokenList_dependencies[8];
extern char igAnimationToken_dependencies[8];
extern char igAnimationToken_fieldTypes[8];
extern char igAnimationToken_fieldNames[8];
extern char igAnimationToken_fieldStorage[8];
extern char igAnimationToken_fieldOffsets[8];
extern char igAnimationHierarchy_fieldTypes[4];
extern char igAnimationHierarchy_fieldNames[4];
extern char igAnimationHierarchy_fieldStorage[4];
extern char igAnimationHierarchy_fieldOffsets[4];
extern char igAnimationModifierList_dependencies[8];
extern char igAnimationModifier_dependencies[8];
extern void *lbl_805621F4;
extern void *igAnimationSequence_meta;
extern void *igAnimationInfo_meta;
extern void *igAnimationTokenList_meta;
extern void *igAnimationToken_meta;
extern void *igAnimationHierarchy_meta;
extern void *igAnimationModifierList_meta;
extern void *lbl_80565450;
extern void *igAnimationModifier_meta;
void *igAnimationSequence_getMeta();
void igAnimationSequence_arkRegister();
void igAnimationSequence_register();
void *igAnimationSequence_getMetaCall();
void *igAnimationInfo_getMeta();
void *igAnimationInfo_vtableRead();
void igAnimationInfo_arkRegister();
void igAnimationInfo_register();
void *igAnimationInfo_getMetaCall();
void igAnimationInfo_fieldInit();
void *fn_801CA050();
void *igAnimationTokenList_getMeta();
void *igAnimationTokenList_vtableRead();
void igAnimationTokenList_arkRegister();
void igAnimationTokenList_register();
void *igAnimationTokenList_getMetaCall();
void *igAnimationToken_getMeta();
void *igAnimationToken_vtableRead();
void igAnimationToken_arkRegister();
void igAnimationToken_register();
void *igAnimationToken_getMetaCall();
void igAnimationToken_fieldInit();
void *igAnimationHierarchy_getMeta();
void igAnimationHierarchy_arkRegister();
void igAnimationHierarchy_register();
void *igAnimationHierarchy_getMetaCall();
void igAnimationHierarchy_fieldInit();
void *igAnimationModifierList_getMeta();
void *igAnimationModifierList_vtableRead();
void igAnimationModifierList_arkRegister();
void igAnimationModifierList_register();
void *igAnimationModifierList_getMetaCall();
void *igAnimationModifier_getMeta();
void *igAnimationModifier_vtableRead();
void igAnimationModifier_arkRegister();
void igAnimationModifier_register();
void *igAnimationModifier_getMetaCall();
}
struct UnknownGenRoot801C9E14 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801C9E14(){igObject_construct(this);}
};
struct UnknownGenObject801C9E14_0 : UnknownGenRoot801C9E14 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject801C9E14_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject801C9E14_1 : UnknownGenObject801C9E14_0 {
 inline ~UnknownGenObject801C9E14_1(){unknown00=igInfo_vtable;}
};
struct UnknownGenObject801C9E14 : UnknownGenObject801C9E14_1 {
 char unknown0C[8];
 UnknownGenRefMember unknown14;
 char unknown18[8];
 inline ~UnknownGenObject801C9E14(){unknown00=igAnimationInfo_vtable;}
};
struct UnknownGenObject801CA0C8_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot801CA260 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801CA260(){igObject_construct(this);}
};
struct UnknownGenObject801CA260 : UnknownGenRoot801CA260 {
 char unknown04[4];
 UnknownGenString unknown08;
 UnknownGenRefMember unknown0C;
 inline ~UnknownGenObject801CA260(){unknown00=igAnimationToken_vtable;}
};
struct UnknownGenObject801CA6AC_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot801CA858 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801CA858(){igObject_construct(this);}
};
struct UnknownGenObject801CA858 : UnknownGenRoot801CA858 {
 char unknown04[8];
 UnknownGenRefMember unknown0C;
 char unknown10[16];
 inline ~UnknownGenObject801CA858(){unknown00=igAnimationModifier_vtable;}
};
extern "C" {
void *fn_801CA634(){
 if(!igAnimationModifierList_meta) igAnimationModifierList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igAnimationModifierList_meta;
}
}
#pragma pop
