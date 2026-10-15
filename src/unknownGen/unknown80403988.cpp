#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void *fn_801159FC();
void fn_80402E28();
void igAction_register();
void igViewerAction_fieldInit();
extern char igViewerAction_className[];
extern char lbl_80496CB8[];
extern char lbl_804F0038[];
extern char igViewerAction_vtable[];
extern void *igViewerAction_meta;
void *igViewerAction_getMeta();
void *igViewerAction_vtableRead();
void igViewerAction_registerNow();
void igViewerAction_register();
void *igViewerAction_getMetaCall();
}
struct UnknownGenObject80403A14_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *igViewerAction_create(void *object){
 igViewerAction_registerNow();
 return meta_createInstance(igViewerAction_meta,object);
}
void *igViewerAction_getMeta(){
 if(!igViewerAction_meta || !(reinterpret_cast<unsigned int *>(igViewerAction_meta)[0x24/4]&4)) igViewerAction_registerNow();
 return igViewerAction_meta;
}
void *igViewerAction_vtableRead(){
 UnknownGenObject80403A14_0 object;
 igObject_construct(&object);
 object.unknown00=lbl_80496CB8;
 object.unknown00=igViewerAction_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igViewerAction_registerNow(){
 meta_registerNow((int)igViewerAction_register);
}
void igViewerAction_register(){
 fn_80402E28();
 meta_registerClass(0,(int)&igViewerAction_meta,(int)igAction_register,(int)fn_801159FC,(int)igViewerAction_getMetaCall,(int)igViewerAction_className,24,(int)igViewerAction_vtableRead,(int)igViewerAction_fieldInit,0,(int)lbl_804F0038);
}
void *igViewerAction_getMetaCall(){return igViewerAction_getMeta();}
}
#pragma pop
