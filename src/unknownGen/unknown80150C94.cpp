#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804A6338[];
extern char lbl_804A6460[];
extern char lbl_804A7F20[];
extern char lbl_804A8050[];
extern char lbl_804AAF48[];
}
struct UnknownGenRoot80150C94 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80150C94(){fn_8006665C(this);}
};
struct UnknownGenObject80150C94_0 : UnknownGenRoot80150C94 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject80150C94_0(){unknown00=lbl_804A8050;}
};
struct UnknownGenObject80150C94 : UnknownGenObject80150C94_0 {
 char unknown28[8];
 inline ~UnknownGenObject80150C94(){unknown00=lbl_804A7F20;}
};
extern "C" {
void *fn_80150C94(){
 UnknownGenObject80150C94 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A6338;
 object.unknown00=lbl_804A8050;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=lbl_804A7F20;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
