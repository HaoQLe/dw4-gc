#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804A61B8[];
extern char lbl_804A6460[];
extern char lbl_804AA1C0[];
}
struct UnknownGenRoot8014320C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8014320C(){fn_8006665C(this);}
};
struct UnknownGenObject8014320C : UnknownGenRoot8014320C {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 UnknownGenRefMember unknown28;
 UnknownGenRefMember unknown2C;
 char unknown30[8];
 inline ~UnknownGenObject8014320C(){unknown00=lbl_804A61B8;}
};
extern "C" {
void *fn_8014320C(){
 UnknownGenObject8014320C object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AA1C0;
 object.unknown00=lbl_804A61B8;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown28.value=0;
 object.unknown2C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
