#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void igObject_construct(void *);
extern char beHitLandModelInfoRam_vtable[];
extern char beBaseInfoRam_vtable[];
}
struct UnknownGenRoot802D4548 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802D4548(){igObject_construct(this);}
};
struct UnknownGenObject802D4548_0 : UnknownGenRoot802D4548 {
 char unknown04[36];
 UnknownGenRefMember unknown28;
 inline ~UnknownGenObject802D4548_0(){unknown00=beBaseInfoRam_vtable;}
};
struct UnknownGenObject802D4548 : UnknownGenObject802D4548_0 {
 char unknown2C[4];
 inline ~UnknownGenObject802D4548(){unknown00=beHitLandModelInfoRam_vtable;}
};
extern "C" {
void *beHitLandModelInfoRam_vtableRead(){
 UnknownGenObject802D4548 object;
 object.unknown00=beBaseInfoRam_vtable;
 object.unknown28.value=0;
 object.unknown00=beHitLandModelInfoRam_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
