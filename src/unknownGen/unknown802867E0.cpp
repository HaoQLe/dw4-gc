#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_80284294();
void *fn_80284540();
void igMessage_register();
void igViewportResizedMessage_fieldInit();
extern char igViewportResizedMessage_className[];
extern char igViewportResizedMessage_vtable[];
extern char igMessage_vtable[];
extern void *igViewportResizedMessage_meta;
void *igViewportResizedMessage_getMeta();
void *igViewportResizedMessage_vtableRead();
void igViewportResizedMessage_registerNow();
void igViewportResizedMessage_register();
void *igViewportResizedMessage_getMetaCall();
}
struct UnknownGenObject8028686C_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *igViewportResizedMessage_create(void *object){
 igViewportResizedMessage_registerNow();
 return meta_createInstance(igViewportResizedMessage_meta,object);
}
void *igViewportResizedMessage_getMeta(){
 if(!igViewportResizedMessage_meta || !(reinterpret_cast<unsigned int *>(igViewportResizedMessage_meta)[0x24/4]&4)) igViewportResizedMessage_registerNow();
 return igViewportResizedMessage_meta;
}
void *igViewportResizedMessage_vtableRead(){
 UnknownGenObject8028686C_0 object;
 igObject_construct(&object);
 object.unknown00=igMessage_vtable;
 object.unknown00=igViewportResizedMessage_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igViewportResizedMessage_registerNow(){
 meta_registerNow((int)igViewportResizedMessage_register);
}
void igViewportResizedMessage_register(){
 fn_80284294();
 meta_registerClass(0,(int)&igViewportResizedMessage_meta,(int)igMessage_register,(int)fn_80284540,(int)igViewportResizedMessage_getMetaCall,(int)igViewportResizedMessage_className,24,(int)igViewportResizedMessage_vtableRead,(int)igViewportResizedMessage_fieldInit,0,0);
}
void *igViewportResizedMessage_getMetaCall(){return igViewportResizedMessage_getMeta();}
}
#pragma pop
