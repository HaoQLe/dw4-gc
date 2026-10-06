#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804A31A0[];
extern char lbl_804A46AC[];
extern char lbl_804A4A04[];
extern char lbl_804A6460[];
extern char lbl_804AAF48[];
}
struct UnknownGenRoot80132E4C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80132E4C(){fn_8006665C(this);}
};
struct UnknownGenObject80132E4C_0 : UnknownGenRoot80132E4C {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject80132E4C_0(){unknown00=lbl_804A4A04;}
};
struct UnknownGenObject80132E4C_1 : UnknownGenObject80132E4C_0 {
 UnknownGenRefMember unknown28;
 inline ~UnknownGenObject80132E4C_1(){unknown00=lbl_804A46AC;}
};
struct UnknownGenObject80132E4C : UnknownGenObject80132E4C_1 {
 char unknown2C[4];
 UnknownGenString unknown30;
 UnknownGenRefMember unknown34;
 UnknownGenRefMember unknown38;
 char unknown3C[4];
 inline ~UnknownGenObject80132E4C(){unknown00=lbl_804A31A0;}
};
extern "C" {
void *fn_80132E4C(){
 UnknownGenObject80132E4C object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A4A04;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=lbl_804A46AC;
 object.unknown28.value=0;
 object.unknown00=lbl_804A31A0;
 object.unknown30.value=0;
 object.unknown34.value=0;
 object.unknown38.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
