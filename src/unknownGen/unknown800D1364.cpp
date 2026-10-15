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
void igParticleFormat_arkRegister();
void igParticleFormat_register();
void *igParticleFormat_getMetaCall();
}
struct UnknownGenObject800D13DC_0 {
 void *unknown00;
 char unknown04[52];
};
extern "C" {
void *fn_800D1364(){
 if(!igParticleFormat_meta) igParticleFormat_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igParticleFormat_meta;
}
}
#pragma pop
