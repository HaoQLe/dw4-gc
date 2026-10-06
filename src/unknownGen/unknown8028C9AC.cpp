#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804A4A04[];
extern char lbl_804A6460[];
extern char lbl_804AAF48[];
extern char lbl_804CCB68[];
}
struct UnknownGenRoot8028C9AC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8028C9AC(){fn_8006665C(this);}
};
struct UnknownGenObject8028C9AC_0 : UnknownGenRoot8028C9AC {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject8028C9AC_0(){unknown00=lbl_804A4A04;}
};
struct UnknownGenObject8028C9AC : UnknownGenObject8028C9AC_0 {
 char unknown28[12];
 UnknownGenString unknown34;
 UnknownGenRefMember unknown38;
 UnknownGenRefMember unknown3C;
 UnknownGenRefMember unknown40;
 char unknown44[12];
 inline ~UnknownGenObject8028C9AC(){unknown00=lbl_804CCB68;}
};
extern "C" {
void *fn_8028C9AC(){
 UnknownGenObject8028C9AC object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A4A04;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=lbl_804CCB68;
 object.unknown34.value=0;
 object.unknown38.value=0;
 object.unknown3C.value=0;
 object.unknown40.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
