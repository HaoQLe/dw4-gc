#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804A46AC[];
extern char lbl_804A4A04[];
extern char lbl_804A5FB8[];
extern char lbl_804A6460[];
extern char lbl_804AAF48[];
}
struct UnknownGenRoot80142104 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80142104(){fn_8006665C(this);}
};
struct UnknownGenObject80142104_0 : UnknownGenRoot80142104 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject80142104_0(){unknown00=lbl_804A4A04;}
};
struct UnknownGenObject80142104_1 : UnknownGenObject80142104_0 {
 UnknownGenRefMember unknown28;
 inline ~UnknownGenObject80142104_1(){unknown00=lbl_804A46AC;}
};
struct UnknownGenObject80142104 : UnknownGenObject80142104_1 {
 UnknownGenString unknown2C;
 UnknownGenString unknown30;
 char unknown34[4];
 UnknownGenString unknown38;
 char unknown3C[20];
 inline ~UnknownGenObject80142104(){unknown00=lbl_804A5FB8;}
};
extern "C" {
void *fn_80142104(){
 UnknownGenObject80142104 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A4A04;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=lbl_804A46AC;
 object.unknown28.value=0;
 object.unknown00=lbl_804A5FB8;
 object.unknown2C.value=0;
 object.unknown30.value=0;
 object.unknown38.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
