#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void *fn_800237D0();
void igRawRefMetaField_arkRegister();
void *meta_newMetaObject(void *);
void fn_80053650(void *,int);
void fn_80053E6C(void *,void *);
void *fn_800607F4(void *);
void *fn_80063B5C();
void fn_80063F14(void *);
void *meta_createInstance(void *,void *);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006C4B8(void *);
void igObject_register();
void *igQueue_fieldInit();
void *igRawRefMetaField_getMeta();
void igRawRefMetaField_register();
extern char igRawRefArrayMetaField_className[];
extern char lbl_80471384[];
extern char igRawRefArrayMetaField_vtable[];
extern char lbl_80471914[];
extern char lbl_80476630[];
extern char igRawRefArrayMetaField_dependencies[8];
extern char igRawRefArrayMetaField_fieldTypes[4];
extern char igRawRefArrayMetaField_fieldNames[4];
extern char igRawRefArrayMetaField_fieldStorage[4];
extern char igRawRefArrayMetaField_fieldOffsets[4];
extern char igQueue_dependencies[8];
extern char lbl_8055D1A8[8];
extern void *igRawRefMetaField_meta;
extern void *lbl_80561698;
extern void *igRawRefArrayMetaField_meta;
extern void *lbl_805616A0;
extern void *igQueue_meta;
extern void *lbl_805621F4;
void *igRawRefArrayMetaField_getMeta();
void *igRawRefArrayMetaField_vtableRead();
void igRawRefArrayMetaField_arkRegister();
void igRawRefArrayMetaField_register();
void *igRawRefArrayMetaField_getMetaCall();
void *igRawRefArrayMetaField_parentMeta();
void igRawRefArrayMetaField_fieldInit();
void *igQueue_getMeta();
void igQueue_arkRegister();
void igQueue_register();
void *igQueue_getMetaCall();
}
struct UnknownGenRoot80027890 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80027890(){fn_8006C4B8(this);}
};
struct UnknownGenObject80027890_0 : UnknownGenRoot80027890 {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject80027890_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject80027890_1 : UnknownGenObject80027890_0 {
 inline ~UnknownGenObject80027890_1(){unknown00=lbl_80471384;}
};
struct UnknownGenObject80027890_2 : UnknownGenObject80027890_1 {
 inline ~UnknownGenObject80027890_2(){unknown00=lbl_80476630;}
};
struct UnknownGenObject80027890 : UnknownGenObject80027890_2 {
 char unknown10[48];
 inline ~UnknownGenObject80027890(){unknown00=igRawRefArrayMetaField_vtable;}
};
extern "C" {
void *fn_80027B44(){
 if(!igQueue_meta) igQueue_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igQueue_meta;
}
}
#pragma pop
