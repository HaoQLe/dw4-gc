#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804A6338[];
extern char lbl_804A6460[];
extern char lbl_804A776C[];
extern char lbl_804AAF48[];
}
struct UnknownGenRoot8014F214 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8014F214(){fn_8006665C(this);}
};
struct UnknownGenObject8014F214 : UnknownGenRoot8014F214 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 char unknown28[8];
 inline ~UnknownGenObject8014F214(){unknown00=lbl_804A776C;}
};
extern "C" {
void *fn_8014F214(){
 UnknownGenObject8014F214 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A6338;
 object.unknown00=lbl_804A776C;
 object.unknown20.value=0;
 object.unknown24.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
