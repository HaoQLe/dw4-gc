#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void __dl__FPv(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_8012FC48();
void *fn_801308D0();
void *fn_801A1FE8();
void fn_801A2070();
void igOptBase_register();
void igSpatialPartitionDeprecated_fieldInit();
extern char igSplitGeometries_className[];
extern char igSpatialPartitionDeprecated_className[];
extern char igSplitGeometries_vtable[];
extern char igSpatialPartitionDeprecated_vtable[];
extern char lbl_804A4A04[];
extern char lbl_804A6460[];
extern char lbl_804AAF48[];
extern char igSpatialPartitionDeprecated_dependencies[8];
extern void *igSplitGeometries_meta;
extern void *igSpatialPartitionDeprecated_meta;
void *igSplitGeometries_getMeta();
void *igSplitGeometries_vtableRead();
void igSplitGeometries_arkRegister();
void igSplitGeometries_register();
void *igSplitGeometries_getMetaCall();
void *igSpatialPartitionDeprecated_getMeta();
void *igSpatialPartitionDeprecated_vtableRead();
void igSpatialPartitionDeprecated_arkRegister();
void igSpatialPartitionDeprecated_register();
void *igSpatialPartitionDeprecated_getMetaCall();
}
struct UnknownGenRoot801323A0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801323A0(){igObject_construct(this);}
};
struct UnknownGenObject801323A0_0 : UnknownGenRoot801323A0 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject801323A0_0(){unknown00=lbl_804A4A04;}
};
struct UnknownGenObject801323A0 : UnknownGenObject801323A0_0 {
 char unknown28[8];
 inline ~UnknownGenObject801323A0(){unknown00=igSplitGeometries_vtable;}
};
struct UnknownGenRoot8013257C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8013257C(){igObject_construct(this);}
};
struct UnknownGenObject8013257C_0 : UnknownGenRoot8013257C {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject8013257C_0(){unknown00=lbl_804A4A04;}
};
struct UnknownGenObject8013257C : UnknownGenObject8013257C_0 {
 char unknown28[24];
 UnknownGenRefMember unknown40;
 char unknown44[4];
 inline ~UnknownGenObject8013257C(){unknown00=igSpatialPartitionDeprecated_vtable;}
};
extern "C" {
void *fn_80132324(){return fn_801A1FE8();}
void fn_80132344(){return fn_801A2070();}
}
#pragma pop
