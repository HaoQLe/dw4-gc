#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void *fn_8002942C();
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void igDirEntry_register();
void igExternalInfoEntry_fieldInit();
void *igGamecubeFile_getMeta();
extern char igExternalInfoEntry_className[];
extern char igExternalInfoEntry_vtable[];
extern char igDirEntry_vtable[];
extern char igNamedObject_vtable[];
extern void *igExternalInfoEntry_meta;
void *igExternalInfoEntry_getMeta();
void *igExternalInfoEntry_vtableRead();
void igExternalInfoEntry_arkRegister();
void igExternalInfoEntry_register();
void *igExternalInfoEntry_getMetaCall();
}
struct UnknownGenRoot800302DC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800302DC(){igObject_construct(this);}
};
struct UnknownGenObject800302DC_0 : UnknownGenRoot800302DC {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject800302DC_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject800302DC_1 : UnknownGenObject800302DC_0 {
 inline ~UnknownGenObject800302DC_1(){unknown00=igDirEntry_vtable;}
};
struct UnknownGenObject800302DC : UnknownGenObject800302DC_1 {
 char unknown0C[16];
 UnknownGenString unknown1C;
 char unknown20[4];
 UnknownGenString unknown24;
 inline ~UnknownGenObject800302DC(){unknown00=igExternalInfoEntry_vtable;}
};
extern "C" {
void *igExternalInfoEntry_create(void *object){
 igExternalInfoEntry_arkRegister();
 return meta_createInstance(igExternalInfoEntry_meta,object);
}
void *igExternalInfoEntry_getMeta(){
 if(!igExternalInfoEntry_meta || !(reinterpret_cast<unsigned int *>(igExternalInfoEntry_meta)[0x24/4]&4)) igExternalInfoEntry_arkRegister();
 return igExternalInfoEntry_meta;
}
void *igExternalInfoEntry_vtableRead(){
 UnknownGenObject800302DC object;
 object.unknown00=igNamedObject_vtable;
 object.unknown08.value=0;
 object.unknown00=igDirEntry_vtable;
 object.unknown00=igExternalInfoEntry_vtable;
 object.unknown1C.value=0;
 object.unknown24.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igExternalInfoEntry_arkRegister(){
 meta_registerNow((int)igExternalInfoEntry_register);
}
void igExternalInfoEntry_register(){
 fn_80021B94();
 meta_registerClass(0,(int)&igExternalInfoEntry_meta,(int)igDirEntry_register,(int)fn_8002942C,(int)igExternalInfoEntry_getMetaCall,(int)igExternalInfoEntry_className,40,(int)igExternalInfoEntry_vtableRead,(int)igExternalInfoEntry_fieldInit,0,0);
}
void *igExternalInfoEntry_getMetaCall(){return igExternalInfoEntry_getMeta();}
}
#pragma pop
