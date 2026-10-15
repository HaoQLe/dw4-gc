#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
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
void fn_801AA6DC();
void *fn_801BBBF0();
void igInverseKinematicsJoint_arkRegister();
void *fn_801BCB1C();
void igNode_register();
void igObjectList_register();
extern char igDataList_vtable[];
extern char igNamedObject_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igInverseKinematicsSolver_className[];
extern char igInverseKinematicsJointList_className[];
extern char igNode_vtable[];
extern char igInverseKinematicsSolver_vtable[];
extern char igInverseKinematicsJointList_vtable[];
extern char lbl_804B7908[];
extern char igInverseKinematicsSolver_dependencies[8];
extern char igInverseKinematicsSolver_fieldTypes[4];
extern char igInverseKinematicsSolver_fieldNames[4];
extern char igInverseKinematicsSolver_fieldStorage[4];
extern char igInverseKinematicsSolver_fieldOffsets[4];
extern char igInverseKinematicsJointList_dependencies[8];
extern void *lbl_805621F4;
extern void *igInverseKinematicsSolver_meta;
extern void *igInverseKinematicsJointList_meta;
extern void *igInverseKinematicsJoint_meta;
void *igInverseKinematicsSolver_getMeta();
void *igInverseKinematicsSolver_vtableRead();
void igInverseKinematicsSolver_arkRegister();
void igInverseKinematicsSolver_register();
void *igInverseKinematicsSolver_getMetaCall();
void igInverseKinematicsSolver_fieldInit();
void *igInverseKinematicsJointList_getMeta();
void *igInverseKinematicsJointList_vtableRead();
void igInverseKinematicsJointList_arkRegister();
void igInverseKinematicsJointList_register();
void *igInverseKinematicsJointList_getMetaCall();
}
struct UnknownGenRoot801BC370 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801BC370(){igObject_construct(this);}
};
struct UnknownGenObject801BC370_0 : UnknownGenRoot801BC370 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject801BC370_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject801BC370_1 : UnknownGenObject801BC370_0 {
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 inline ~UnknownGenObject801BC370_1(){unknown00=igNode_vtable;}
};
struct UnknownGenObject801BC370 : UnknownGenObject801BC370_1 {
 char unknown14[8];
 UnknownGenRefMember unknown1C;
 char unknown20[8];
 inline ~UnknownGenObject801BC370(){unknown00=igInverseKinematicsSolver_vtable;}
};
struct UnknownGenObject801BC694_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_801BC61C(){
 if(!igInverseKinematicsJointList_meta) igInverseKinematicsJointList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igInverseKinematicsJointList_meta;
}
}
#pragma pop
