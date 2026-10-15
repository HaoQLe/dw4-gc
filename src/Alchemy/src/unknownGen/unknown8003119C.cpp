#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void *fn_800237D0();
void *fn_80047080();
void *fn_800470A0();
void *meta_createInstance(void *,void *);
void fn_80065D94(int);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void igObject_register();
extern char igErrorHandler_className[];
extern char igErrorHandler_vtable[];
extern void *igErrorHandler_meta;
void *igErrorHandler_getMeta();
void *igErrorHandler_vtableRead();
void igErrorHandler_registerNow();
void igErrorHandler_register();
void *igErrorHandler_getMetaCall();
void fn_80031310();
void *fn_80031338();
void *fn_80031358();
}
struct UnknownGenObject80031210_0 {
 void *unknown00;
 char unknown04[4];
};
extern "C" {
void *igErrorHandler_create(void *object){
 igErrorHandler_registerNow();
 return meta_createInstance(igErrorHandler_meta,object);
}
void *igErrorHandler_getMeta(){
 if(!igErrorHandler_meta || !(reinterpret_cast<unsigned int *>(igErrorHandler_meta)[0x24/4]&4)) igErrorHandler_registerNow();
 return igErrorHandler_meta;
}
void *igErrorHandler_vtableRead(){
 UnknownGenObject80031210_0 object;
 fn_8006665C(&object);
 object.unknown00=igErrorHandler_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igErrorHandler_registerNow(){
 meta_registerNow((int)igErrorHandler_register);
}
void igErrorHandler_register(){
 fn_80021B94();
 meta_registerClass(0,(int)&igErrorHandler_meta,(int)igObject_register,(int)fn_800237D0,(int)igErrorHandler_getMetaCall,(int)igErrorHandler_className,8,(int)igErrorHandler_vtableRead,(int)fn_80031310,(int)fn_80031338,0);
}
void *igErrorHandler_getMetaCall(){return igErrorHandler_getMeta();}
void fn_80031310(){
 fn_80065D94((int)fn_80031358);
}
void *fn_80031338(){return fn_80047080();}
void *fn_80031358(){return fn_800470A0();}
}
#pragma pop
