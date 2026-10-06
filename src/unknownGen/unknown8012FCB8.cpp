#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804A2BC0[];
extern char lbl_804A46AC[];
extern char lbl_804A4A04[];
extern char lbl_804A6460[];
extern char lbl_804AAF48[];
}
struct UnknownGenRoot8012FCB8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8012FCB8(){fn_8006665C(this);}
};
struct UnknownGenObject8012FCB8_0 : UnknownGenRoot8012FCB8 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject8012FCB8_0(){unknown00=lbl_804A4A04;}
};
struct UnknownGenObject8012FCB8_1 : UnknownGenObject8012FCB8_0 {
 UnknownGenRefMember unknown28;
 inline ~UnknownGenObject8012FCB8_1(){unknown00=lbl_804A46AC;}
};
struct UnknownGenObject8012FCB8 : UnknownGenObject8012FCB8_1 {
 char unknown2C[12];
 inline ~UnknownGenObject8012FCB8(){unknown00=lbl_804A2BC0;}
};
extern "C" {
void *fn_8012FCB8(){
 UnknownGenObject8012FCB8 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A4A04;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=lbl_804A46AC;
 object.unknown28.value=0;
 object.unknown00=lbl_804A2BC0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
