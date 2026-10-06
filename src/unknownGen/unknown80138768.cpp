#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804A41D0[];
extern char lbl_804A46AC[];
extern char lbl_804A4A04[];
extern char lbl_804A6460[];
extern char lbl_804AAF48[];
}
struct UnknownGenRoot80138768 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80138768(){fn_8006665C(this);}
};
struct UnknownGenObject80138768_0 : UnknownGenRoot80138768 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject80138768_0(){unknown00=lbl_804A4A04;}
};
struct UnknownGenObject80138768_1 : UnknownGenObject80138768_0 {
 UnknownGenRefMember unknown28;
 inline ~UnknownGenObject80138768_1(){unknown00=lbl_804A46AC;}
};
struct UnknownGenObject80138768 : UnknownGenObject80138768_1 {
 UnknownGenString unknown2C;
 UnknownGenString unknown30;
 char unknown34[12];
 inline ~UnknownGenObject80138768(){unknown00=lbl_804A41D0;}
};
extern "C" {
void *fn_80138768(){
 UnknownGenObject80138768 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A4A04;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=lbl_804A46AC;
 object.unknown28.value=0;
 object.unknown00=lbl_804A41D0;
 object.unknown2C.value=0;
 object.unknown30.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
