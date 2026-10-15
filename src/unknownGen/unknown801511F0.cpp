#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029F84();
void *fn_800635C8(void *,void *,void *,int);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void *fn_80071694(void *,void *);
void fn_8012FC48();
void *fn_801308D0();
void igCollapseGeometry_fieldInit();
void igOptBase_register();
extern char igVertexBlending_className[];
extern char igNodeTraversal_className[];
extern char igCollapseHierarchy_className[];
extern char igCollapseGeometry_className[];
extern char lbl_804A4A04[];
extern char lbl_804A6460[];
extern char igCollapseHierarchy_vtable[];
extern char igCollapseGeometry_vtable[];
extern char lbl_804AAF48[];
extern char igCollapseHierarchy_dependencies[8];
extern char igCollapseHierarchy_fieldTypes[8];
extern char igCollapseHierarchy_fieldNames[8];
extern char igCollapseHierarchy_fieldStorage[8];
extern char igCollapseHierarchy_fieldOffsets[8];
extern void *lbl_805644F0;
extern void *igCollapseHierarchy_meta;
extern void *lbl_80564500;
extern void *igCollapseGeometry_meta;
void *igCollapseHierarchy_getMeta();
void *igCollapseHierarchy_vtableRead();
void igCollapseHierarchy_arkRegister();
void igCollapseHierarchy_register();
void *igCollapseHierarchy_getMetaCall();
void igCollapseHierarchy_fieldInit();
void *igCollapseGeometry_getMeta();
void *igCollapseGeometry_vtableRead();
void igCollapseGeometry_arkRegister();
void igCollapseGeometry_register();
void *igCollapseGeometry_getMetaCall();
}
struct UnknownGenRoot80151278 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80151278(){igObject_construct(this);}
};
struct UnknownGenObject80151278_0 : UnknownGenRoot80151278 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject80151278_0(){unknown00=lbl_804A4A04;}
};
struct UnknownGenObject80151278 : UnknownGenObject80151278_0 {
 UnknownGenString unknown28;
 UnknownGenRefMember unknown2C;
 char unknown30[8];
 inline ~UnknownGenObject80151278(){unknown00=igCollapseHierarchy_vtable;}
};
struct UnknownGenRoot801515BC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801515BC(){igObject_construct(this);}
};
struct UnknownGenObject801515BC_0 : UnknownGenRoot801515BC {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject801515BC_0(){unknown00=lbl_804A4A04;}
};
struct UnknownGenObject801515BC : UnknownGenObject801515BC_0 {
 char unknown28[16];
 UnknownGenString unknown38;
 char unknown3C[12];
 inline ~UnknownGenObject801515BC(){unknown00=igCollapseGeometry_vtable;}
};
extern "C" {
void *fn_801511F0(){
 char *data=igVertexBlending_className;
 if(!lbl_805644F0) lbl_805644F0=fn_800635C8(data+0x430C,data+0x42EC,data+0x42FC,0x4);
 return lbl_805644F0;
}
}
#pragma pop
