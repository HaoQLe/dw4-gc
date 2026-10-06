#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804A4A04[];
extern char lbl_804A6460[];
extern char lbl_804A7650[];
extern char lbl_804AAF48[];
}
struct UnknownGenRoot8014EE48 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8014EE48(){fn_8006665C(this);}
};
struct UnknownGenObject8014EE48_0 : UnknownGenRoot8014EE48 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject8014EE48_0(){unknown00=lbl_804A4A04;}
};
struct UnknownGenObject8014EE48 : UnknownGenObject8014EE48_0 {
 char unknown28[8];
 inline ~UnknownGenObject8014EE48(){unknown00=lbl_804A7650;}
};
extern "C" {
void *fn_8014EE48(){
 UnknownGenObject8014EE48 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A4A04;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=lbl_804A7650;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
