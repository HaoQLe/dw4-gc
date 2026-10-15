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
void igExternalIndexedEntry_fieldInit();
extern char igExternalIndexedEntry_className[];
extern char igExternalIndexedEntry_vtable[];
extern char igDirEntry_vtable[];
extern char igNamedObject_vtable[];
extern char lbl_8055D4AC[8];
extern void *igExternalIndexedEntry_meta;
void *igExternalIndexedEntry_getMeta();
void *igExternalIndexedEntry_vtableRead();
void igExternalIndexedEntry_registerNow();
void igExternalIndexedEntry_register();
void *igExternalIndexedEntry_getMetaCall();
}
struct UnknownGenRoot800305AC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800305AC(){igObject_construct(this);}
};
struct UnknownGenObject800305AC_0 : UnknownGenRoot800305AC {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject800305AC_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject800305AC_1 : UnknownGenObject800305AC_0 {
 inline ~UnknownGenObject800305AC_1(){unknown00=igDirEntry_vtable;}
};
struct UnknownGenObject800305AC : UnknownGenObject800305AC_1 {
 char unknown0C[24];
 UnknownGenRefMember unknown24;
 char unknown28[4];
 UnknownGenRefMember unknown2C;
 char unknown30[8];
 inline ~UnknownGenObject800305AC(){unknown00=igExternalIndexedEntry_vtable;}
};
extern "C" {
void *igExternalIndexedEntry_getMeta(){
 if(!igExternalIndexedEntry_meta || !(reinterpret_cast<unsigned int *>(igExternalIndexedEntry_meta)[0x24/4]&4)) igExternalIndexedEntry_registerNow();
 return igExternalIndexedEntry_meta;
}
void *igExternalIndexedEntry_vtableRead(){
 UnknownGenObject800305AC object;
 object.unknown00=igNamedObject_vtable;
 object.unknown08.value=0;
 object.unknown00=igDirEntry_vtable;
 object.unknown00=igExternalIndexedEntry_vtable;
 object.unknown24.value=0;
 object.unknown2C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igExternalIndexedEntry_registerNow(){
 meta_registerNow((int)igExternalIndexedEntry_register);
}
void igExternalIndexedEntry_register(){
 fn_80021B94();
 meta_registerClass(0,(int)&igExternalIndexedEntry_meta,(int)igDirEntry_register,(int)fn_8002942C,(int)igExternalIndexedEntry_getMetaCall,(int)igExternalIndexedEntry_className,52,(int)igExternalIndexedEntry_vtableRead,(int)igExternalIndexedEntry_fieldInit,0,(int)lbl_8055D4AC);
}
void *igExternalIndexedEntry_getMetaCall(){return igExternalIndexedEntry_getMeta();}
}
#pragma pop
