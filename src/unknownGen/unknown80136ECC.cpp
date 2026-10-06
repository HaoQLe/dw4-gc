#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804A3D88[];
extern char lbl_804A4A04[];
extern char lbl_804A6460[];
extern char lbl_804AAF48[];
}
struct UnknownGenRoot80136ECC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80136ECC(){fn_8006665C(this);}
};
struct UnknownGenObject80136ECC_0 : UnknownGenRoot80136ECC {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject80136ECC_0(){unknown00=lbl_804A4A04;}
};
struct UnknownGenObject80136ECC : UnknownGenObject80136ECC_0 {
 char unknown28[8];
 inline ~UnknownGenObject80136ECC(){unknown00=lbl_804A3D88;}
};
extern "C" {
void *fn_80136ECC(){
 UnknownGenObject80136ECC object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A4A04;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=lbl_804A3D88;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
