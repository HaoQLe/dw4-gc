#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80065DBC(int);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_801AA6DC();
void *fn_801AD7BC();
void fn_801DB2E8(int);
void fn_801DB5DC();
void *fn_801DB624();
void igCartoonShaderProcessor_fieldInit();
void igShaderProcessor_register();
extern char lbl_804B0C18[];
extern char igCartoonShaderProcessor_className[];
extern char igShaderProcessor_vtable[];
extern char igCartoonShaderProcessor_vtable[];
extern void *igCartoonShaderProcessor_meta;
void *igCartoonShaderProcessor_getMeta();
void *igCartoonShaderProcessor_vtableRead();
void igCartoonShaderProcessor_registerNow();
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
 inline ~UnknownGenObject801C5130(){unknown00=igCartoonShaderProcessor_vtable;}
};
extern "C" {
void fn_801C50A8(){
 fn_801DB5DC();
 fn_80065DBC((int)fn_801DB2E8);
}
void *fn_801C50D4(){return fn_801DB624();}
void *igCartoonShaderProcessor_getMeta(){
 if(!igCartoonShaderProcessor_meta || !(reinterpret_cast<unsigned int *>(igCartoonShaderProcessor_meta)[0x24/4]&4)) igCartoonShaderProcessor_registerNow();
 return igCartoonShaderProcessor_meta;
}
void *igCartoonShaderProcessor_vtableRead(){
 UnknownGenObject801C5130 object;
 object.unknown00=igShaderProcessor_vtable;
 object.unknown00=igCartoonShaderProcessor_vtable;
 object.unknown08.value=0;
 object.unknown0C.value=0;
 object.unknown1C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igCartoonShaderProcessor_registerNow(){
 meta_registerNow((int)igCartoonShaderProcessor_register);
}
void igCartoonShaderProcessor_register(){
 fn_801AA6DC();
 meta_registerClass(0,(int)&igCartoonShaderProcessor_meta,(int)igShaderProcessor_register,(int)fn_801AD7BC,(int)igCartoonShaderProcessor_getMetaCall,(int)igCartoonShaderProcessor_className,44,(int)igCartoonShaderProcessor_vtableRead,(int)igCartoonShaderProcessor_fieldInit,0,(int)lbl_804B0C18);
}
void *igCartoonShaderProcessor_getMetaCall(){return igCartoonShaderProcessor_getMeta();}
}
#pragma pop
