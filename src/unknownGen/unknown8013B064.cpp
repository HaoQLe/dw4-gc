#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804A4914[];
extern char lbl_804A6460[];
extern char lbl_804AA22C[];
}
struct UnknownGenRoot8013B064 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8013B064(){fn_8006665C(this);}
};
struct UnknownGenObject8013B064 : UnknownGenRoot8013B064 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 UnknownGenRefMember unknown28;
 UnknownGenRefMember unknown2C;
 UnknownGenString unknown30;
 char unknown34[12];
 inline ~UnknownGenObject8013B064(){unknown00=lbl_804A4914;}
};
extern "C" {
void *fn_8013B064(){
 UnknownGenObject8013B064 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AA22C;
 object.unknown00=lbl_804A4914;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown28.value=0;
 object.unknown2C.value=0;
 object.unknown30.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
