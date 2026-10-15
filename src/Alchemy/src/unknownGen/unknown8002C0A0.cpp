#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void *fn_8002C3D0();
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void *igArenaMemoryPool_getMeta();
void igFile_register();
void igMemoryFile_fieldInit();
extern char igMemoryFile_className[];
extern char igMemoryFile_vtable[];
extern char lbl_804727A4[];
extern char igNamedObject_vtable[];
extern void *igMemoryFile_meta;
extern void *igFile_meta;
void *igMemoryFile_getMeta();
void *igMemoryFile_vtableRead();
void igMemoryFile_arkRegister();
void igMemoryFile_register();
void *igMemoryFile_getMetaCall();
void *fn_8002C31C();
}
struct UnknownGenRoot8002C134 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8002C134(){igObject_construct(this);}
};
struct UnknownGenObject8002C134_0 : UnknownGenRoot8002C134 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject8002C134_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject8002C134_1 : UnknownGenObject8002C134_0 {
 UnknownGenString unknown0C;
 char unknown10[24];
 UnknownGenString unknown28;
 inline ~UnknownGenObject8002C134_1(){unknown00=lbl_804727A4;}
};
struct UnknownGenObject8002C134 : UnknownGenObject8002C134_1 {
 char unknown2C[28];
 inline ~UnknownGenObject8002C134(){unknown00=igMemoryFile_vtable;}
};
extern "C" {
void *igArenaMemoryPool_getMetaCall(){return igArenaMemoryPool_getMeta();}
void *igMemoryFile_create(void *object){
 igMemoryFile_arkRegister();
 return meta_createInstance(igMemoryFile_meta,object);
}
void *igMemoryFile_getMeta(){
 if(!igMemoryFile_meta || !(reinterpret_cast<unsigned int *>(igMemoryFile_meta)[0x24/4]&4)) igMemoryFile_arkRegister();
 return igMemoryFile_meta;
}
void *igMemoryFile_vtableRead(){
 UnknownGenObject8002C134 object;
 object.unknown00=igNamedObject_vtable;
 object.unknown08.value=0;
 object.unknown00=lbl_804727A4;
 object.unknown0C.value=0;
 object.unknown28.value=0;
 object.unknown00=igMemoryFile_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igMemoryFile_arkRegister(){
 meta_registerNow((int)igMemoryFile_register);
}
void igMemoryFile_register(){
 fn_80021B94();
 meta_registerClass(0,(int)&igMemoryFile_meta,(int)igFile_register,(int)fn_8002C31C,(int)igMemoryFile_getMetaCall,(int)igMemoryFile_className,60,(int)igMemoryFile_vtableRead,(int)igMemoryFile_fieldInit,(int)fn_8002C3D0,0);
}
void *igMemoryFile_getMetaCall(){return igMemoryFile_getMeta();}
void *fn_8002C31C(){return igFile_meta;}
}
#pragma pop
