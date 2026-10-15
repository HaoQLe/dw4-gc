#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void *fn_8010E6DC();
void fn_80402E28();
void igView_register();
void igViewerSceneInfoManagerController_fieldInit();
extern char igViewerSceneInfoManagerController_className[];
extern char lbl_80495AD8[];
extern char lbl_804F03E4[];
extern char igViewerSceneInfoManagerController_vtable[];
extern void *igViewerSceneInfoManagerController_meta;
extern void *lbl_805621F4;
void *igViewerSceneInfoManagerController_getMeta();
void *igViewerSceneInfoManagerController_vtableRead();
void igViewerSceneInfoManagerController_registerNow();
void igViewerSceneInfoManagerController_register();
void *igViewerSceneInfoManagerController_getMetaCall();
}
struct UnknownGenObject804051D4_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *igViewerSceneInfoManagerController_metaObject(){
 if(!igViewerSceneInfoManagerController_meta) igViewerSceneInfoManagerController_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igViewerSceneInfoManagerController_meta;
}
void *igViewerSceneInfoManagerController_getMeta(){
 if(!igViewerSceneInfoManagerController_meta || !(reinterpret_cast<unsigned int *>(igViewerSceneInfoManagerController_meta)[0x24/4]&4)) igViewerSceneInfoManagerController_registerNow();
 return igViewerSceneInfoManagerController_meta;
}
void *igViewerSceneInfoManagerController_vtableRead(){
 UnknownGenObject804051D4_0 object;
 igObject_construct(&object);
 object.unknown00=lbl_80495AD8;
 object.unknown00=igViewerSceneInfoManagerController_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igViewerSceneInfoManagerController_registerNow(){
 meta_registerNow((int)igViewerSceneInfoManagerController_register);
}
void igViewerSceneInfoManagerController_register(){
 fn_80402E28();
 meta_registerClass(0,(int)&igViewerSceneInfoManagerController_meta,(int)igView_register,(int)fn_8010E6DC,(int)igViewerSceneInfoManagerController_getMetaCall,(int)igViewerSceneInfoManagerController_className,20,(int)igViewerSceneInfoManagerController_vtableRead,(int)igViewerSceneInfoManagerController_fieldInit,0,(int)lbl_804F03E4);
}
void *igViewerSceneInfoManagerController_getMetaCall(){return igViewerSceneInfoManagerController_getMeta();}
}
#pragma pop
