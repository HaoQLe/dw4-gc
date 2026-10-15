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
extern char lbl_804AB480[];
extern char igTransientShaderData_className[];
extern char igShaderData_vtable[];
extern char igTransientShaderData_vtable[];
extern void *igTransientShaderData_meta;
extern void *igShaderData_meta;
void *igTransientShaderData_getMeta();
void *igTransientShaderData_vtableRead();
void igTransientShaderData_registerNow();
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
void *igTransientShaderData_getMeta(){
 if(!igTransientShaderData_meta || !(reinterpret_cast<unsigned int *>(igTransientShaderData_meta)[0x24/4]&4)) igTransientShaderData_registerNow();
 return igTransientShaderData_meta;
}
void *igTransientShaderData_vtableRead(){
 UnknownGenObject801AAD30 object;
 object.unknown00=igShaderData_vtable;
 object.unknown08.value=0;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 object.unknown14.value=0;
 object.unknown00=igTransientShaderData_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igTransientShaderData_registerNow(){
 meta_registerNow((int)igTransientShaderData_register);
}
void igTransientShaderData_register(){
 fn_801AA6DC();
 meta_registerClass(0,(int)&igTransientShaderData_meta,(int)igShaderData_register,(int)igTransientShaderData_parentMeta,(int)igTransientShaderData_getMetaCall,(int)igTransientShaderData_className,24,(int)igTransientShaderData_vtableRead,(int)fn_801AAF40,0,(int)lbl_804AB480);
}
void *igTransientShaderData_getMetaCall(){return igTransientShaderData_getMeta();}
void *igTransientShaderData_parentMeta(){return igShaderData_meta;}
}
#pragma pop
