#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void *fn_800237D0();
void fn_800261F4(void *,short);
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void igEventTracker_fieldInit();
void igObject_register();
extern char igEventTracker_dependencies[];
extern char igEventTracker_className[];
extern char igEventTracker_vtable[];
extern void *igEventTracker_meta;
extern void *lbl_805621F4;
void *igEventTracker_getMeta();
void *igEventTracker_vtableRead();
void igEventTracker_arkRegister();
void igEventTracker_register();
void *igEventTracker_getMetaCall();
}
struct UnknownGenObject80030CC8 {
 void *unknown00;
 char unknown04[4];
 int unknown08;
 char unknown0C[36];
 int unknown30;
 int unknown34;
 int unknown38;
 int unknown3C;
 int unknown40;
 int unknown44;
 int unknown48;
 int unknown4C;
 int unknown50;
 int unknown54;
 char unknown58[4];
 int unknown5C;
 char unknown60[9424];
};
extern "C" {
void *igEventTracker_create(void *object){
 igEventTracker_arkRegister();
 return meta_createInstance(igEventTracker_meta,object);
}
void *fn_80030C50(){
 if(!igEventTracker_meta) igEventTracker_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igEventTracker_meta;
}
void *igEventTracker_getMeta(){
 if(!igEventTracker_meta || !(reinterpret_cast<unsigned int *>(igEventTracker_meta)[0x24/4]&4)) igEventTracker_arkRegister();
 return igEventTracker_meta;
}
void *igEventTracker_vtableRead(){
 UnknownGenObject80030CC8 object;
 igObject_construct(&object);
 object.unknown00=igEventTracker_vtable;
 object.unknown08=0;
 object.unknown30=0;
 object.unknown34=0;
 object.unknown38=0;
 object.unknown3C=0;
 object.unknown40=0;
 object.unknown44=0;
 object.unknown48=0;
 object.unknown4C=0;
 object.unknown50=0;
 object.unknown54=0;
 object.unknown5C=0;
 void *result=*reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
 fn_800261F4(&object,-1);
 return result;
}
void igEventTracker_arkRegister(){
 meta_registerNow((int)igEventTracker_register);
}
void igEventTracker_register(){
 fn_80021B94();
 meta_registerClass(0,(int)&igEventTracker_meta,(int)igObject_register,(int)fn_800237D0,(int)igEventTracker_getMetaCall,(int)igEventTracker_className,9520,(int)igEventTracker_vtableRead,(int)igEventTracker_fieldInit,0,(int)igEventTracker_dependencies);
}
void *igEventTracker_getMetaCall(){return igEventTracker_getMeta();}
}
#pragma pop
