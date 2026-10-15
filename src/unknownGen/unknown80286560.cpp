#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void *fn_8010F4FC();
void fn_80284294();
void *fn_80289930();
void igEventReceiver_register();
void igWindowResizeEventReceiver_fieldInit();
extern char igWindowResizeEventReceiver_className[];
extern char igEventReceiver_vtable[];
extern char igWindowResizeEventReceiver_dependencies[];
extern char igWindowResizeEventReceiver_vtable[];
extern void *igWindowResizeEventReceiver_meta;
extern void *lbl_805621F4;
void *igWindowResizeEventReceiver_getMeta();
void *igWindowResizeEventReceiver_vtableRead();
void igWindowResizeEventReceiver_arkRegister();
void igWindowResizeEventReceiver_register();
void *igWindowResizeEventReceiver_getMetaCall();
}
struct UnknownGenObject80286620_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_80286560(){return fn_80289930();}
void *igWindowResizeEventReceiver_metaObject(){
 if(!igWindowResizeEventReceiver_meta) igWindowResizeEventReceiver_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igWindowResizeEventReceiver_meta;
}
void *igWindowResizeEventReceiver_getMeta(){
 if(!igWindowResizeEventReceiver_meta || !(reinterpret_cast<unsigned int *>(igWindowResizeEventReceiver_meta)[0x24/4]&4)) igWindowResizeEventReceiver_arkRegister();
 return igWindowResizeEventReceiver_meta;
}
void *igWindowResizeEventReceiver_vtableRead(){
 UnknownGenObject80286620_0 object;
 igObject_construct(&object);
 object.unknown00=igEventReceiver_vtable;
 object.unknown00=igWindowResizeEventReceiver_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igWindowResizeEventReceiver_arkRegister(){
 meta_registerNow((int)igWindowResizeEventReceiver_register);
}
void igWindowResizeEventReceiver_register(){
 fn_80284294();
 meta_registerClass(0,(int)&igWindowResizeEventReceiver_meta,(int)igEventReceiver_register,(int)fn_8010F4FC,(int)igWindowResizeEventReceiver_getMetaCall,(int)igWindowResizeEventReceiver_className,12,(int)igWindowResizeEventReceiver_vtableRead,(int)igWindowResizeEventReceiver_fieldInit,0,(int)igWindowResizeEventReceiver_dependencies);
}
void *igWindowResizeEventReceiver_getMetaCall(){return igWindowResizeEventReceiver_getMeta();}
}
#pragma pop
