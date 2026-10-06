#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804A6338[];
extern char lbl_804A6460[];
extern char lbl_804A695C[];
extern char lbl_804A8050[];
extern char lbl_804A934C[];
extern char lbl_804AAF48[];
}
struct UnknownGenRoot8014887C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8014887C(){fn_8006665C(this);}
};
struct UnknownGenObject8014887C_0 : UnknownGenRoot8014887C {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject8014887C_0(){unknown00=lbl_804A8050;}
};
struct UnknownGenObject8014887C_1 : UnknownGenObject8014887C_0 {
 inline ~UnknownGenObject8014887C_1(){unknown00=lbl_804A934C;}
};
struct UnknownGenObject8014887C : UnknownGenObject8014887C_1 {
 char unknown28[8];
 inline ~UnknownGenObject8014887C(){unknown00=lbl_804A695C;}
};
extern "C" {
void *fn_8014887C(){
 UnknownGenObject8014887C object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A6338;
 object.unknown00=lbl_804A8050;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=lbl_804A934C;
 object.unknown00=lbl_804A695C;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
