#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_8012FC48();
void fn_80134C8C();
void igReplaceChild_register();
extern char igReplaceChildForNode_dependencies[];
extern char igReplaceChildForNode_className[];
extern char igReplaceChildForNode_vtable[];
extern char lbl_804A374C[];
extern char lbl_804A6338[];
extern char lbl_804A6460[];
extern char lbl_804AA710[];
extern char lbl_804AAF48[];
extern void *igReplaceChildForNode_meta;
extern void *igReplaceChild_meta;
void *igReplaceChildForNode_getMeta();
void *igReplaceChildForNode_vtableRead();
void igReplaceChildForNode_arkRegister();
void igReplaceChildForNode_register();
void *igReplaceChildForNode_getMetaCall();
void *igReplaceChildForNode_parentMeta();
}
struct UnknownGenRoot80134A84 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80134A84(){igObject_construct(this);}
};
struct UnknownGenObject80134A84_0 : UnknownGenRoot80134A84 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 UnknownGenRefMember unknown28;
 inline ~UnknownGenObject80134A84_0(){unknown00=lbl_804A374C;}
};
struct UnknownGenObject80134A84 : UnknownGenObject80134A84_0 {
 char unknown2C[12];
 inline ~UnknownGenObject80134A84(){unknown00=igReplaceChildForNode_vtable;}
};
extern "C" {
void *igReplaceChildForNode_parentMeta(){return igReplaceChild_meta;}
}
#pragma pop
