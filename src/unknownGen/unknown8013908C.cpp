#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80024180();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_8012FC48();
void igObjectList_register();
void igObject_register();
void igParameterSet_fieldInit();
extern char igDataList_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igParameterSetConstraintList_className[];
extern char igParameterSetConstraint_className[];
extern char igParameterSetList_className[];
extern char igParameterSet_dependencies[];
extern char igParameterSet_className[];
extern char igParameterSet_vtable[];
extern char igParameterSetList_vtable[];
extern char lbl_804AA360[];
extern char igParameterSetConstraintList_vtable[];
extern char lbl_804AA428[];
extern char igParameterSetConstraintList_dependencies[8];
extern char igParameterSetConstraint_fieldTypes[4];
extern char igParameterSetConstraint_fieldNames[4];
extern char igParameterSetConstraint_fieldStorage[4];
extern char igParameterSetConstraint_fieldOffsets[4];
extern char igParameterSetList_dependencies[8];
extern void *lbl_805621F4;
extern void *igParameterSetConstraintList_meta;
extern void *igParameterSetConstraint_meta;
extern void *igParameterSetList_meta;
extern void *igParameterSet_meta;
void *igParameterSetConstraintList_getMeta();
void *igParameterSetConstraintList_vtableRead();
void igParameterSetConstraintList_arkRegister();
void igParameterSetConstraintList_register();
void *igParameterSetConstraintList_getMetaCall();
void *igParameterSetConstraint_getMeta();
void igParameterSetConstraint_arkRegister();
void igParameterSetConstraint_register();
void *igParameterSetConstraint_getMetaCall();
void igParameterSetConstraint_fieldInit();
void *igParameterSetList_getMeta();
void *igParameterSetList_vtableRead();
void igParameterSetList_arkRegister();
void igParameterSetList_register();
void *igParameterSetList_getMetaCall();
void *igParameterSet_getMeta();
void *igParameterSet_vtableRead();
void igParameterSet_arkRegister();
void igParameterSet_register();
void *igParameterSet_getMetaCall();
}
struct UnknownGenObject80138E10_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject80139104_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot801392D8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801392D8(){igObject_construct(this);}
};
struct UnknownGenObject801392D8 : UnknownGenRoot801392D8 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 char unknown0C[4];
 UnknownGenRefMember unknown10;
 UnknownGenRefMember unknown14;
 UnknownGenRefMember unknown18;
 char unknown1C[12];
 inline ~UnknownGenObject801392D8(){unknown00=igParameterSet_vtable;}
};
extern "C" {
void *fn_8013908C(){
 if(!igParameterSetList_meta) igParameterSetList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igParameterSetList_meta;
}
}
#pragma pop
