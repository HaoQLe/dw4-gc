#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_800CE2F8();
void fn_800D1124();
void igObject_register();
extern char igParticleArray_dependencies[];
extern char igParticleArray_className[];
extern char igParticleArray_vtable[];
extern void *lbl_805621F4;
extern void *igParticleArray_meta;
void *igParticleArray_getMeta();
void *igParticleArray_vtableRead();
void igParticleArray_arkRegister();
void igParticleArray_register();
void *igParticleArray_getMetaCall();
}
struct UnknownGenRoot800D0EF4 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800D0EF4(){igObject_construct(this);}
};
struct UnknownGenObject800D0EF4 : UnknownGenRoot800D0EF4 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 char unknown0C[28];
 UnknownGenRefMember unknown28;
 UnknownGenRefMember unknown2C;
 UnknownGenRefMember unknown30;
 char unknown34[16];
 UnknownGenRefMember unknown44;
 char unknown48[24];
 inline ~UnknownGenObject800D0EF4(){unknown00=igParticleArray_vtable;}
};
extern "C" {
void *fn_800D0E7C(){
 if(!igParticleArray_meta) igParticleArray_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igParticleArray_meta;
}
void *igParticleArray_getMeta(){
 if(!igParticleArray_meta || !(reinterpret_cast<unsigned int *>(igParticleArray_meta)[0x24/4]&4)) igParticleArray_arkRegister();
 return igParticleArray_meta;
}
void *igParticleArray_vtableRead(){
 UnknownGenObject800D0EF4 object;
 object.unknown00=igParticleArray_vtable;
 object.unknown08.value=0;
 object.unknown28.value=0;
 object.unknown2C.value=0;
 object.unknown30.value=0;
 object.unknown44.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igParticleArray_arkRegister(){
 meta_registerNow((int)igParticleArray_register);
}
void igParticleArray_register(){
 fn_800CE2F8();
 meta_registerClass(0,(int)&igParticleArray_meta,(int)igObject_register,(int)fn_800237D0,(int)igParticleArray_getMetaCall,(int)igParticleArray_className,92,(int)igParticleArray_vtableRead,(int)fn_800D1124,0,(int)igParticleArray_dependencies);
}
void *igParticleArray_getMetaCall(){return igParticleArray_getMeta();}
}
#pragma pop
