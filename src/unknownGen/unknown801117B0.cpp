#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_8010CBD4();
void *fn_8010E6DC();
void igGuiComponentAspect_fieldInit();
void igView_register();
extern char igGuiComponentController_className[];
extern char igGuiComponentAspect_className[];
extern char lbl_80495AD8[];
extern char igGuiComponentController_vtable[];
extern char igGuiComponentAspect_dependencies[8];
extern void *lbl_805621F4;
extern void *igGuiComponentController_meta;
extern void *igGuiComponentAspect_meta;
void *igGuiComponentController_getMeta();
void *igGuiComponentController_vtableRead();
void igGuiComponentController_arkRegister();
void igGuiComponentController_register();
void *igGuiComponentController_getMetaCall();
void *igGuiComponentAspect_getMeta();
void igGuiComponentAspect_arkRegister();
void igGuiComponentAspect_register();
void *igGuiComponentAspect_getMetaCall();
}
struct UnknownGenObject80111828_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_801117B0(){
 if(!igGuiComponentController_meta) igGuiComponentController_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igGuiComponentController_meta;
}
}
#pragma pop
