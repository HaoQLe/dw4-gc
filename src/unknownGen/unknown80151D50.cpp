#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void *fn_80071694(void *,void *);
void fn_8012FC48();
void *fn_8012FEB0();
void fn_80151D58();
void igChildEdit_register();
void igOptVisitObject_register();
extern char igCollapseAllHierarchies_className[];
extern char igChildEditForNode_className[];
extern char lbl_804A46AC[];
extern char lbl_804A4A04[];
extern char lbl_804A6338[];
extern char lbl_804A6460[];
extern char igCollapseAllHierarchies_vtable[];
extern char igChildEditForNode_vtable[];
extern char lbl_804A8358[];
extern char lbl_804AA710[];
extern char lbl_804AAF48[];
extern char lbl_8055F71C[4];
extern char igCollapseAllHierarchies_fieldTypes[4];
extern char igCollapseAllHierarchies_fieldNames[4];
extern char igCollapseAllHierarchies_fieldStorage[4];
extern char igCollapseAllHierarchies_fieldOffsets[4];
extern char igChildEditForNode_dependencies[8];
extern void *igCollapseAllHierarchies_meta;
extern void *igChildEditForNode_meta;
extern void *igChildEdit_meta;
void *igCollapseAllHierarchies_getMeta();
void *igCollapseAllHierarchies_vtableRead();
void igCollapseAllHierarchies_arkRegister();
void igCollapseAllHierarchies_register();
void *igCollapseAllHierarchies_getMetaCall();
void igCollapseAllHierarchies_fieldInit();
void *igChildEditForNode_getMeta();
void *igChildEditForNode_vtableRead();
void igChildEditForNode_arkRegister();
void igChildEditForNode_register();
void *igChildEditForNode_getMetaCall();
void *igChildEditForNode_parentMeta();
}
struct UnknownGenRoot8015189C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8015189C(){igObject_construct(this);}
};
struct UnknownGenObject8015189C_0 : UnknownGenRoot8015189C {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject8015189C_0(){unknown00=lbl_804A4A04;}
};
struct UnknownGenObject8015189C_1 : UnknownGenObject8015189C_0 {
 UnknownGenRefMember unknown28;
 inline ~UnknownGenObject8015189C_1(){unknown00=lbl_804A46AC;}
};
struct UnknownGenObject8015189C : UnknownGenObject8015189C_1 {
 UnknownGenString unknown2C;
 char unknown30[8];
 inline ~UnknownGenObject8015189C(){unknown00=igCollapseAllHierarchies_vtable;}
};
struct UnknownGenRoot80151B8C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80151B8C(){igObject_construct(this);}
};
struct UnknownGenObject80151B8C_0 : UnknownGenRoot80151B8C {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject80151B8C_0(){unknown00=lbl_804A8358;}
};
struct UnknownGenObject80151B8C : UnknownGenObject80151B8C_0 {
 char unknown28[8];
 inline ~UnknownGenObject80151B8C(){unknown00=igChildEditForNode_vtable;}
};
extern "C" {
void *igChildEditForNode_parentMeta(){return igChildEdit_meta;}
}
#pragma pop
