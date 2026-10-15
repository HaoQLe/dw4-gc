#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void *fn_8002942C();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void igDirEntry_register();
void igExternalDirEntry_fieldInit();
extern char igExternalDirEntry_className[];
extern char igExternalDirEntry_vtable[];
extern char igDirEntry_vtable[];
extern char igNamedObject_vtable[];
extern char lbl_8055D4B4[8];
extern void *igExternalDirEntry_meta;
void *igExternalDirEntry_getMeta();
void *igExternalDirEntry_vtableRead();
void igExternalDirEntry_registerNow();
void igExternalDirEntry_register();
void *igExternalDirEntry_getMetaCall();
}
struct UnknownGenRoot800308AC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800308AC(){igObject_construct(this);}
};
struct UnknownGenObject800308AC_0 : UnknownGenRoot800308AC {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject800308AC_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject800308AC_1 : UnknownGenObject800308AC_0 {
 inline ~UnknownGenObject800308AC_1(){unknown00=igDirEntry_vtable;}
};
struct UnknownGenObject800308AC : UnknownGenObject800308AC_1 {
 char unknown0C[16];
 UnknownGenString unknown1C;
 UnknownGenString unknown20;
 char unknown24[4];
 UnknownGenString unknown28;
 char unknown2C[12];
 inline ~UnknownGenObject800308AC(){unknown00=igExternalDirEntry_vtable;}
};
extern "C" {
void *igExternalDirEntry_getMeta(){
 if(!igExternalDirEntry_meta || !(reinterpret_cast<unsigned int *>(igExternalDirEntry_meta)[0x24/4]&4)) igExternalDirEntry_registerNow();
 return igExternalDirEntry_meta;
}
void *igExternalDirEntry_vtableRead(){
 UnknownGenObject800308AC object;
 object.unknown00=igNamedObject_vtable;
 object.unknown08.value=0;
 object.unknown00=igDirEntry_vtable;
 object.unknown00=igExternalDirEntry_vtable;
 object.unknown1C.value=0;
 object.unknown20.value=0;
 object.unknown28.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igExternalDirEntry_registerNow(){
 meta_registerNow((int)igExternalDirEntry_register);
}
void igExternalDirEntry_register(){
 fn_80021B94();
 meta_registerClass(0,(int)&igExternalDirEntry_meta,(int)igDirEntry_register,(int)fn_8002942C,(int)igExternalDirEntry_getMetaCall,(int)igExternalDirEntry_className,44,(int)igExternalDirEntry_vtableRead,(int)igExternalDirEntry_fieldInit,0,(int)lbl_8055D4B4);
}
void *igExternalDirEntry_getMetaCall(){return igExternalDirEntry_getMeta();}
}
#pragma pop
