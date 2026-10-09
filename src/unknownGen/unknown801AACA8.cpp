#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80065DBC(int);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_801AA6DC();
void fn_801AAF40();
void fn_8020AEC0(int);
void fn_8020AFFC();
void *fn_8020B028();
void igShaderData_register();
extern char lbl_804AB480[];
extern char lbl_804AB490[];
extern char lbl_804B3B28[];
extern char lbl_804BA1D8[];
extern void *lbl_80564680;
extern void *lbl_805648F8;
void *igTransientShaderData_getMeta();
void *igTransientShaderData_vtableRead();
void fn_801AAE78();
void igTransientShaderData_register();
void *igTransientShaderData_getMetaCall();
void *igTransientShaderData_parentMeta();
}
struct UnknownGenRoot801AAD30 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801AAD30(){fn_8006665C(this);}
};
struct UnknownGenObject801AAD30_0 : UnknownGenRoot801AAD30 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 UnknownGenRefMember unknown14;
 inline ~UnknownGenObject801AAD30_0(){unknown00=lbl_804B3B28;}
};
struct UnknownGenObject801AAD30 : UnknownGenObject801AAD30_0 {
 inline ~UnknownGenObject801AAD30(){unknown00=lbl_804BA1D8;}
};
extern "C" {
void fn_801AACA8(){
 fn_8020AFFC();
 fn_80065DBC((int)fn_8020AEC0);
}
void *fn_801AACD4(){return fn_8020B028();}
void *igTransientShaderData_getMeta(){
 if(!lbl_80564680 || !(reinterpret_cast<unsigned int *>(lbl_80564680)[0x24/4]&4)) fn_801AAE78();
 return lbl_80564680;
}
void *igTransientShaderData_vtableRead(){
 UnknownGenObject801AAD30 object;
 object.unknown00=lbl_804B3B28;
 object.unknown08.value=0;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 object.unknown14.value=0;
 object.unknown00=lbl_804BA1D8;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801AAE78(){
 fn_80066188((int)igTransientShaderData_register);
}
void igTransientShaderData_register(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564680,(int)igShaderData_register,(int)igTransientShaderData_parentMeta,(int)igTransientShaderData_getMetaCall,(int)lbl_804AB490,24,(int)igTransientShaderData_vtableRead,(int)fn_801AAF40,0,(int)lbl_804AB480);
}
void *igTransientShaderData_getMetaCall(){return igTransientShaderData_getMeta();}
void *igTransientShaderData_parentMeta(){return lbl_805648F8;}
}
#pragma pop
