#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void *fn_80284540();
void fn_80402E28();
void igMessage_register();
void igViewerLoadingFileMessage_fieldInit();
extern char igViewerLoadingFileMessage_className[];
extern char igMessage_vtable[];
extern char igViewerLoadingFileMessage_vtable[];
extern void *igViewerLoadingFileMessage_meta;
void *igViewerLoadingFileMessage_getMeta();
void *igViewerLoadingFileMessage_vtableRead();
void igViewerLoadingFileMessage_registerNow();
void igViewerLoadingFileMessage_register();
void *igViewerLoadingFileMessage_getMetaCall();
}
struct UnknownGenRoot80404F4C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80404F4C(){fn_8006665C(this);}
};
struct UnknownGenObject80404F4C : UnknownGenRoot80404F4C {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject80404F4C(){unknown00=igViewerLoadingFileMessage_vtable;}
};
extern "C" {
void *igViewerLoadingFileMessage_create(void *object){
 igViewerLoadingFileMessage_registerNow();
 return meta_createInstance(igViewerLoadingFileMessage_meta,object);
}
void *igViewerLoadingFileMessage_getMeta(){
 if(!igViewerLoadingFileMessage_meta || !(reinterpret_cast<unsigned int *>(igViewerLoadingFileMessage_meta)[0x24/4]&4)) igViewerLoadingFileMessage_registerNow();
 return igViewerLoadingFileMessage_meta;
}
void *igViewerLoadingFileMessage_vtableRead(){
 UnknownGenObject80404F4C object;
 object.unknown00=igMessage_vtable;
 object.unknown00=igViewerLoadingFileMessage_vtable;
 object.unknown0C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igViewerLoadingFileMessage_registerNow(){
 meta_registerNow((int)igViewerLoadingFileMessage_register);
}
void igViewerLoadingFileMessage_register(){
 fn_80402E28();
 meta_registerClass(0,(int)&igViewerLoadingFileMessage_meta,(int)igMessage_register,(int)fn_80284540,(int)igViewerLoadingFileMessage_getMetaCall,(int)igViewerLoadingFileMessage_className,16,(int)igViewerLoadingFileMessage_vtableRead,(int)igViewerLoadingFileMessage_fieldInit,0,0);
}
void *igViewerLoadingFileMessage_getMetaCall(){return igViewerLoadingFileMessage_getMeta();}
}
#pragma pop
