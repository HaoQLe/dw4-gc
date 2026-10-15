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
void igInverseKinematicsJoint_registerNow();
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
extern char lbl_8056051C[8];
extern char lbl_80560524[4];
extern char lbl_80560528[4];
extern char lbl_8056052C[4];
extern char lbl_80560530[4];
extern char lbl_80560534[8];
extern void *lbl_805621F4;
extern void *igInverseKinematicsSolver_meta;
extern void *igInverseKinematicsJointList_meta;
extern void *igInverseKinematicsJoint_meta;
void *igInverseKinematicsSolver_getMeta();
void *igInverseKinematicsSolver_vtableRead();
void igInverseKinematicsSolver_registerNow();
void igInverseKinematicsSolver_register();
void *igInverseKinematicsSolver_getMetaCall();
void igInverseKinematicsSolver_fieldInit();
void *igInverseKinematicsJointList_getMeta();
void *igInverseKinematicsJointList_vtableRead();
void igInverseKinematicsJointList_registerNow();
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
void *igInverseKinematicsSolver_getMeta(){
 if(!igInverseKinematicsSolver_meta || !(reinterpret_cast<unsigned int *>(igInverseKinematicsSolver_meta)[0x24/4]&4)) igInverseKinematicsSolver_registerNow();
 return igInverseKinematicsSolver_meta;
}
void *igInverseKinematicsSolver_vtableRead(){
 UnknownGenObject801BC370 object;
 object.unknown00=igNamedObject_vtable;
 object.unknown08.value=0;
 object.unknown00=igNode_vtable;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 object.unknown00=igInverseKinematicsSolver_vtable;
 object.unknown1C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igInverseKinematicsSolver_registerNow(){
 meta_registerNow((int)igInverseKinematicsSolver_register);
}
void igInverseKinematicsSolver_register(){
 fn_801AA6DC();
 meta_registerClass(0,(int)&igInverseKinematicsSolver_meta,(int)igNode_register,(int)fn_801BBBF0,(int)igInverseKinematicsSolver_getMetaCall,(int)igInverseKinematicsSolver_className,32,(int)igInverseKinematicsSolver_vtableRead,(int)igInverseKinematicsSolver_fieldInit,0,(int)lbl_8056051C);
}
void *igInverseKinematicsSolver_getMetaCall(){return igInverseKinematicsSolver_getMeta();}
void igInverseKinematicsSolver_fieldInit(){
 void *value0=igInverseKinematicsSolver_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,lbl_80560524,1);
 void *value2=meta_field(value0,value1);
 void *value3=fn_801BCB1C();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+52)=1;
 meta_setupFields(value0,lbl_80560528,lbl_8056052C,lbl_80560530,value1);
}
void *fn_801BC61C(){
 if(!igInverseKinematicsJointList_meta) igInverseKinematicsJointList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igInverseKinematicsJointList_meta;
}
void *igInverseKinematicsJointList_getMeta(){
 if(!igInverseKinematicsJointList_meta || !(reinterpret_cast<unsigned int *>(igInverseKinematicsJointList_meta)[0x24/4]&4)) igInverseKinematicsJointList_registerNow();
 return igInverseKinematicsJointList_meta;
}
void *igInverseKinematicsJointList_vtableRead(){
 UnknownGenObject801BC694_0 object;
 igObject_construct(&object);
 object.unknown00=igDataList_vtable;
 object.unknown00=lbl_80476E0C;
 object.unknown00=igObjectList_vtable;
 object.unknown00=lbl_804B7908;
 object.unknown00=igInverseKinematicsJointList_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igInverseKinematicsJointList_registerNow(){
 meta_registerNow((int)igInverseKinematicsJointList_register);
}
void igInverseKinematicsJointList_register(){
 fn_801AA6DC();
 meta_registerClass(0,(int)&igInverseKinematicsJointList_meta,(int)igObjectList_register,(int)fn_80024180,(int)igInverseKinematicsJointList_getMetaCall,(int)igInverseKinematicsJointList_className,20,(int)igInverseKinematicsJointList_vtableRead,0,0,(int)lbl_80560534);
}
void *igInverseKinematicsJointList_getMetaCall(){return igInverseKinematicsJointList_getMeta();}
void *fn_801BC7B8(){
 if(!igInverseKinematicsJoint_meta) igInverseKinematicsJoint_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igInverseKinematicsJoint_meta;
}
void *igInverseKinematicsJoint_getMeta(){
 if(!igInverseKinematicsJoint_meta || !(reinterpret_cast<unsigned int *>(igInverseKinematicsJoint_meta)[0x24/4]&4)) igInverseKinematicsJoint_registerNow();
 return igInverseKinematicsJoint_meta;
}
}
#pragma pop
