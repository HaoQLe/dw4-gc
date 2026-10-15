#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_800CE2F8();
void fn_800D14D4();
void igObject_register();
extern char igParticleFormat_className[];
extern char igParticleFormat_vtable[];
extern void *lbl_805621F4;
extern void *igParticleFormat_meta;
void *igParticleFormat_getMeta();
void *igParticleFormat_vtableRead();
void igParticleFormat_registerNow();
void igParticleFormat_register();
void *igParticleFormat_getMetaCall();
}
struct UnknownGenObject800D13DC_0 {
 void *unknown00;
 char unknown04[52];
};
extern "C" {
void *igParticleFormat_create(void *object){
 igParticleFormat_registerNow();
 return meta_createInstance(igParticleFormat_meta,object);
}
void *fn_800D1364(){
 if(!igParticleFormat_meta) igParticleFormat_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igParticleFormat_meta;
}
void *igParticleFormat_getMeta(){
 if(!igParticleFormat_meta || !(reinterpret_cast<unsigned int *>(igParticleFormat_meta)[0x24/4]&4)) igParticleFormat_registerNow();
 return igParticleFormat_meta;
}
void *igParticleFormat_vtableRead(){
 UnknownGenObject800D13DC_0 object;
 igObject_construct(&object);
 object.unknown00=igParticleFormat_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igParticleFormat_registerNow(){
 meta_registerNow((int)igParticleFormat_register);
}
void igParticleFormat_register(){
 fn_800CE2F8();
 meta_registerClass(0,(int)&igParticleFormat_meta,(int)igObject_register,(int)fn_800237D0,(int)igParticleFormat_getMetaCall,(int)igParticleFormat_className,48,(int)igParticleFormat_vtableRead,(int)fn_800D14D4,0,0);
}
void *igParticleFormat_getMetaCall(){return igParticleFormat_getMeta();}
}
#pragma pop
