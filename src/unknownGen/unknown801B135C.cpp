#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_801AA6DC();
void igObject_register();
void igShaderData_fieldInit();
extern char lbl_804ACB0C[];
extern char igShaderData_className[];
extern char igShaderData_vtable[];
extern void *lbl_805621F4;
extern void *igShaderData_meta;
void *igShaderData_getMeta();
void *igShaderData_vtableRead();
void igShaderData_registerNow();
void igShaderData_register();
void *igShaderData_getMetaCall();
}
struct UnknownGenRoot801B13D4 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801B13D4(){igObject_construct(this);}
};
struct UnknownGenObject801B13D4 : UnknownGenRoot801B13D4 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 UnknownGenRefMember unknown14;
 inline ~UnknownGenObject801B13D4(){unknown00=igShaderData_vtable;}
};
extern "C" {
void *fn_801B135C(){
 if(!igShaderData_meta) igShaderData_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igShaderData_meta;
}
void *igShaderData_getMeta(){
 if(!igShaderData_meta || !(reinterpret_cast<unsigned int *>(igShaderData_meta)[0x24/4]&4)) igShaderData_registerNow();
 return igShaderData_meta;
}
void *igShaderData_vtableRead(){
 UnknownGenObject801B13D4 object;
 object.unknown00=igShaderData_vtable;
 object.unknown08.value=0;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 object.unknown14.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igShaderData_registerNow(){
 meta_registerNow((int)igShaderData_register);
}
void igShaderData_register(){
 fn_801AA6DC();
 meta_registerClass(0,(int)&igShaderData_meta,(int)igObject_register,(int)fn_800237D0,(int)igShaderData_getMetaCall,(int)igShaderData_className,24,(int)igShaderData_vtableRead,(int)igShaderData_fieldInit,0,(int)lbl_804ACB0C);
}
void *igShaderData_getMetaCall(){return igShaderData_getMeta();}
}
#pragma pop
