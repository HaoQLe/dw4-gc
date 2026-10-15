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
void *fn_8002C31C(){return igFile_meta;}
}
#pragma pop
