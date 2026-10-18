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
void *fn_80110CB8(){
 if(!igGuiSystemModel_meta) igGuiSystemModel_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igGuiSystemModel_meta;
}
}
#pragma pop
