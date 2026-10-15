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
void igFolder_registerNow();
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
void *igFolder_create(void *object){
 igFolder_registerNow();
 return meta_createInstance(igFolder_meta,object);
}
void *igFolder_getMeta(){
 if(!igFolder_meta || !(reinterpret_cast<unsigned int *>(igFolder_meta)[0x24/4]&4)) igFolder_registerNow();
 return igFolder_meta;
}
void *igFolder_vtableRead(){
 UnknownGenObject8002F7B8 object;
 object.unknown00=igFolder_vtable;
 object.unknown08.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igFolder_registerNow(){
 meta_registerNow((int)igFolder_register);
}
void igFolder_register(){
 fn_80021B94();
 meta_registerClass(0,(int)&igFolder_meta,(int)igObject_register,(int)fn_800237D0,(int)igFolder_getMetaCall,(int)igFolder_className,12,(int)igFolder_vtableRead,(int)igFolder_fieldInit,0,0);
}
void *igFolder_getMetaCall(){return igFolder_getMeta();}
}
#pragma pop
