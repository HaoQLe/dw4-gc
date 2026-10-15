#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_801AA6DC();
void *fn_801AD7BC();
void igPlanarShadowProcessor_fieldInit();
void igShaderProcessor_register();
extern char igPlanarShadowProcessor_dependencies[];
extern char igPlanarShadowProcessor_className[];
extern char igShaderProcessor_vtable[];
extern char igPlanarShadowProcessor_vtable[];
extern void *igPlanarShadowProcessor_meta;
void *igPlanarShadowProcessor_getMeta();
void *igPlanarShadowProcessor_vtableRead();
void igPlanarShadowProcessor_arkRegister();
void igPlanarShadowProcessor_register();
void *igPlanarShadowProcessor_getMetaCall();
}
struct UnknownGenRoot801B6490 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801B6490(){igObject_construct(this);}
};
struct UnknownGenObject801B6490 : UnknownGenRoot801B6490 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 char unknown10[44];
 UnknownGenRefMember unknown3C;
 char unknown40[8];
 inline ~UnknownGenObject801B6490(){unknown00=igPlanarShadowProcessor_vtable;}
};
extern "C" {
void *igPlanarShadowProcessor_getMeta(){
 if(!igPlanarShadowProcessor_meta || !(reinterpret_cast<unsigned int *>(igPlanarShadowProcessor_meta)[0x24/4]&4)) igPlanarShadowProcessor_arkRegister();
 return igPlanarShadowProcessor_meta;
}
void *igPlanarShadowProcessor_vtableRead(){
 UnknownGenObject801B6490 object;
 object.unknown00=igShaderProcessor_vtable;
 object.unknown00=igPlanarShadowProcessor_vtable;
 object.unknown08.value=0;
 object.unknown0C.value=0;
 object.unknown3C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igPlanarShadowProcessor_arkRegister(){
 meta_registerNow((int)igPlanarShadowProcessor_register);
}
void igPlanarShadowProcessor_register(){
 fn_801AA6DC();
 meta_registerClass(0,(int)&igPlanarShadowProcessor_meta,(int)igShaderProcessor_register,(int)fn_801AD7BC,(int)igPlanarShadowProcessor_getMetaCall,(int)igPlanarShadowProcessor_className,64,(int)igPlanarShadowProcessor_vtableRead,(int)igPlanarShadowProcessor_fieldInit,0,(int)igPlanarShadowProcessor_dependencies);
}
void *igPlanarShadowProcessor_getMetaCall(){return igPlanarShadowProcessor_getMeta();}
}
#pragma pop
