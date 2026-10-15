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
void *igGamecubeSemaphore_getMeta(){
 if(!igGamecubeSemaphore_meta || !(reinterpret_cast<unsigned int *>(igGamecubeSemaphore_meta)[0x24/4]&4)) igGamecubeSemaphore_arkRegister();
 return igGamecubeSemaphore_meta;
}
void *igGamecubeSemaphore_vtableRead(){
 UnknownGenObject8003B274 object;
 object.unknown00=igNamedObject_vtable;
 object.unknown08.value=0;
 object.unknown00=lbl_80473480;
 object.unknown00=igGamecubeSemaphore_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igGamecubeSemaphore_arkRegister(){
 meta_registerNow((int)igGamecubeSemaphore_register);
}
void igGamecubeSemaphore_register(){
 fn_80021B94();
 meta_registerClass(0,(int)&igGamecubeSemaphore_meta,(int)igSemaphore_register,(int)igGamecubeSemaphore_parentMeta,(int)igGamecubeSemaphore_getMetaCall,(int)igGamecubeSemaphore_className,36,(int)igGamecubeSemaphore_vtableRead,(int)igGamecubeSemaphore_fieldInit,0,0);
}
void *igGamecubeSemaphore_parentMeta(){return igSemaphore_meta;}
}
#pragma pop
