#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80065DBC(int);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_801AA6DC();
void fn_801AAF40();
void fn_8020AEC0(int);
void fn_8020AFFC();
void *fn_8020B028();
void igShaderData_register();
extern char igTransientShaderData_dependencies[];
extern char igTransientShaderData_className[];
extern char igShaderData_vtable[];
extern char igTransientShaderData_vtable[];
extern void *igTransientShaderData_meta;
extern void *igShaderData_meta;
void *igTransientShaderData_getMeta();
void *igTransientShaderData_vtableRead();
void igTransientShaderData_arkRegister();
void igTransientShaderData_register();
void *igTransientShaderData_getMetaCall();
void *igTransientShaderData_parentMeta();
}
struct UnknownGenRoot801AAD30 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801AAD30(){igObject_construct(this);}
};
struct UnknownGenObject801AAD30_0 : UnknownGenRoot801AAD30 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 UnknownGenRefMember unknown14;
 inline ~UnknownGenObject801AAD30_0(){unknown00=igShaderData_vtable;}
};
struct UnknownGenObject801AAD30 : UnknownGenObject801AAD30_0 {
 inline ~UnknownGenObject801AAD30(){unknown00=igTransientShaderData_vtable;}
};
extern "C" {
void fn_801AACA8(){
 fn_8020AFFC();
 fn_80065DBC((int)fn_8020AEC0);
}
void *fn_801AACD4(){return fn_8020B028();}
}
#pragma pop
