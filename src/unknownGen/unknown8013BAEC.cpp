#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804A4A8C[];
extern char lbl_804A6338[];
extern char lbl_804A6460[];
extern char lbl_804AAF48[];
}
struct UnknownGenRoot8013BAEC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8013BAEC(){fn_8006665C(this);}
};
struct UnknownGenObject8013BAEC : UnknownGenRoot8013BAEC {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 UnknownGenRefMember unknown28;
 char unknown2C[12];
 inline ~UnknownGenObject8013BAEC(){unknown00=lbl_804A4A8C;}
};
extern "C" {
void *fn_8013BAEC(){
 UnknownGenObject8013BAEC object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A6338;
 object.unknown00=lbl_804A4A8C;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown28.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
