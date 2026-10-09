#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804E613C[];
extern char lbl_804E72AC[];
}
struct UnknownGenRoot803371A8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot803371A8(){fn_8006665C(this);}
};
struct UnknownGenObject803371A8_0 : UnknownGenRoot803371A8 {
 char unknown04[32];
 UnknownGenRefMember unknown24;
 char unknown28[4];
 UnknownGenRefMember unknown2C;
 UnknownGenRefMember unknown30;
 inline ~UnknownGenObject803371A8_0(){unknown00=lbl_804E613C;}
};
struct UnknownGenObject803371A8 : UnknownGenObject803371A8_0 {
 char unknown34[8];
 UnknownGenRefMember unknown3C;
 UnknownGenRefMember unknown40;
 UnknownGenRefMember unknown44;
 char unknown48[8];
 inline ~UnknownGenObject803371A8(){unknown00=lbl_804E72AC;}
};
extern "C" {
void *beNDMWPanelObjectStat_vtableRead(){
 UnknownGenObject803371A8 object;
 object.unknown00=lbl_804E613C;
 object.unknown24.value=0;
 object.unknown2C.value=0;
 object.unknown30.value=0;
 object.unknown00=lbl_804E72AC;
 object.unknown3C.value=0;
 object.unknown40.value=0;
 object.unknown44.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
