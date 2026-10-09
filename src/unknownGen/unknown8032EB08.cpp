#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804E6888[];
extern char lbl_804E6A60[];
extern char lbl_804ED10C[];
}
struct UnknownGenRoot8032EB08 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8032EB08(){fn_8006665C(this);}
};
struct UnknownGenObject8032EB08_0 : UnknownGenRoot8032EB08 {
 char unknown04[48];
 UnknownGenRefMember unknown34;
 UnknownGenRefMember unknown38;
 UnknownGenRefMember unknown3C;
 UnknownGenRefMember unknown40;
 UnknownGenRefMember unknown44;
 UnknownGenRefMember unknown48;
 UnknownGenRefMember unknown4C;
 inline ~UnknownGenObject8032EB08_0(){unknown00=lbl_804E6A60;}
};
struct UnknownGenObject8032EB08_1 : UnknownGenObject8032EB08_0 {
 inline ~UnknownGenObject8032EB08_1(){unknown00=lbl_804E6888;}
};
struct UnknownGenObject8032EB08 : UnknownGenObject8032EB08_1 {
 char unknown50[24];
 inline ~UnknownGenObject8032EB08(){unknown00=lbl_804ED10C;}
};
extern "C" {
void *beNDMWShopCtrl50_vtableRead(){
 UnknownGenObject8032EB08 object;
 object.unknown00=lbl_804E6A60;
 object.unknown34.value=0;
 object.unknown38.value=0;
 object.unknown3C.value=0;
 object.unknown40.value=0;
 object.unknown44.value=0;
 object.unknown48.value=0;
 object.unknown4C.value=0;
 object.unknown00=lbl_804E6888;
 object.unknown00=lbl_804ED10C;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
