#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char beWeaponInfoRam_vtable[];
extern char beBaseInfoRam_vtable[];
}
struct UnknownGenRoot802B2968 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802B2968(){fn_8006665C(this);}
};
struct UnknownGenObject802B2968_0 : UnknownGenRoot802B2968 {
 char unknown04[36];
 UnknownGenRefMember unknown28;
 inline ~UnknownGenObject802B2968_0(){unknown00=beBaseInfoRam_vtable;}
};
struct UnknownGenObject802B2968 : UnknownGenObject802B2968_0 {
 char unknown2C[4];
 inline ~UnknownGenObject802B2968(){unknown00=beWeaponInfoRam_vtable;}
};
extern "C" {
void *beWeaponInfoRam_vtableRead(){
 UnknownGenObject802B2968 object;
 object.unknown00=beBaseInfoRam_vtable;
 object.unknown28.value=0;
 object.unknown00=beWeaponInfoRam_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
