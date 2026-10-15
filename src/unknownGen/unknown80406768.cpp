#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void *fn_80284550();
void fn_80402E28();
void igInfoManager_register();
void igViewerDataPumpManager_fieldInit();
extern char igViewerDataPumpManager_className[];
extern char igNamedObject_vtable[];
extern char lbl_804CBA60[];
extern char lbl_804F09A4[];
extern char igViewerDataPumpManager_vtable[];
extern void *igViewerDataPumpManager_meta;
void *igViewerDataPumpManager_getMeta();
void *igViewerDataPumpManager_vtableRead();
void igViewerDataPumpManager_registerNow();
void igViewerDataPumpManager_register();
void *igViewerDataPumpManager_getMetaCall();
}
struct UnknownGenRoot804067F4 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot804067F4(){fn_8006665C(this);}
};
struct UnknownGenObject804067F4_0 : UnknownGenRoot804067F4 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject804067F4_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject804067F4_1 : UnknownGenObject804067F4_0 {
 inline ~UnknownGenObject804067F4_1(){unknown00=lbl_804CBA60;}
};
struct UnknownGenObject804067F4 : UnknownGenObject804067F4_1 {
 char unknown0C[4];
 UnknownGenRefMember unknown10;
 char unknown14[12];
 inline ~UnknownGenObject804067F4(){unknown00=igViewerDataPumpManager_vtable;}
};
extern "C" {
void *igViewerDataPumpManager_create(void *object){
 igViewerDataPumpManager_registerNow();
 return meta_createInstance(igViewerDataPumpManager_meta,object);
}
void *igViewerDataPumpManager_getMeta(){
 if(!igViewerDataPumpManager_meta || !(reinterpret_cast<unsigned int *>(igViewerDataPumpManager_meta)[0x24/4]&4)) igViewerDataPumpManager_registerNow();
 return igViewerDataPumpManager_meta;
}
void *igViewerDataPumpManager_vtableRead(){
 UnknownGenObject804067F4 object;
 object.unknown00=igNamedObject_vtable;
 object.unknown08.value=0;
 object.unknown00=lbl_804CBA60;
 object.unknown00=igViewerDataPumpManager_vtable;
 object.unknown10.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igViewerDataPumpManager_registerNow(){
 meta_registerNow((int)igViewerDataPumpManager_register);
}
void igViewerDataPumpManager_register(){
 fn_80402E28();
 meta_registerClass(0,(int)&igViewerDataPumpManager_meta,(int)igInfoManager_register,(int)fn_80284550,(int)igViewerDataPumpManager_getMetaCall,(int)igViewerDataPumpManager_className,20,(int)igViewerDataPumpManager_vtableRead,(int)igViewerDataPumpManager_fieldInit,0,(int)lbl_804F09A4);
}
void *igViewerDataPumpManager_getMetaCall(){return igViewerDataPumpManager_getMeta();}
}
#pragma pop
