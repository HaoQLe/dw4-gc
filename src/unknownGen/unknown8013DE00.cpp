#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804A533C[];
extern char lbl_804A5BE8[];
extern char lbl_804A5C7C[];
extern char lbl_804A6338[];
extern char lbl_804A6460[];
extern char lbl_804AAF48[];
}
struct UnknownGenRoot8013DE00 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8013DE00(){fn_8006665C(this);}
};
struct UnknownGenObject8013DE00_0 : UnknownGenRoot8013DE00 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 inline ~UnknownGenObject8013DE00_0(){unknown00=lbl_804A5C7C;}
};
struct UnknownGenObject8013DE00_1 : UnknownGenObject8013DE00_0 {
 inline ~UnknownGenObject8013DE00_1(){unknown00=lbl_804A5BE8;}
};
struct UnknownGenObject8013DE00 : UnknownGenObject8013DE00_1 {
 char unknown24[12];
 inline ~UnknownGenObject8013DE00(){unknown00=lbl_804A533C;}
};
extern "C" {
void *fn_8013DE00(){
 UnknownGenObject8013DE00 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A6338;
 object.unknown00=lbl_804A5C7C;
 object.unknown20.value=0;
 object.unknown00=lbl_804A5BE8;
 object.unknown00=lbl_804A533C;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
