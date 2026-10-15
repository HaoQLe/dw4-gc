#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void igObject_construct(void *);
extern char beParticleCtrl2InfoWork_vtable[];
}
struct UnknownGenRoot802C184C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802C184C(){igObject_construct(this);}
};
struct UnknownGenObject802C184C : UnknownGenRoot802C184C {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 char unknown0C[20];
 inline ~UnknownGenObject802C184C(){unknown00=beParticleCtrl2InfoWork_vtable;}
};
extern "C" {
void *beParticleCtrl2InfoWork_vtableRead(){
 UnknownGenObject802C184C object;
 object.unknown00=beParticleCtrl2InfoWork_vtable;
 object.unknown08.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
