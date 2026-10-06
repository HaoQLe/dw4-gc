#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804A46AC[];
extern char lbl_804A4A04[];
extern char lbl_804A6460[];
extern char lbl_804A83F4[];
extern char lbl_804AAF48[];
}
struct UnknownGenRoot8015213C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8015213C(){fn_8006665C(this);}
};
struct UnknownGenObject8015213C_0 : UnknownGenRoot8015213C {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject8015213C_0(){unknown00=lbl_804A4A04;}
};
struct UnknownGenObject8015213C_1 : UnknownGenObject8015213C_0 {
 UnknownGenRefMember unknown28;
 inline ~UnknownGenObject8015213C_1(){unknown00=lbl_804A46AC;}
};
struct UnknownGenObject8015213C : UnknownGenObject8015213C_1 {
 char unknown2C[12];
 inline ~UnknownGenObject8015213C(){unknown00=lbl_804A83F4;}
};
extern "C" {
void *fn_8015213C(){
 UnknownGenObject8015213C object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A4A04;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=lbl_804A46AC;
 object.unknown28.value=0;
 object.unknown00=lbl_804A83F4;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
