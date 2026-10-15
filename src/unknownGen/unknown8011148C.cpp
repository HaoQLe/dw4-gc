#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_8010CBD4();
void *fn_8010EE6C();
void *fn_80111CD4();
void igGroup_register();
void igGuiComponentModel_fieldInit();
void *igGuiComponentNode_getMeta();
void igGuiComponentNode_vtableRead();
void igModel_register();
extern char igGuiComponentNode_className[];
extern char igGuiComponentModel_className[];
extern char igModel_vtable[];
extern char igGuiComponentModel_vtable[];
extern char igGuiComponentNode_dependencies[8];
extern char igGuiComponentNode_fieldTypes[4];
extern char igGuiComponentNode_fieldNames[4];
extern char igGuiComponentNode_fieldStorage[4];
extern char igGuiComponentNode_fieldOffsets[4];
extern char igGuiComponentModel_dependencies[8];
extern void *lbl_805621F4;
extern void *igGuiComponentNode_meta;
extern void *igGuiComponentModel_meta;
extern void *igGroup_meta;
void igGuiComponentNode_register();
void *igGuiComponentNode_getMetaCall();
void *fn_8011148C();
void igGuiComponentNode_fieldInit();
void *igGuiComponentModel_getMeta();
void *igGuiComponentModel_vtableRead();
void igGuiComponentModel_arkRegister();
void igGuiComponentModel_register();
void *igGuiComponentModel_getMetaCall();
}
struct UnknownGenRoot80111594 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80111594(){igObject_construct(this);}
};
struct UnknownGenObject80111594_0 : UnknownGenRoot80111594 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 inline ~UnknownGenObject80111594_0(){unknown00=igModel_vtable;}
};
struct UnknownGenObject80111594 : UnknownGenObject80111594_0 {
 char unknown0C[36];
 inline ~UnknownGenObject80111594(){unknown00=igGuiComponentModel_vtable;}
};
extern "C" {
void *fn_8011148C(){return igGroup_meta;}
}
#pragma pop
