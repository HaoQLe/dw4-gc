#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_80472FA0[];
extern char lbl_804748A0[];
extern char lbl_80474900[];
extern char lbl_804A3FAC[];
extern char lbl_804A404C[];
}
struct UnknownGenRoot80137A14 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80137A14(){fn_8006665C(this);}
};
struct UnknownGenObject80137A14_0 : UnknownGenRoot80137A14 {
 char unknown04[56];
 UnknownGenRefMember unknown3C;
 UnknownGenRefMember unknown40;
 UnknownGenRefMember unknown44;
 UnknownGenRefMember unknown48;
 UnknownGenRefMember unknown4C;
 inline ~UnknownGenObject80137A14_0(){unknown00=lbl_804A404C;}
};
struct UnknownGenObject80137A14 : UnknownGenObject80137A14_0 {
 inline ~UnknownGenObject80137A14(){unknown00=lbl_804A3FAC;}
};
extern "C" {
void *fn_80137A14(){
 UnknownGenObject80137A14 object;
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80474900;
 object.unknown00=lbl_804748A0;
 object.unknown00=lbl_804A404C;
 object.unknown3C.value=0;
 object.unknown40.value=0;
 object.unknown44.value=0;
 object.unknown48.value=0;
 object.unknown4C.value=0;
 object.unknown00=lbl_804A3FAC;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
