#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804A4A04[];
extern char lbl_804A6460[];
extern char lbl_804A713C[];
extern char lbl_804AAF48[];
}
struct UnknownGenRoot8014D29C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8014D29C(){fn_8006665C(this);}
};
struct UnknownGenObject8014D29C_0 : UnknownGenRoot8014D29C {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject8014D29C_0(){unknown00=lbl_804A4A04;}
};
struct UnknownGenObject8014D29C : UnknownGenObject8014D29C_0 {
 UnknownGenString unknown28;
 char unknown2C[12];
 inline ~UnknownGenObject8014D29C(){unknown00=lbl_804A713C;}
};
extern "C" {
void *fn_8014D29C(){
 UnknownGenObject8014D29C object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A4A04;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=lbl_804A713C;
 object.unknown28.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
