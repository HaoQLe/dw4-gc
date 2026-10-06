#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804A3BE0[];
extern char lbl_804A4A04[];
extern char lbl_804A6460[];
extern char lbl_804AAF48[];
}
struct UnknownGenRoot801363EC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801363EC(){fn_8006665C(this);}
};
struct UnknownGenObject801363EC_0 : UnknownGenRoot801363EC {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject801363EC_0(){unknown00=lbl_804A4A04;}
};
struct UnknownGenObject801363EC : UnknownGenObject801363EC_0 {
 UnknownGenString unknown28;
 UnknownGenRefMember unknown2C;
 char unknown30[8];
 inline ~UnknownGenObject801363EC(){unknown00=lbl_804A3BE0;}
};
extern "C" {
void *fn_801363EC(){
 UnknownGenObject801363EC object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A4A04;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=lbl_804A3BE0;
 object.unknown28.value=0;
 object.unknown2C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
