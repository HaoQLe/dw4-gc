#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void arkRegister__Q33Gap4Core6igFileFv();
void fn_80021B94();
void *fn_80021D70();
void *meta_newMetaObject(void *);
void fn_80053650(void *,int);
void fn_80053E6C(void *,void *);
void *fn_800607F4(void *);
void *fn_800635C8(void *,void *,void *,int);
void fn_800638E0(void *);
void *fn_80063B5C();
void fn_80063F14(void *);
void *meta_createInstance(void *,void *);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void *igGamecubeFolder_getMeta();
void igMetaField_register();
extern char igVirtualCFuncMetaField_className[];
extern char igFloatMetaField_className[];
extern char igFloatArrayMetaField_className[];
extern char lbl_80471914[];
extern char igFloatMetaField_vtable[];
extern char igFloatArrayMetaField_vtable[];
extern char igFloatMetaField_dependencies[8];
extern char igFloatArrayMetaField_dependencies[8];
extern char igFloatArrayMetaField_fieldTypes[4];
extern char igFloatArrayMetaField_fieldNames[4];
extern char igFloatArrayMetaField_fieldStorage[4];
extern char igFloatArrayMetaField_fieldOffsets[4];
extern void *igFloatMetaField_meta;
extern void *lbl_80561B24;
extern void *igFloatArrayMetaField_meta;
extern void *lbl_80561B2C;
extern void *lbl_80561B34;
extern void *lbl_80561B38;
extern void *igFile_meta;
extern void *lbl_805621F4;
void *igFloatMetaField_getMeta();
void *igFloatMetaField_vtableRead();
void igFloatMetaField_arkRegister();
void igFloatMetaField_register();
void *igFloatMetaField_getMetaCall();
void *igFloatArrayMetaField_getMeta();
void *igFloatArrayMetaField_vtableRead();
void igFloatArrayMetaField_arkRegister();
void igFloatArrayMetaField_register();
void *igFloatArrayMetaField_getMetaCall();
void *igFloatArrayMetaField_parentMeta();
void igFloatArrayMetaField_fieldInit();
}
struct UnknownGenRoot8002FA40 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8002FA40(){fn_800638E0(this);}
};
struct UnknownGenObject8002FA40_0 : UnknownGenRoot8002FA40 {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8002FA40_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8002FA40 : UnknownGenObject8002FA40_0 {
 char unknown10[48];
 inline ~UnknownGenObject8002FA40(){unknown00=igFloatMetaField_vtable;}
};
struct UnknownGenRoot8002FCBC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8002FCBC(){fn_800638E0(this);}
};
struct UnknownGenObject8002FCBC_0 : UnknownGenRoot8002FCBC {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8002FCBC_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8002FCBC_1 : UnknownGenObject8002FCBC_0 {
 inline ~UnknownGenObject8002FCBC_1(){unknown00=igFloatMetaField_vtable;}
};
struct UnknownGenObject8002FCBC : UnknownGenObject8002FCBC_1 {
 char unknown10[48];
 inline ~UnknownGenObject8002FCBC(){unknown00=igFloatArrayMetaField_vtable;}
};
extern "C" {
void *igFloatArrayMetaField_parentMeta(){return igFloatMetaField_meta;}
}
#pragma pop
