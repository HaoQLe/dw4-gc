#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800284F4();
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
void *fn_801B103C();
void igInterpretedShader_arkRegister();
void igShaderProcessor_register();
void igTransientShaderData_register();
extern char igInterpretedShaderProcessor_className[];
extern char igInterpretedShaderData_dependencies[];
extern char igInterpretedShaderData_className[];
extern char igShaderProcessor_vtable[];
extern char igShaderData_vtable[];
extern char igInterpretedShaderProcessor_vtable[];
extern char igInterpretedShaderData_vtable[];
extern char igTransientShaderData_vtable[];
extern char igInterpretedShaderData_fieldTypes[8];
extern char igInterpretedShaderData_fieldNames[8];
extern char igInterpretedShaderData_fieldStorage[8];
extern char igInterpretedShaderData_fieldOffsets[8];
extern void *lbl_805621F4;
extern void *igTransientShaderData_meta;
extern void *igInterpretedShaderProcessor_meta;
extern void *igInterpretedShaderData_meta;
extern void *igInterpretedShader_meta;
void *igInterpretedShaderProcessor_getMeta();
void *igInterpretedShaderProcessor_vtableRead();
void igInterpretedShaderProcessor_arkRegister();
void igInterpretedShaderProcessor_register();
void *igInterpretedShaderProcessor_getMetaCall();
void *igInterpretedShaderData_getMeta();
void *igInterpretedShaderData_vtableRead();
void igInterpretedShaderData_arkRegister();
void igInterpretedShaderData_register();
void *igInterpretedShaderData_getMetaCall();
void *igInterpretedShaderData_parentMeta();
void igInterpretedShaderData_fieldInit();
}
struct UnknownGenObject801BDF10_0 {
 void *unknown00;
 char unknown04[4];
};
struct UnknownGenRoot801BE084 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801BE084(){igObject_construct(this);}
};
struct UnknownGenObject801BE084_0 : UnknownGenRoot801BE084 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 UnknownGenRefMember unknown14;
 inline ~UnknownGenObject801BE084_0(){unknown00=igShaderData_vtable;}
};
struct UnknownGenObject801BE084_1 : UnknownGenObject801BE084_0 {
 inline ~UnknownGenObject801BE084_1(){unknown00=igTransientShaderData_vtable;}
};
struct UnknownGenObject801BE084 : UnknownGenObject801BE084_1 {
 UnknownGenRefMember unknown18;
 UnknownGenRefMember unknown1C;
 inline ~UnknownGenObject801BE084(){unknown00=igInterpretedShaderData_vtable;}
};
extern "C" {
void *fn_801BE00C(){
 if(!igInterpretedShaderData_meta) igInterpretedShaderData_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igInterpretedShaderData_meta;
}
}
#pragma pop
