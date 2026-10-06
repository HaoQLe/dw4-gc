#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804A46AC[];
extern char lbl_804A4A04[];
extern char lbl_804A6460[];
extern char lbl_804A848C[];
extern char lbl_804AAF48[];
}
struct UnknownGenRoot801523FC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801523FC(){fn_8006665C(this);}
};
struct UnknownGenObject801523FC_0 : UnknownGenRoot801523FC {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject801523FC_0(){unknown00=lbl_804A4A04;}
};
struct UnknownGenObject801523FC_1 : UnknownGenObject801523FC_0 {
 UnknownGenRefMember unknown28;
 inline ~UnknownGenObject801523FC_1(){unknown00=lbl_804A46AC;}
};
struct UnknownGenObject801523FC : UnknownGenObject801523FC_1 {
 char unknown2C[12];
 inline ~UnknownGenObject801523FC(){unknown00=lbl_804A848C;}
};
extern "C" {
void *fn_801523FC(){
 UnknownGenObject801523FC object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A4A04;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=lbl_804A46AC;
 object.unknown28.value=0;
 object.unknown00=lbl_804A848C;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
