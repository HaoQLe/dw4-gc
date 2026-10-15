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
void igMultiResolutionMeshCore_fieldInit();
void igObject_register();
extern char igMultiResolutionMeshCore_dependencies[];
extern char igMultiResolutionMeshCore_className[];
extern char igMultiResolutionMeshCore_vtable[];
extern void *lbl_805621F4;
extern void *igMultiResolutionMeshCore_meta;
void *igMultiResolutionMeshCore_getMeta();
void *igMultiResolutionMeshCore_vtableRead();
void igMultiResolutionMeshCore_arkRegister();
void igMultiResolutionMeshCore_register();
void *igMultiResolutionMeshCore_getMetaCall();
}
struct UnknownGenRoot801B8F24 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801B8F24(){igObject_construct(this);}
};
struct UnknownGenObject801B8F24 : UnknownGenRoot801B8F24 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 UnknownGenRefMember unknown14;
 char unknown18[64];
 inline ~UnknownGenObject801B8F24(){unknown00=igMultiResolutionMeshCore_vtable;}
};
extern "C" {
void *fn_801B8EAC(){
 if(!igMultiResolutionMeshCore_meta) igMultiResolutionMeshCore_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igMultiResolutionMeshCore_meta;
}
void *igMultiResolutionMeshCore_getMeta(){
 if(!igMultiResolutionMeshCore_meta || !(reinterpret_cast<unsigned int *>(igMultiResolutionMeshCore_meta)[0x24/4]&4)) igMultiResolutionMeshCore_arkRegister();
 return igMultiResolutionMeshCore_meta;
}
void *igMultiResolutionMeshCore_vtableRead(){
 UnknownGenObject801B8F24 object;
 object.unknown00=igMultiResolutionMeshCore_vtable;
 object.unknown08.value=0;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 object.unknown14.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igMultiResolutionMeshCore_arkRegister(){
 meta_registerNow((int)igMultiResolutionMeshCore_register);
}
void igMultiResolutionMeshCore_register(){
 fn_801AA6DC();
 meta_registerClass(0,(int)&igMultiResolutionMeshCore_meta,(int)igObject_register,(int)fn_800237D0,(int)igMultiResolutionMeshCore_getMetaCall,(int)igMultiResolutionMeshCore_className,80,(int)igMultiResolutionMeshCore_vtableRead,(int)igMultiResolutionMeshCore_fieldInit,0,(int)igMultiResolutionMeshCore_dependencies);
}
void *igMultiResolutionMeshCore_getMetaCall(){return igMultiResolutionMeshCore_getMeta();}
}
#pragma pop
