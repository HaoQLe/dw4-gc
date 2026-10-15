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
void fn_8010CBD4();
void *fn_80111CD4();
void igBoxModel_register();
void igGuiComponentModel_register();
void igScrollListComponentModel_fieldInit();
extern char igSimpleChildHolderModel_className[];
extern char igScrollListComponentModel_dependencies[];
extern char igScrollListComponentModel_className[];
extern char igModel_vtable[];
extern char igScrollListComponentModel_vtable[];
extern char igBoxModel_vtable[];
extern char igSimpleChildHolderModel_vtable[];
extern char igGuiComponentModel_vtable[];
extern char igSimpleChildHolderModel_dependencies[8];
extern char igSimpleChildHolderModel_fieldTypes[8];
extern char igSimpleChildHolderModel_fieldNames[8];
extern char igSimpleChildHolderModel_fieldStorage[8];
extern char igSimpleChildHolderModel_fieldOffsets[8];
extern void *igSimpleChildHolderModel_meta;
extern void *igScrollListComponentModel_meta;
extern void *igGuiComponentModel_meta;
extern void *igBoxModel_meta;
void *igSimpleChildHolderModel_getMeta();
void *igSimpleChildHolderModel_vtableRead();
void igSimpleChildHolderModel_arkRegister();
void igSimpleChildHolderModel_register();
void *igSimpleChildHolderModel_getMetaCall();
void *fn_8010D6A0();
void igSimpleChildHolderModel_fieldInit();
void *igScrollListComponentModel_getMeta();
void *igScrollListComponentModel_vtableRead();
void igScrollListComponentModel_arkRegister();
void igScrollListComponentModel_register();
void *igScrollListComponentModel_getMetaCall();
void *igScrollListComponentModel_parentMeta();
}
struct UnknownGenRoot8010D4EC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8010D4EC(){igObject_construct(this);}
};
struct UnknownGenObject8010D4EC_0 : UnknownGenRoot8010D4EC {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 inline ~UnknownGenObject8010D4EC_0(){unknown00=igModel_vtable;}
};
struct UnknownGenObject8010D4EC_1 : UnknownGenObject8010D4EC_0 {
 inline ~UnknownGenObject8010D4EC_1(){unknown00=igGuiComponentModel_vtable;}
};
struct UnknownGenObject8010D4EC : UnknownGenObject8010D4EC_1 {
 char unknown0C[24];
 UnknownGenRefMember unknown24;
 char unknown28[24];
 inline ~UnknownGenObject8010D4EC(){unknown00=igSimpleChildHolderModel_vtable;}
};
struct UnknownGenRoot8010D764 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8010D764(){igObject_construct(this);}
};
struct UnknownGenObject8010D764_0 : UnknownGenRoot8010D764 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 inline ~UnknownGenObject8010D764_0(){unknown00=igModel_vtable;}
};
struct UnknownGenObject8010D764_1 : UnknownGenObject8010D764_0 {
 inline ~UnknownGenObject8010D764_1(){unknown00=igGuiComponentModel_vtable;}
};
struct UnknownGenObject8010D764_2 : UnknownGenObject8010D764_1 {
 char unknown0C[24];
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject8010D764_2(){unknown00=igBoxModel_vtable;}
};
struct UnknownGenObject8010D764 : UnknownGenObject8010D764_2 {
 UnknownGenRefMember unknown28;
 UnknownGenRefMember unknown2C;
 UnknownGenRefMember unknown30;
 char unknown34[12];
 inline ~UnknownGenObject8010D764(){unknown00=igScrollListComponentModel_vtable;}
};
extern "C" {
void *igScrollListComponentModel_parentMeta(){return igBoxModel_meta;}
}
#pragma pop
