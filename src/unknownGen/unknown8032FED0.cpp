#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804E6888[];
extern char lbl_804E6A60[];
extern char lbl_804ED31C[];
}
struct UnknownGenRoot8032FED0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8032FED0(){fn_8006665C(this);}
};
struct UnknownGenObject8032FED0_0 : UnknownGenRoot8032FED0 {
 char unknown04[48];
 UnknownGenRefMember unknown34;
 UnknownGenRefMember unknown38;
 UnknownGenRefMember unknown3C;
 UnknownGenRefMember unknown40;
 UnknownGenRefMember unknown44;
 UnknownGenRefMember unknown48;
 UnknownGenRefMember unknown4C;
 inline ~UnknownGenObject8032FED0_0(){unknown00=lbl_804E6A60;}
};
struct UnknownGenObject8032FED0_1 : UnknownGenObject8032FED0_0 {
 inline ~UnknownGenObject8032FED0_1(){unknown00=lbl_804E6888;}
};
struct UnknownGenObject8032FED0 : UnknownGenObject8032FED0_1 {
 char unknown50[8];
 inline ~UnknownGenObject8032FED0(){unknown00=lbl_804ED31C;}
};
extern "C" {
void *beNDMWShopCtrl00_vtableRead(){
 UnknownGenObject8032FED0 object;
 object.unknown00=lbl_804E6A60;
 object.unknown34.value=0;
 object.unknown38.value=0;
 object.unknown3C.value=0;
 object.unknown40.value=0;
 object.unknown44.value=0;
 object.unknown48.value=0;
 object.unknown4C.value=0;
 object.unknown00=lbl_804E6888;
 object.unknown00=lbl_804ED31C;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
