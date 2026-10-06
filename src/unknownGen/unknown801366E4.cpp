#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804A3C68[];
extern char lbl_804A46AC[];
extern char lbl_804A4A04[];
extern char lbl_804A6460[];
extern char lbl_804AAF48[];
}
struct UnknownGenRoot801366E4 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801366E4(){fn_8006665C(this);}
};
struct UnknownGenObject801366E4_0 : UnknownGenRoot801366E4 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject801366E4_0(){unknown00=lbl_804A4A04;}
};
struct UnknownGenObject801366E4_1 : UnknownGenObject801366E4_0 {
 UnknownGenRefMember unknown28;
 inline ~UnknownGenObject801366E4_1(){unknown00=lbl_804A46AC;}
};
struct UnknownGenObject801366E4 : UnknownGenObject801366E4_1 {
 char unknown2C[4];
 UnknownGenString unknown30;
 UnknownGenString unknown34;
 UnknownGenRefMember unknown38;
 UnknownGenRefMember unknown3C;
 char unknown40[8];
 inline ~UnknownGenObject801366E4(){unknown00=lbl_804A3C68;}
};
extern "C" {
void *fn_801366E4(){
 UnknownGenObject801366E4 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A4A04;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=lbl_804A46AC;
 object.unknown28.value=0;
 object.unknown00=lbl_804A3C68;
 object.unknown30.value=0;
 object.unknown34.value=0;
 object.unknown38.value=0;
 object.unknown3C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
