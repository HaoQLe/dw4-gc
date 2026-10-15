#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_8012FC48();
void *fn_8013B3D8();
void igManager_register();
void igOptManager_fieldInit();
void igOptTraverseGraph_register();
extern char igOptReplaceNode_className[];
extern char igOptManager_dependencies[];
extern char igOptManager_className[];
extern char igOptManager_vtable[];
extern char lbl_804A6460[];
extern char igManager_vtable[];
extern void *lbl_805621F4;
extern void *igOptTraverseGraph_meta;
extern void *igOptReplaceNode_meta;
extern void *igOptManager_meta;
extern void *igManager_meta;
void *igOptReplaceNode_getMeta();
void igOptReplaceNode_arkRegister();
void igOptReplaceNode_register();
void *igOptReplaceNode_getMetaCall();
void *fn_8013AFE4();
void *igOptManager_getMeta();
void *igOptManager_vtableRead();
void igOptManager_arkRegister();
void igOptManager_register();
void *igOptManager_getMetaCall();
void *fn_8013B2B0();
}
struct UnknownGenRoot8013B064 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8013B064(){igObject_construct(this);}
};
struct UnknownGenObject8013B064 : UnknownGenRoot8013B064 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 UnknownGenRefMember unknown28;
 UnknownGenRefMember unknown2C;
 UnknownGenString unknown30;
 char unknown34[12];
 inline ~UnknownGenObject8013B064(){unknown00=igOptManager_vtable;}
};
extern "C" {
void *fn_8013B2B0(){return igManager_meta;}
}
#pragma pop
