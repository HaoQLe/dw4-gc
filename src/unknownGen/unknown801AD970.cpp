#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_801AA6DC();
void igObjectList_register();
void igObjectPool_fieldInit();
extern char igDataList_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igObjectPool_className[];
extern char igObjectPool_vtable[];
extern void *igObjectPool_meta;
void *igObjectPool_getMeta();
void *igObjectPool_vtableRead();
void igObjectPool_registerNow();
void igObjectPool_register();
void *igObjectPool_getMetaCall();
}
struct UnknownGenObject801AD9AC_0 {
 void *unknown00;
 char unknown04[36];
};
extern "C" {
void *igObjectPool_getMeta(){
 if(!igObjectPool_meta || !(reinterpret_cast<unsigned int *>(igObjectPool_meta)[0x24/4]&4)) igObjectPool_registerNow();
 return igObjectPool_meta;
}
void *igObjectPool_vtableRead(){
 UnknownGenObject801AD9AC_0 object;
 igObject_construct(&object);
 object.unknown00=igDataList_vtable;
 object.unknown00=lbl_80476E0C;
 object.unknown00=igObjectList_vtable;
 object.unknown00=igObjectPool_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igObjectPool_registerNow(){
 meta_registerNow((int)igObjectPool_register);
}
void igObjectPool_register(){
 fn_801AA6DC();
 meta_registerClass(0,(int)&igObjectPool_meta,(int)igObjectList_register,(int)fn_80024180,(int)igObjectPool_getMetaCall,(int)igObjectPool_className,32,(int)igObjectPool_vtableRead,(int)igObjectPool_fieldInit,0,0);
}
void *igObjectPool_getMetaCall(){return igObjectPool_getMeta();}
}
#pragma pop
