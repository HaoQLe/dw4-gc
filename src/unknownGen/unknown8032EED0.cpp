#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void igObject_construct(void *);
extern char lbl_804E6888[];
extern char lbl_804E6A60[];
extern char beNDMWShopCtrl40_vtable[];
}
struct UnknownGenRoot8032EED0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8032EED0(){igObject_construct(this);}
};
struct UnknownGenObject8032EED0_0 : UnknownGenRoot8032EED0 {
 char unknown04[48];
 UnknownGenRefMember unknown34;
 UnknownGenRefMember unknown38;
 UnknownGenRefMember unknown3C;
 UnknownGenRefMember unknown40;
 UnknownGenRefMember unknown44;
 UnknownGenRefMember unknown48;
 UnknownGenRefMember unknown4C;
 inline ~UnknownGenObject8032EED0_0(){unknown00=lbl_804E6A60;}
};
struct UnknownGenObject8032EED0_1 : UnknownGenObject8032EED0_0 {
 inline ~UnknownGenObject8032EED0_1(){unknown00=lbl_804E6888;}
};
struct UnknownGenObject8032EED0 : UnknownGenObject8032EED0_1 {
 char unknown50[8];
 inline ~UnknownGenObject8032EED0(){unknown00=beNDMWShopCtrl40_vtable;}
};
extern "C" {
void *beNDMWShopCtrl40_vtableRead(){
 UnknownGenObject8032EED0 object;
 object.unknown00=lbl_804E6A60;
 object.unknown34.value=0;
 object.unknown38.value=0;
 object.unknown3C.value=0;
 object.unknown40.value=0;
 object.unknown44.value=0;
 object.unknown48.value=0;
 object.unknown4C.value=0;
 object.unknown00=lbl_804E6888;
 object.unknown00=beNDMWShopCtrl40_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
