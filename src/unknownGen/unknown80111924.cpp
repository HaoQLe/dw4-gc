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
void *fn_80111924(){
 if(!igGuiComponentAspect_meta) igGuiComponentAspect_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igGuiComponentAspect_meta;
}
void *igGuiComponentAspect_getMeta(){
 if(!igGuiComponentAspect_meta || !(reinterpret_cast<unsigned int *>(igGuiComponentAspect_meta)[0x24/4]&4)) igGuiComponentAspect_arkRegister();
 return igGuiComponentAspect_meta;
}
void igGuiComponentAspect_arkRegister(){
 meta_registerNow((int)igGuiComponentAspect_register);
}
void igGuiComponentAspect_register(){
 fn_8010CBD4();
 meta_registerClass(1,(int)&igGuiComponentAspect_meta,(int)igView_register,(int)fn_8010E6DC,(int)igGuiComponentAspect_getMetaCall,(int)igGuiComponentAspect_className,40,0,(int)igGuiComponentAspect_fieldInit,0,(int)igGuiComponentAspect_dependencies);
}
void *igGuiComponentAspect_getMetaCall(){return igGuiComponentAspect_getMeta();}
}
#pragma pop
