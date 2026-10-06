#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804A6460[];
extern char lbl_804A6C54[];
extern char lbl_804A8AD0[];
extern char lbl_804AA878[];
extern char lbl_804AAF48[];
}
struct UnknownGenRoot8014AF18 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8014AF18(){fn_8006665C(this);}
};
struct UnknownGenObject8014AF18_0 : UnknownGenRoot8014AF18 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 inline ~UnknownGenObject8014AF18_0(){unknown00=lbl_804A8AD0;}
};
struct UnknownGenObject8014AF18 : UnknownGenObject8014AF18_0 {
 UnknownGenRefMember unknown24;
 char unknown28[8];
 inline ~UnknownGenObject8014AF18(){unknown00=lbl_804A6C54;}
};
extern "C" {
void *fn_8014AF18(){
 UnknownGenObject8014AF18 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804AA878;
 object.unknown00=lbl_804A8AD0;
 object.unknown20.value=0;
 object.unknown00=lbl_804A6C54;
 object.unknown24.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
