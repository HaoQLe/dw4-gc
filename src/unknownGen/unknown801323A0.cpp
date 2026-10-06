#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804A2FEC[];
extern char lbl_804A4A04[];
extern char lbl_804A6460[];
extern char lbl_804AAF48[];
}
struct UnknownGenRoot801323A0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801323A0(){fn_8006665C(this);}
};
struct UnknownGenObject801323A0_0 : UnknownGenRoot801323A0 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject801323A0_0(){unknown00=lbl_804A4A04;}
};
struct UnknownGenObject801323A0 : UnknownGenObject801323A0_0 {
 char unknown28[8];
 inline ~UnknownGenObject801323A0(){unknown00=lbl_804A2FEC;}
};
extern "C" {
void *fn_801323A0(){
 UnknownGenObject801323A0 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A4A04;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=lbl_804A2FEC;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
