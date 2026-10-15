#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_8010CBD4();
void *fn_8010E6DC();
void igGuiSystemModel_arkRegister();
void igView_register();
extern char igWindowSizeObserver_className[];
extern char lbl_80495AD8[];
extern char igWindowSizeObserver_vtable[];
extern void *lbl_805621F4;
extern void *igWindowSizeObserver_meta;
extern void *igGuiSystemModel_meta;
void *igWindowSizeObserver_getMeta();
void *igWindowSizeObserver_vtableRead();
void igWindowSizeObserver_arkRegister();
void igWindowSizeObserver_register();
void *igWindowSizeObserver_getMetaCall();
}
struct UnknownGenObject80110BBC_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *igWindowSizeObserver_create(void *object){
 igWindowSizeObserver_arkRegister();
 return meta_createInstance(igWindowSizeObserver_meta,object);
}
void *igWindowSizeObserver_getMeta(){
 if(!igWindowSizeObserver_meta || !(reinterpret_cast<unsigned int *>(igWindowSizeObserver_meta)[0x24/4]&4)) igWindowSizeObserver_arkRegister();
 return igWindowSizeObserver_meta;
}
void *igWindowSizeObserver_vtableRead(){
 UnknownGenObject80110BBC_0 object;
 igObject_construct(&object);
 object.unknown00=lbl_80495AD8;
 object.unknown00=igWindowSizeObserver_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igWindowSizeObserver_arkRegister(){
 meta_registerNow((int)igWindowSizeObserver_register);
}
void igWindowSizeObserver_register(){
 fn_8010CBD4();
 meta_registerClass(0,(int)&igWindowSizeObserver_meta,(int)igView_register,(int)fn_8010E6DC,(int)igWindowSizeObserver_getMetaCall,(int)igWindowSizeObserver_className,12,(int)igWindowSizeObserver_vtableRead,0,0,0);
}
void *igWindowSizeObserver_getMetaCall(){return igWindowSizeObserver_getMeta();}
void *fn_80110CB8(){
 if(!igGuiSystemModel_meta) igGuiSystemModel_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igGuiSystemModel_meta;
}
void *igGuiSystemModel_getMeta(){
 if(!igGuiSystemModel_meta || !(reinterpret_cast<unsigned int *>(igGuiSystemModel_meta)[0x24/4]&4)) igGuiSystemModel_arkRegister();
 return igGuiSystemModel_meta;
}
}
#pragma pop
