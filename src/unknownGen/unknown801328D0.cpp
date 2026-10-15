#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void __dl__FPv(void *);
void *fn_800635C8(void *,void *,void *,int);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_8012FC48();
void *fn_8012FEB0();
void igOptVisitObject_register();
void igSpatialPartition_fieldInit();
extern char igVertexBlending_className[];
extern char igSpatialPartition_dependencies[];
extern char igSpatialPartition_className[];
extern char igSpatialPartition_vtable[];
extern char lbl_804A46AC[];
extern char lbl_804A4A04[];
extern char lbl_804A6460[];
extern char lbl_804AAF48[];
extern void *lbl_80563B78;
extern void *igSpatialPartition_meta;
void *igSpatialPartition_getMeta();
void *igSpatialPartition_vtableRead();
void igSpatialPartition_arkRegister();
void igSpatialPartition_register();
void *igSpatialPartition_getMetaCall();
}
struct UnknownGenRoot80132958 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80132958(){igObject_construct(this);}
};
struct UnknownGenObject80132958_0 : UnknownGenRoot80132958 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject80132958_0(){unknown00=lbl_804A4A04;}
};
struct UnknownGenObject80132958_1 : UnknownGenObject80132958_0 {
 UnknownGenRefMember unknown28;
 inline ~UnknownGenObject80132958_1(){unknown00=lbl_804A46AC;}
};
struct UnknownGenObject80132958 : UnknownGenObject80132958_1 {
 char unknown2C[40];
 UnknownGenRefMember unknown54;
 UnknownGenRefMember unknown58;
 UnknownGenRefMember unknown5C;
 inline ~UnknownGenObject80132958(){unknown00=igSpatialPartition_vtable;}
};
extern "C" {
void *fn_801328D0(){
 char *data=igVertexBlending_className;
 if(!lbl_80563B78) lbl_80563B78=fn_800635C8(data+0x45C,data+0x554,data+0x560,0x3);
 return lbl_80563B78;
}
}
#pragma pop
