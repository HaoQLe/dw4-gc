#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_80472FA0[];
extern char lbl_804748A0[];
extern char lbl_80474900[];
extern char lbl_804A3E6C[];
extern char lbl_804A404C[];
}
struct UnknownGenRoot8013747C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8013747C(){fn_8006665C(this);}
};
struct UnknownGenObject8013747C_0 : UnknownGenRoot8013747C {
 char unknown04[56];
 UnknownGenRefMember unknown3C;
 UnknownGenRefMember unknown40;
 UnknownGenRefMember unknown44;
 UnknownGenRefMember unknown48;
 UnknownGenRefMember unknown4C;
 inline ~UnknownGenObject8013747C_0(){unknown00=lbl_804A404C;}
};
struct UnknownGenObject8013747C : UnknownGenObject8013747C_0 {
 inline ~UnknownGenObject8013747C(){unknown00=lbl_804A3E6C;}
};
extern "C" {
void *fn_8013747C(){
 UnknownGenObject8013747C object;
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80474900;
 object.unknown00=lbl_804748A0;
 object.unknown00=lbl_804A404C;
 object.unknown3C.value=0;
 object.unknown40.value=0;
 object.unknown44.value=0;
 object.unknown48.value=0;
 object.unknown4C.value=0;
 object.unknown00=lbl_804A3E6C;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
