#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804DCDF0[];
extern char lbl_804E45B0[];
}
struct UnknownGenRoot80344A14 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80344A14(){fn_8006665C(this);}
};
struct UnknownGenObject80344A14_0 : UnknownGenRoot80344A14 {
 char unknown04[36];
 UnknownGenRefMember unknown28;
 inline ~UnknownGenObject80344A14_0(){unknown00=lbl_804DCDF0;}
};
struct UnknownGenObject80344A14 : UnknownGenObject80344A14_0 {
 char unknown2C[4];
 inline ~UnknownGenObject80344A14(){unknown00=lbl_804E45B0;}
};
extern "C" {
void *beNDMWGameRamInfoRam_vtableRead(){
 UnknownGenObject80344A14 object;
 object.unknown00=lbl_804DCDF0;
 object.unknown28.value=0;
 object.unknown00=lbl_804E45B0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
