#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804A448C[];
extern char lbl_804A4A04[];
extern char lbl_804A6050[];
extern char lbl_804A6460[];
extern char lbl_804AAF48[];
}
struct UnknownGenRoot80139E0C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80139E0C(){fn_8006665C(this);}
};
struct UnknownGenObject80139E0C_0 : UnknownGenRoot80139E0C {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject80139E0C_0(){unknown00=lbl_804A4A04;}
};
struct UnknownGenObject80139E0C_1 : UnknownGenObject80139E0C_0 {
 UnknownGenString unknown28;
 UnknownGenRefMember unknown2C;
 inline ~UnknownGenObject80139E0C_1(){unknown00=lbl_804A6050;}
};
struct UnknownGenObject80139E0C : UnknownGenObject80139E0C_1 {
 char unknown30[8];
 inline ~UnknownGenObject80139E0C(){unknown00=lbl_804A448C;}
};
extern "C" {
void *fn_80139E0C(){
 UnknownGenObject80139E0C object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A4A04;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=lbl_804A6050;
 object.unknown28.value=0;
 object.unknown2C.value=0;
 object.unknown00=lbl_804A448C;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
