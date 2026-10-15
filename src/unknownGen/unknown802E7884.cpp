#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void igObject_construct(void *);
extern char igParticleArray_vtable[];
extern char ParticleArray_vtable[];
}
struct UnknownGenRoot802E7884 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802E7884(){igObject_construct(this);}
};
struct UnknownGenObject802E7884_0 : UnknownGenRoot802E7884 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 char unknown0C[28];
 UnknownGenRefMember unknown28;
 UnknownGenRefMember unknown2C;
 UnknownGenRefMember unknown30;
 char unknown34[16];
 UnknownGenRefMember unknown44;
 inline ~UnknownGenObject802E7884_0(){unknown00=igParticleArray_vtable;}
};
struct UnknownGenObject802E7884 : UnknownGenObject802E7884_0 {
 char unknown48[40];
 UnknownGenRefMember unknown70;
 UnknownGenRefMember unknown74;
 char unknown78[16];
 inline ~UnknownGenObject802E7884(){unknown00=ParticleArray_vtable;}
};
extern "C" {
void *ParticleArray_vtableRead(){
 UnknownGenObject802E7884 object;
 object.unknown00=igParticleArray_vtable;
 object.unknown08.value=0;
 object.unknown28.value=0;
 object.unknown2C.value=0;
 object.unknown30.value=0;
 object.unknown44.value=0;
 object.unknown00=ParticleArray_vtable;
 object.unknown70.value=0;
 object.unknown74.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
