#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804A6338[];
extern char lbl_804A6460[];
extern char lbl_804A7930[];
extern char lbl_804A8050[];
extern char lbl_804AAF48[];
}
struct UnknownGenRoot8014F984 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8014F984(){fn_8006665C(this);}
};
struct UnknownGenObject8014F984_0 : UnknownGenRoot8014F984 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject8014F984_0(){unknown00=lbl_804A8050;}
};
struct UnknownGenObject8014F984 : UnknownGenObject8014F984_0 {
 char unknown28[8];
 inline ~UnknownGenObject8014F984(){unknown00=lbl_804A7930;}
};
extern "C" {
void *fn_8014F984(){
 UnknownGenObject8014F984 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A6338;
 object.unknown00=lbl_804A8050;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=lbl_804A7930;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
