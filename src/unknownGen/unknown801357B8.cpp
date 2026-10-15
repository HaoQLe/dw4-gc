#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_8012FC48();
void fn_801357C0();
void igOptReplaceNode_register();
void igReplaceAttr_register();
extern char igReplaceByGroup_className[];
extern char igReplaceAttrForNode_className[];
extern char igReplaceByGroup_vtable[];
extern char igReplaceAttrForNode_vtable[];
extern char lbl_804A3918[];
extern char lbl_804A4744[];
extern char lbl_804A4878[];
extern char lbl_804A4A04[];
extern char lbl_804A6338[];
extern char lbl_804A6460[];
extern char lbl_804AA614[];
extern char lbl_804AAF48[];
extern char igReplaceAttrForNode_dependencies[8];
extern void *igReplaceByGroup_meta;
extern void *igReplaceAttrForNode_meta;
extern void *igReplaceAttr_meta;
extern void *igOptReplaceNode_meta;
void *igReplaceByGroup_getMeta();
void *igReplaceByGroup_vtableRead();
void igReplaceByGroup_arkRegister();
void igReplaceByGroup_register();
void *igReplaceByGroup_getMetaCall();
void *igReplaceByGroup_parentMeta();
void *igReplaceAttrForNode_getMeta();
void *igReplaceAttrForNode_vtableRead();
void igReplaceAttrForNode_arkRegister();
void igReplaceAttrForNode_register();
void *igReplaceAttrForNode_getMetaCall();
void *igReplaceAttrForNode_parentMeta();
}
struct UnknownGenRoot80135340 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80135340(){igObject_construct(this);}
};
struct UnknownGenObject80135340_0 : UnknownGenRoot80135340 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject80135340_0(){unknown00=lbl_804A4A04;}
};
struct UnknownGenObject80135340_1 : UnknownGenObject80135340_0 {
 UnknownGenRefMember unknown28;
 UnknownGenString unknown2C;
 inline ~UnknownGenObject80135340_1(){unknown00=lbl_804A4744;}
};
struct UnknownGenObject80135340_2 : UnknownGenObject80135340_1 {
 inline ~UnknownGenObject80135340_2(){unknown00=lbl_804A4878;}
};
struct UnknownGenObject80135340 : UnknownGenObject80135340_2 {
 char unknown30[8];
 inline ~UnknownGenObject80135340(){unknown00=igReplaceByGroup_vtable;}
};
struct UnknownGenRoot801355BC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801355BC(){igObject_construct(this);}
};
struct UnknownGenObject801355BC_0 : UnknownGenRoot801355BC {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 UnknownGenRefMember unknown28;
 inline ~UnknownGenObject801355BC_0(){unknown00=lbl_804A3918;}
};
struct UnknownGenObject801355BC : UnknownGenObject801355BC_0 {
 char unknown2C[12];
 inline ~UnknownGenObject801355BC(){unknown00=igReplaceAttrForNode_vtable;}
};
extern "C" {
void *igReplaceAttrForNode_parentMeta(){return igReplaceAttr_meta;}
}
#pragma pop
