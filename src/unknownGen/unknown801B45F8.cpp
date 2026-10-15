#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80024180();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_801AA6DC();
void *fn_801AD7BC();
void igObjectList_register();
void igObject_register();
void igProjectiveTextureProcessor_fieldInit();
void igShaderProcessor_register();
extern char igDataList_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igPropertyValue_className[];
extern char igPropertyKey_className[];
extern char igPropertyList_className[];
extern char igProperty_dependencies[];
extern char igProperty_className[];
extern char igProjectiveTextureProcessor_dependencies[];
extern char igProjectiveTextureProcessor_className[];
extern char igShaderProcessor_vtable[];
extern char igProjectiveTextureProcessor_vtable[];
extern char igProperty_vtable[];
extern char igPropertyList_vtable[];
extern char lbl_804B8718[];
extern char igPropertyList_dependencies[8];
extern char igProperty_fieldTypes[8];
extern char igProperty_fieldNames[8];
extern char igProperty_fieldStorage[8];
extern char igProperty_fieldOffsets[8];
extern void *lbl_805621F4;
extern void *igPropertyValue_meta;
extern void *igPropertyKey_meta;
extern void *igPropertyList_meta;
extern void *igProperty_meta;
extern void *igProjectiveTextureProcessor_meta;
void *fn_801B43B0();
void *igPropertyValue_getMeta();
void igPropertyValue_arkRegister();
void igPropertyValue_register();
void *igPropertyValue_getMetaCall();
void *fn_801B44D4();
void *igPropertyKey_getMeta();
void igPropertyKey_arkRegister();
void igPropertyKey_register();
void *igPropertyKey_getMetaCall();
void *igPropertyList_getMeta();
void *igPropertyList_vtableRead();
void igPropertyList_arkRegister();
void igPropertyList_register();
void *igPropertyList_getMetaCall();
void *igProperty_getMeta();
void *igProperty_vtableRead();
void igProperty_arkRegister();
void igProperty_register();
void *igProperty_getMetaCall();
void igProperty_fieldInit();
void *igProjectiveTextureProcessor_getMeta();
void *igProjectiveTextureProcessor_vtableRead();
void igProjectiveTextureProcessor_arkRegister();
void igProjectiveTextureProcessor_register();
void *igProjectiveTextureProcessor_getMetaCall();
}
struct UnknownGenObject801B4670_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot801B4844 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801B4844(){igObject_construct(this);}
};
struct UnknownGenObject801B4844 : UnknownGenRoot801B4844 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 inline ~UnknownGenObject801B4844(){unknown00=igProperty_vtable;}
};
struct UnknownGenRoot801B4AA0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801B4AA0(){igObject_construct(this);}
};
struct UnknownGenObject801B4AA0 : UnknownGenRoot801B4AA0 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 char unknown0C[52];
 UnknownGenRefMember unknown40;
 UnknownGenRefMember unknown44;
 inline ~UnknownGenObject801B4AA0(){unknown00=igProjectiveTextureProcessor_vtable;}
};
extern "C" {
void *fn_801B45F8(){
 if(!igPropertyList_meta) igPropertyList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igPropertyList_meta;
}
}
#pragma pop
