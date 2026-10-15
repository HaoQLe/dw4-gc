#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void igObject_construct(void *);
extern char beBaseInfoRam_vtable[];
extern char beNDMWGameRamInfoRam_vtable[];
}
struct UnknownGenRoot80344A14 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80344A14(){igObject_construct(this);}
};
struct UnknownGenObject80344A14_0 : UnknownGenRoot80344A14 {
 char unknown04[36];
 UnknownGenRefMember unknown28;
 inline ~UnknownGenObject80344A14_0(){unknown00=beBaseInfoRam_vtable;}
};
struct UnknownGenObject80344A14 : UnknownGenObject80344A14_0 {
 char unknown2C[4];
 inline ~UnknownGenObject80344A14(){unknown00=beNDMWGameRamInfoRam_vtable;}
};
extern "C" {
void *beNDMWGameRamInfoRam_vtableRead(){
 UnknownGenObject80344A14 object;
 object.unknown00=beBaseInfoRam_vtable;
 object.unknown28.value=0;
 object.unknown00=beNDMWGameRamInfoRam_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
