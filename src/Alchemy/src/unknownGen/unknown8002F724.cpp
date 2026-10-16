#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void *fn_800237D0();
void *fn_8005068C();
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void *igFolder_fieldInit();
void igObject_register();
extern char igFolder_className[];
extern char igFolder_vtable[];
extern void *igFolder_meta;
void *igFolder_getMeta();
void *igFolder_vtableRead();
void igFolder_arkRegister();
void igFolder_register();
void *igFolder_getMetaCall();
}
struct UnknownGenRoot8002F7B8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8002F7B8(){igObject_construct(this);}
};
struct UnknownGenObject8002F7B8 : UnknownGenRoot8002F7B8 {
 char unknown04[4];
 UnknownGenString unknown08;
 char unknown0C[4];
 inline ~UnknownGenObject8002F7B8(){unknown00=igFolder_vtable;}
};
extern "C" {
void *fn_8002F724(){return fn_8005068C();}
}
#pragma pop
