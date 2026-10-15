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
void *igGuiComponentController_getMeta(){
 if(!igGuiComponentController_meta || !(reinterpret_cast<unsigned int *>(igGuiComponentController_meta)[0x24/4]&4)) igGuiComponentController_arkRegister();
 return igGuiComponentController_meta;
}
void *igGuiComponentController_vtableRead(){
 UnknownGenObject80111828_0 object;
 igObject_construct(&object);
 object.unknown00=lbl_80495AD8;
 object.unknown00=igGuiComponentController_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igGuiComponentController_arkRegister(){
 meta_registerNow((int)igGuiComponentController_register);
}
void igGuiComponentController_register(){
 fn_8010CBD4();
 meta_registerClass(0,(int)&igGuiComponentController_meta,(int)igView_register,(int)fn_8010E6DC,(int)igGuiComponentController_getMetaCall,(int)igGuiComponentController_className,12,(int)igGuiComponentController_vtableRead,0,0,0);
}
void *igGuiComponentController_getMetaCall(){return igGuiComponentController_getMeta();}
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
