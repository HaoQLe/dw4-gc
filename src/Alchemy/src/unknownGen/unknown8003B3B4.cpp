#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void *igGamecubeSemaphore_fieldInit();
void *igGamecubeSemaphore_getMetaCall();
void igSemaphore_register();
extern char igGamecubeSemaphore_className[];
extern char igGamecubeSemaphore_vtable[];
extern char lbl_80473480[];
extern char igNamedObject_vtable[];
extern void *igSemaphore_meta;
extern void *igGamecubeSemaphore_meta;
void *igGamecubeSemaphore_vtableRead();
void igGamecubeSemaphore_arkRegister();
void igGamecubeSemaphore_register();
void *igGamecubeSemaphore_parentMeta();
}
struct UnknownGenRoot8003B274 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8003B274(){igObject_construct(this);}
};
struct UnknownGenObject8003B274_0 : UnknownGenRoot8003B274 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject8003B274_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject8003B274_1 : UnknownGenObject8003B274_0 {
 inline ~UnknownGenObject8003B274_1(){unknown00=lbl_80473480;}
};
struct UnknownGenObject8003B274 : UnknownGenObject8003B274_1 {
 char unknown0C[36];
 inline ~UnknownGenObject8003B274(){unknown00=igGamecubeSemaphore_vtable;}
};
extern "C" {
void *igGamecubeSemaphore_parentMeta(){return igSemaphore_meta;}
}
#pragma pop
