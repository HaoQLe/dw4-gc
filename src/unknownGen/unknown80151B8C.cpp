#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804A6338[];
extern char lbl_804A6460[];
extern char lbl_804A82BC[];
extern char lbl_804A8358[];
extern char lbl_804AA710[];
extern char lbl_804AAF48[];
}
struct UnknownGenRoot80151B8C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80151B8C(){fn_8006665C(this);}
};
struct UnknownGenObject80151B8C_0 : UnknownGenRoot80151B8C {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject80151B8C_0(){unknown00=lbl_804A8358;}
};
struct UnknownGenObject80151B8C : UnknownGenObject80151B8C_0 {
 char unknown28[8];
 inline ~UnknownGenObject80151B8C(){unknown00=lbl_804A82BC;}
};
extern "C" {
void *fn_80151B8C(){
 UnknownGenObject80151B8C object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A6338;
 object.unknown00=lbl_804AA710;
 object.unknown00=lbl_804A8358;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=lbl_804A82BC;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
