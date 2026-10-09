#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804D7250[];
extern char lbl_804DCDF0[];
}
struct UnknownGenRoot802D4548 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802D4548(){fn_8006665C(this);}
};
struct UnknownGenObject802D4548_0 : UnknownGenRoot802D4548 {
 char unknown04[36];
 UnknownGenRefMember unknown28;
 inline ~UnknownGenObject802D4548_0(){unknown00=lbl_804DCDF0;}
};
struct UnknownGenObject802D4548 : UnknownGenObject802D4548_0 {
 char unknown2C[4];
 inline ~UnknownGenObject802D4548(){unknown00=lbl_804D7250;}
};
extern "C" {
void *beHitLandModelInfoRam_vtableRead(){
 UnknownGenObject802D4548 object;
 object.unknown00=lbl_804DCDF0;
 object.unknown28.value=0;
 object.unknown00=lbl_804D7250;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
