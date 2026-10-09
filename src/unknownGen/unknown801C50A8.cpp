#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80065DBC(int);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_801AA6DC();
void *fn_801AD7BC();
void fn_801DB2E8(int);
void fn_801DB5DC();
void *fn_801DB624();
void igCartoonShaderProcessor_fieldInit();
void igShaderProcessor_register();
extern char lbl_804B0C18[];
extern char lbl_804B0C28[];
extern char lbl_804B39E8[];
extern char lbl_804B51E4[];
extern void *lbl_805651A8;
void *igCartoonShaderProcessor_getMeta();
void *igCartoonShaderProcessor_vtableRead();
void fn_801C523C();
void igCartoonShaderProcessor_register();
void *igCartoonShaderProcessor_getMetaCall();
}
struct UnknownGenRoot801C5130 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801C5130(){fn_8006665C(this);}
};
struct UnknownGenObject801C5130 : UnknownGenRoot801C5130 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 char unknown10[12];
 UnknownGenRefMember unknown1C;
 char unknown20[24];
 inline ~UnknownGenObject801C5130(){unknown00=lbl_804B51E4;}
};
extern "C" {
void fn_801C50A8(){
 fn_801DB5DC();
 fn_80065DBC((int)fn_801DB2E8);
}
void *fn_801C50D4(){return fn_801DB624();}
void *igCartoonShaderProcessor_getMeta(){
 if(!lbl_805651A8 || !(reinterpret_cast<unsigned int *>(lbl_805651A8)[0x24/4]&4)) fn_801C523C();
 return lbl_805651A8;
}
void *igCartoonShaderProcessor_vtableRead(){
 UnknownGenObject801C5130 object;
 object.unknown00=lbl_804B39E8;
 object.unknown00=lbl_804B51E4;
 object.unknown08.value=0;
 object.unknown0C.value=0;
 object.unknown1C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801C523C(){
 fn_80066188((int)igCartoonShaderProcessor_register);
}
void igCartoonShaderProcessor_register(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_805651A8,(int)igShaderProcessor_register,(int)fn_801AD7BC,(int)igCartoonShaderProcessor_getMetaCall,(int)lbl_804B0C28,44,(int)igCartoonShaderProcessor_vtableRead,(int)igCartoonShaderProcessor_fieldInit,0,(int)lbl_804B0C18);
}
void *igCartoonShaderProcessor_getMetaCall(){return igCartoonShaderProcessor_getMeta();}
}
#pragma pop
