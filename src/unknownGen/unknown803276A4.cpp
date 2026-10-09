#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804E6A60[];
extern char lbl_804EC49C[];
extern char lbl_804EC720[];
}
struct UnknownGenRoot803276A4 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot803276A4(){fn_8006665C(this);}
};
struct UnknownGenObject803276A4_0 : UnknownGenRoot803276A4 {
 char unknown04[48];
 UnknownGenRefMember unknown34;
 UnknownGenRefMember unknown38;
 UnknownGenRefMember unknown3C;
 UnknownGenRefMember unknown40;
 UnknownGenRefMember unknown44;
 UnknownGenRefMember unknown48;
 UnknownGenRefMember unknown4C;
 inline ~UnknownGenObject803276A4_0(){unknown00=lbl_804E6A60;}
};
struct UnknownGenObject803276A4_1 : UnknownGenObject803276A4_0 {
 inline ~UnknownGenObject803276A4_1(){unknown00=lbl_804EC720;}
};
struct UnknownGenObject803276A4 : UnknownGenObject803276A4_1 {
 char unknown50[8];
 inline ~UnknownGenObject803276A4(){unknown00=lbl_804EC49C;}
};
extern "C" {
void *beNDMWStatusTitle04_vtableRead(){
 UnknownGenObject803276A4 object;
 object.unknown00=lbl_804E6A60;
 object.unknown34.value=0;
 object.unknown38.value=0;
 object.unknown3C.value=0;
 object.unknown40.value=0;
 object.unknown44.value=0;
 object.unknown48.value=0;
 object.unknown4C.value=0;
 object.unknown00=lbl_804EC720;
 object.unknown00=lbl_804EC49C;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
