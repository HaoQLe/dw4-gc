#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804A3238[];
extern char lbl_804A4A04[];
extern char lbl_804A6460[];
extern char lbl_804AAF48[];
}
struct UnknownGenRoot801331FC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801331FC(){fn_8006665C(this);}
};
struct UnknownGenObject801331FC_0 : UnknownGenRoot801331FC {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject801331FC_0(){unknown00=lbl_804A4A04;}
};
struct UnknownGenObject801331FC : UnknownGenObject801331FC_0 {
 UnknownGenRefMember unknown28;
 UnknownGenString unknown2C;
 UnknownGenRefMember unknown30;
 char unknown34[12];
 inline ~UnknownGenObject801331FC(){unknown00=lbl_804A3238;}
};
extern "C" {
void *fn_801331FC(){
 UnknownGenObject801331FC object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A4A04;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=lbl_804A3238;
 object.unknown28.value=0;
 object.unknown2C.value=0;
 object.unknown30.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
